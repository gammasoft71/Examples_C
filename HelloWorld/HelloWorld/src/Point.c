#include "Point.h"
#include <stdio.h>

char* PointToString(const Point* point, char str[]) {
  sprintf(str, "{x=%d, y=%d}", point->x, point->y);
  return str;
}
