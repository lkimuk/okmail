#ifndef OKMAIL_MAIL_BODY_BUILDER_H
#define OKMAIL_MAIL_BODY_BUILDER_H

#include "mail_body.h"

namespace okmail 
{

class mail_body_builder {
public:
	
	mail_body_builder& host(const std::string& address);
	mail_body_builder& port(const std::string& port);

	mail_body_builder& from(const std::string& sender);
	mail_body_builder& to(const std::string& receiver);
	mail_body_builder& with_verifycode(const std::string& verifyCode);
	mail_body_builder& subject(const std::string& subject);
	mail_body_builder& content(const std::string& content);

	auto build() const {
		return mailBody_;
	}

private:
	mail_body mailBody_;
};

} // namespace okmail

#endif // OKMAIL_MAIL_BODY_BUILDER_H