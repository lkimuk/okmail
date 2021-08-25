#ifndef OKMAIL_MAIL_BODY_H
#define OKMAIL_MAIL_BODY_H

#include <string>


namespace okmail
{

class mail_body {
	std::string host;      // 代理邮件服务器
	std::string port;      // 代理邮件服务器端口

	std::string sender;    // 发送端邮箱地址
	std::string receiver;  // 接收端邮箱地址
	std::string verifycode;  // 发送端授权码
	std::string subject;   // 邮件主题
	std::string content;   // 邮件内容

	mail_body() = default;

public:
	static mail_body_builder builder();

	mail_body(const mail_body& other) noexcept
		: host{other.host},
		  port{other.port},
		  sender{other.sender},
		  receiver{other.receiver},
		  verifycode{other.verifycode},
		  subject{ other.subject },
		  content{ other.content } 
	{}

	mail_body& operator=(const mail_body& other) noexcept {
		if (this == &other) return *this;

		host = other.host;
		port = other.port;
		sender = other.sender;
		receiver = other.receiver;
		verifycode = other.verifycode;
		subject = other.subject;
		content = other.content;
	}


	friend class mail_body_builder;
};

} // namespace okmail

#endif // OKMAIL_MAIL_BODY_H