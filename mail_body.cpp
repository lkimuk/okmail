#include "mail_body.h"

namespace okmail {

mail_body_builder mail_body::builder() {
	return mail_body_builder{};
}

} // namespace okmail
