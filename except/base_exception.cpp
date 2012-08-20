#include <cl/syslog/syslog.h>

#include "base_exception.h"

namespace cl
{
namespace except
{

SYSLOG_MODULE(base_exception)

base_exception::base_exception(const std::string& message)
: runtime_error(message)
{
    LOG_ERR << message;
}

}
}