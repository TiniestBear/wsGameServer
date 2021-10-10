#include "protobuf/player.pb.h"
#include "MessageHandler.h"
#include "websocketpp/server.hpp"
#include "websocketpp/config/asio_no_tls.hpp"

typedef websocketpp::server<websocketpp::config::asio> server;
using websocketpp::lib::placeholders::_1;
using websocketpp::lib::placeholders::_2;
using websocketpp::lib::bind;
typedef server::message_ptr message_ptr;

MessageHandler::MessageHandler(){
    this->reportedPosition = player::Position().New();
    this->reportedPosition->set_id("DefaultID");
    player::Position_Quat* quat = this->reportedPosition->mutable_quat();
    quat->set_w(1.0f); quat->set_x(0.0f); quat->set_y(0.0f); quat->set_z(0.0f);
    player::Position_Trans* trans = this->reportedPosition->mutable_trans();
    trans->set_x(0.0f); trans->set_y(0.0f); trans->set_z(0.0f);
}

MessageHandler::~MessageHandler(){
    this->reportedPosition->Clear();
    this->reportedPosition = nullptr;
}

void MessageHandler::on_message(const std::string& msg) {
    std::cout << "on_message msg " << msg << std::endl;
}

void MessageHandler::on_message(server* s, websocketpp::connection_hdl hdl, message_ptr msg) {
    std::cout << "on_message called with hdl: " << hdl.lock().get()
              << " and message: " << msg->get_payload()
              << std::endl;

    // check for a special command to instruct the server to stop listening so
    // it can be cleanly exited.
    if (msg->get_payload() == "stop-listening") {
        s->stop_listening();
        return;
    }

    try {
        s->send(hdl, msg->get_payload(), msg->get_opcode());
    } catch (websocketpp::exception const & e) {
        std::cout << "Echo failed because: "
                  << "(" << e.what() << ")" << std::endl;
    }
}