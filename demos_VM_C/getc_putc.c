#include <stdio.h>
#include <ctype.h>
int main()
{
   char c;
   printf("Enter some character. Enter 'q' or 'Q' to exit...\n");
   do 
   {
      c = getchar();
      if(c == '\n')
        continue; 
      printf("Entered character is: ");
      putchar(c);
      printf("\n");
   } while(c!='q' && c!='Q'); 
   return 0;
}