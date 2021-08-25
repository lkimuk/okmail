#ifndef OKMAIL_ASIO_POLICY_HPP
#define OKMAIL_ASIO_POLICY_HPP

#include <boost/asio.hpp>

using boost::asio::ip::tcp;
using boost::asio::ip::address;
using boost::asio::buffer;

namespace okmail
{

class asio_policy {
public:
	void connect(const char* address, const char* port) {
		tcp::resolver r(io_);
		tcp::resolver::query q(address, port);
		auto iter = r.resolver(q);

		socket_.connect(*iter);
	}

private:
	boost::asio::io_service io_;
	tcp::socket socket_{ io_ };
};
}

#endif // OKMAIL_ASIO_POLICY_HPP