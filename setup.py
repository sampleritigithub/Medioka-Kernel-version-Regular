print("==Medioka Setup==")
#Username:
name = input ("Enter your name here: ")
#Computer's name:
computer = input("Your computer's name: ")
with open ("medlogon.h", "w")as f:
  f.writelines("""
#include <iostream.h>
using namespace std;
cout << "Welcome,"""+name+"of"+computer+'";')
