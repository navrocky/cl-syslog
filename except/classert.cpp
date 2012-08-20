#include <string>
#include <boost/format.hpp>

#include "classert.h"

namespace cl
{
namespace except
{

assert_error::assert_error(const char* msg, const char* file, const char* func, int line)
: cl::except::error((boost::format("%1%:%2%:%3% - %4%") % file % line % func % msg).str())
{
}

}
}
