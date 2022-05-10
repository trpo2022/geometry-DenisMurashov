#include "../thirdparty/ctest.h"
#include "../src/libgeometry/hello.c"
#include <math.h>

int main(int argc, const char** argv)
{
    return CTEST(SUM_test, result_sum);
}
