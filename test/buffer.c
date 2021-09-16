
/* Bomb program that is solved using a buffer overflow attack */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Like gets, except that characters are typed as pairs of hex digits.
   Nondigit characters are ignored.  Stops when encounters newline */
char *getxs(char *dest)
{
  int   c;
  int   even   = 1;     /* Have read even number of digits */
  int   otherd = 0;     /* Other hex digit of pair */
  char* sp     = dest;
  while ((c = getchar()) != EOF && c != '\n')
  {
    if (isxdigit(c))
    {
      int val;
      if ('0' <= c && c <= '9')
      	val = c - '0';
      else if ('A' <= c && c <= 'F')
	      val = c - 'A' + 10;
      else
	      val = c - 'a' + 10;

      if (even)
      {
	      otherd = val;
	      even = 0;
      }
      else
      {
	      *sp++ = otherd * 16 + val;
	      even = 1;
      }
    }
  }

  *sp++ = '\0';
  return dest;
}

int getbuf()
{
  char buf[12];
  getxs(buf);
  if (buf)  
    return 1;
  else 
    return 0;
}

int test()
{
  int val;
  printf("Type hex string:  ");
  val = getbuf();
  if (val != 1)
    printf("You got a problem %x\n", 0);
  else
    printf("getbuf returned 0x%x\n", val);
  return 0;
}

int main()
{
  int buf[16];
  /* This little hack is an attempt to get the stack to be in a
     stable position
  */
  int  offset = (((int)buf) & 0xFFF);
  int* space  = (int*) alloca(offset);
  *space = 0; /* So that we don't get complaint of unused variable */
  test();
  return 0;
}
