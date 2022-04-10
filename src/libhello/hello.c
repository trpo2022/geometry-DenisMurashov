#include <libhello/hello.h>
void make_string_null(char c[]) {
  int i;
  for (i = 0; i < strlen(c); i++) {
    c[i] = ' ';
  }
}
bool num_check(char c[]) {
  int i, k = 0;
  for (i = ukazatel(c, '(', 0); i < ukazatel(c, ')', 0); i++) {
    if (!isdigit(c[i]) && !isspace(c[i]) && !ispunct(c[i])) {
      k++;
    }
  }
  if (k > 0) {
    return false;
  } else {
    return true;
  }
}
