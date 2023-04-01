#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

extern "C" {
  const char my_interp[] __attribute__((section(".interp"))) = "/lib64/ld-linux-x86-64.so.2";
  void help_info() {
    printf("This is mylib.\n");
    exit(0);
  }
}

void MyLib::doSomething() {
  // Do something here
}
