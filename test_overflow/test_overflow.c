
#include <stdio.h>

void foo(int a, int b, int c)
{
  int go = 0;
  int bar[2]; 
  char qux[4];
  bar[0] = 0x41; 
  bar[1] = 0x41000000;
  qux[0] = 0x42; 
  qux[1] = 0x43; 
  qux[2] = 0x44; 
  qux[3] = 0x45;
  
  // change the value of go
  // qux[12] = 1; 
   
  if(go == 1)
    printf(" what? go = %d\n", go);
    
  // change the value of %rbp -> segment fault 
  // bar[3] = bar[4] = 0; 
  
  // change the value of return address 
  // bar[5] = 0x555551d0; 
  // bar[6] = 0x00005555;
  
  return ; 
}

void can_you_call_me(){

  printf("WoW, you make it!\n"); 
}

int main(int argc, char* argv[])
{
  foo(1, 2, 3);  
  printf("finished, return.\n");
  return 0; 
}