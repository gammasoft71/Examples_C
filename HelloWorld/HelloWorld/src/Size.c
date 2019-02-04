#include "Size.h"
#include <stdio.h>

char* SizeToString(const Size* size, char str[]) {
  sprintf(str, "{width=%d, height=%d}", size->width, size->height);
  return str;
}
