#include <iostream>
#include "websocketpp/server.hpp"
#include "websocketpp/config/asio_no_tls.hpp"
#include "MessageHandler.h"

typedef websocketpp::server<websocketpp::config::asio> server;
using websocketpp::lib::placeholders::_1;
using websocketpp::lib::placeholders::_2;
using websocketpp::lib::bind;

typedef server::message_ptr message_ptr;

int main() {
    std::cout << "Herle Werle" << std::endl;

    // Create a server endpoint
    server echo_server;

    // Create a server endpoint
    MessageHandler* msgHandler = new MessageHandler();

    auto onMessage = [&msgHandler](server* s, websocketpp::connection_hdl hdl, message_ptr msg) -> void {
        msgHandler->on_message(s, hdl, msg);
    };

    try {
        // Set logging settings
        echo_server.set_access_channels(websocketpp::log::alevel::all);
        echo_server.clear_access_channels(websocketpp::log::alevel::frame_payload);

        // Initialize Asio
        echo_server.init_asio();

        // Register our message handler
        echo_server.set_message_handler(bind(onMessage,&echo_server,::_1,::_2));

        // Listen on port 9002
        echo_server.listen(9002);

        // Start the server accept loop
        echo_server.start_accept();

        // Start the ASIO io_service run loop
        echo_server.run();
    } catch (websocketpp::exception const & e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << "other exception" << std::endl;
    }
    
    return 0;
}