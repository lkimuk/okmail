#include "mail_body_builder.h"

namespace okmail {


mail_body_builder& mail_body_builder::host(const std::string& address) {
	mailBody_.host = address;
}

mail_body_builder& mail_body_builder::port(const std::string& port) {
	mailBody_.port = port;
}

mail_body_builder& mail_body_builder::from(const std::string& sender) {
	mailBody_.sender = sender;
}

mail_body_builder& mail_body_builder::to(const std::string& receiver) {
	mailBody_.receiver = receiver;
}

mail_body_builder& mail_body_builder::with_verifycode(const std::string& verifyCode) {
	mailBody_.verifycode = verifyCode;
}

mail_body_builder& mail_body_builder::subject(const std::string& subject) {
	mailBody_.subject = subject;
}

mail_body_builder& mail_body_builder::content(const std::string& content) {
	mailBody_.content = content;
}

}