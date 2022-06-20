#include "print.h"
#include "interrupt.h"
LoadIDT();
InitializeLib();
bootscreen();
runsys();
void bootscreen() {
  PrintString("Loaded binaries:\n");
  PrintChar(0x7e00);
  PrintString("----------------\n");
}
void runsys() {
  void medver() {
    PrintString("Using Version 0.1.0");
  }
  void sleep() {

    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
    PrintString(" \n");
  }
  void killkernelstr() {
    PrintString("You can't kill this process\n");
    PrintString("Process: med authority/krnl\n");
  }
  void hex() {
    PrintString(0x7e00);
  }
  void errorstr() {
    PrintString("A fatal exception occurred.");
  }
  void syserrstr() {
    PrintChar(0x7f00);
  }
}
PrintString("Successful Bootup!");
// (c) Tobey Organization 5/21/2022 8:27  AM
