#pragma once

typedef struct Point Point;
struct Point {
  int x;
  int y;
};

char* PointToString(const Point* point, char str[]);
