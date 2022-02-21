#include<stdio.h>

int f(){
  return 20;
}

int main (void)
{
  int i = 10;
  i = f();
  printf("%d\n", i);
  return 0;
}