#include <stdio.h>

void for_each(const char* array[], const size_t size, void (*action)(const char*)) {
  for (int index = 0; index < size; ++index)
    action(array[index]);
}

void print_line(const char* s) {
  printf("%s\n", s);
}

// The main entry point for the application.
int main() {
  const size_t name_size = 4;
  const char* names[name_size] = {"Bruce", "Alfred", "Tim", "Richard"};
  void (*action)(const char*) = print_line;
  
  // Display the contents of the array using the function pointer.
  for (int index = 0; index < name_size; ++index)
    action(names[index]);

  // Display the contents of the array using for_each with print_line methods as argument.
  for_each(names, name_size, print_line);
}

// This code produces the following output with colors:
//
// Bruce
// Alfred
// Tim
// Richard
// Bruce
// Alfred
// Tim
// Richard
