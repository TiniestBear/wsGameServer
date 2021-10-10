#pragma once
#include "websocketpp/server.hpp"
#include "websocketpp/config/asio_no_tls.hpp"

typedef websocketpp::server<websocketpp::config::asio> server;
using websocketpp::lib::placeholders::_1;
using websocketpp::lib::placeholders::_2;
using websocketpp::lib::bind;
typedef server::message_ptr message_ptr;
namespace player {
	class Position;
}

struct MessageHandler {
	MessageHandler();
	~MessageHandler();
	void on_message(const std::string& msg);
	void on_message(server*, websocketpp::connection_hdl, message_ptr);

	player::Position* reportedPosition = nullptr;
};