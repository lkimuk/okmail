#ifndef OKMAIL_MAIL_SENDER_HPP
#define OKMAIL_MAIL_SENDER_HPP

#include "asio_policy.hpp"

namespace okmail 
{

template<typename TcpPolicy = asio_policy>
class mail_sender {
public:
	bool send_mail();
};

} // namespace okmail

#endif // OKMAIL_MAIL_SENDER_H