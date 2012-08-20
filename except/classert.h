#pragma once

#include "error.h"

namespace cl
{
namespace except
{

class assert_error : public cl::except::error
{
public:
    assert_error(const char* msg, const char* file, const char* func, int line);
};

}
}

#ifdef DEBUG
    #define ASSERT(Expression) if(!(Expression)) throw cl::except::assert_error(#Expression, __FILE__,  __FUNCTION__, __LINE__);
#else
    #define ASSERT(Expression)
#endif


