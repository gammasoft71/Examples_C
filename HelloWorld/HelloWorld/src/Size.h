#pragma once

typedef struct Size Size;
struct Size {
  int width;
  int height;
};

char* SizeToString(const Size* size, char str[]);
