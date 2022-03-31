#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkme(char *buf) {
  if(buf[0] == 'b' && buf[1] == 'u' && buf[2] == 'g'){
    abort(); // bug triggered!
    return 1;
  }
  return 0;
}

int main(int argc, char *argv[]) {
  char buf[256];

  read(0, buf, sizeof(buf));
  return checkme(buf);
}
