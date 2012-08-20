#include "scope_profile.h"

#include <boost/date_time/posix_time/posix_time.hpp>

#include "syslog.h"

using namespace boost::posix_time;

namespace cl
{
namespace syslog
{

scope_profile::scope_profile(const cl::syslog::module& module, const char* func_info, level_t level)
: module_(module)
, func_info_(func_info)
, level_(level)
, time_(microsec_clock::local_time())
{
}

scope_profile::~scope_profile()
{
    if (!cl::syslog::logman().level_check(level_))
        return;
    ptime cur_time = microsec_clock::local_time();
    int delta = int((cur_time - time_).total_microseconds());
    module_ << level_ << "%1 : %2 microsecond(s)", func_info_, delta;
}

}
}
