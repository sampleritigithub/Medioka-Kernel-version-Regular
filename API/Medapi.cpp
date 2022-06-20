#include "define.h"
struct regular() {
  restart();
  ver();
  medinit();
}

int restart()
{
  asm mov sp, 00h;
}
int ver()
{
  #include "../print.h"
  PrintString("0.1.0");
}
int medinit()
{
  restart();
}
