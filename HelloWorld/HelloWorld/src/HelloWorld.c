#include <stdio.h>
#include <stdlib.h>
#include "Point.h"
#include "Size.h"
#include <limits.h>

typedef struct Data Data;
#pragma pack(push)
#pragma pack(1)
struct Data {
  char c;
  int i;
};
#pragma pack(pop)

int main(int argc, char* argv[]) {
  printf("sizeof(char) = %ld\n", sizeof(char));
  printf("sizeof(int) = %ld\n", sizeof(int));
  printf("sizeof(long) = %ld\n", sizeof(long));
  printf("sizeof(long int) = %ld\n", sizeof(long int));
  printf("sizeof(float) = %ld\n", sizeof(float));
  printf("sizeof(double) = %ld\n", sizeof(double));
  printf("sizeof(long double) = %ld\n", sizeof(long double));
  printf("sizeof(Data) = %ld\n", sizeof(Data));
  int* ptr = malloc(sizeof(int));
  
  free(ptr);
  /*
   FILE* file = fopen("sample.txt", "r");
  if (file == NULL) {
    perror("File opening failed");
    return EXIT_FAILURE;
  }

  fseek(file, 0, SEEK_END);
  int size  = ftell(file);
  rewind(file);
  
  char lines[size+1];
  lines[fread(lines, 1, size, file)] = 0;
  fprintf(stdout, "File contains :\n%s\n", lines);
  fclose(file);
   */
  return EXIT_SUCCESS;

  /*
  printf("Hello, World!\n");
  Point point = {0, 0};
  char str[50];
  printf("point = %s\n", PointToString(&point, str));
  point.x = 200;
  point.y = 300;
  printf("point = %s\n", PointToString(&point, str));
  
  Size size = {800, 600};
  printf("size = %s\n", SizeToString(&size, str));
  printf("\n");
   */
}
