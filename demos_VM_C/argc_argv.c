
#include <stdio.h>

int main(int argc, char* argv[])
{
  
  printf("input %d parameters!\n", argc);

  for(int i=0; i<argc; i++)
    printf("The %d th parameter: %s \n", i+1, argv[i]); 
    
  return 0; 
}