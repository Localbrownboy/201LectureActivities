#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
  char *message = "Hello World!\n";
  int n = strlen(message);

  for (int i = 0; i < n; i++) {
    printf("%c", message[i]);
    fflush(stdout);
    sleep(1);
  }

  return 0;
}
