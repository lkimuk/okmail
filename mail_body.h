#ifndef OKMAIL_MAIL_BODY_H
#define OKMAIL_MAIL_BODY_H

#include <string>


namespace okmail
{

class mail_body {
	std::string host;      // �����ʼ�������
	std::string port;      // �����ʼ��������˿�

	std::string sender;    // ���Ͷ������ַ
	std::string receiver;  // ���ն������ַ
	std::string verifycode;  // ���Ͷ���Ȩ��
	std::string subject;   // �ʼ�����
	std::string content;   // �ʼ�����

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