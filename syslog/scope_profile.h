#pragma once

#include <boost/date_time/posix_time/ptime.hpp>
#include "common.h"

namespace cl
{
namespace syslog
{

class module;

class scope_profile
{
public:
    scope_profile(const cl::syslog::module& module, const char* func_info, level_t level = debug);
    ~scope_profile();
private:
    const cl::syslog::module& module_;
    const char* func_info_;
    level_t level_;
    boost::posix_time::ptime time_;
};

}
}

#ifdef _MSC_VER
#define __FUNC_INFO_ __FUNCSIG__
#else
#define __FUNC_INFO_ __PRETTY_FUNCTION__
#endif

#define SYSLOG_SCOPE_PROFILE cl::syslog::scope_profile __scope_profile(___syslog, __FUNC_INFO_);
#define SYSLOG_SCOPE_PROFILE_MSG(msg) cl::syslog::scope_profile __scope_profile(___syslog, msg);
