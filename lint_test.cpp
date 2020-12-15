/*!
 *     Copyright:  Copyright (c) 2019, HiSEON.me
 */

#include <stdio.h>

int sum(int a, int b);

int main() {
  for (int i=0; i < 10; i++) {
    printf("hello, world\n");
  }

  return 0;
}

int sum(int a, int b) {
  return a+b;  // 덧셈을 계산
}
