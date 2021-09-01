#include <stdio.h>
int main()
{
  { // test character 
  
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);     

    // When %c is used, a character is displayed
    printf("You entered %c.\n",chr);  

    // When %d is used, ASCII value is displayed
    printf("ASCII value is %d. \n", chr);  
    
   } 
    
    {
      // compute a + b 
      int a;
      float b;

      printf("Enter integer and then a float: \n");
    
      // Taking multiple inputs
      scanf("%d%f", &a, &b);

      printf("You entered %d and %f and a + b = %f (float), a+ b = %d (integer)\n", a, b, a+b, (int)(a+b));  
    
    }
    
    return 0;
}