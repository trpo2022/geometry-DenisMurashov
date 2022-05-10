#include <hello.h>
#include<ctest.h>
#include <math.h>

CTEST(SUM_test, result_sum)
{
  const int a=5;
  const int a1=5;
  const int a2=5;
  const int a3=5;
  const int a4=5;
  
  const int result=SUM(a,a1,a2,a3,a4);
  
  const int expected = 9;
  ASSERT_EQUAL(expected, result);
}
