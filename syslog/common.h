#ifndef _CL_SYSLOG_COMMON_H
#define	_CL_SYSLOG_COMMON_H

namespace cl
{
namespace syslog
{

/*! defined if thread logging needed */
#define USE_THREADS

/*! Log message level */
enum level_t
{
    harddebug = 0,
    debug     = 1,
    info      = 2,
    warning   = 3,
    error     = 4,
    critical  = 5
};

const level_t default_level = debug;

}
}

#endif	/* _CL_SYSLOG_COMMON_H */

