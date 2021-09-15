// computer_architecture.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include "global_def.h"

using namespace std; 

extern void test_chapter1(); 
extern void test_chapter2(); 

int divide_power2(int x, int k){
	int mask = x >> 31; 
	int bias = mask & ((1<<k) -1 );
	printf("mask: %x, bias: %x, %i, x+bias: %d x>>k: %d\n", mask, bias, bias, x+bias, x>>k);
	int r = x >> k; 
	print_bin(x); 
	print_bin(r);
	return ((x + bias)>>k); 
}

int _tmain(int argc, _TCHAR* argv[])
{
	// test_chapter1();
	test_chapter2();

	// printf("size of long %d and longlong %d\n", sizeof(long), sizeof(long long)); 

	// printf("-7 / 8  = %d\n", divide_power2(-7, 3)); 

	if(0)
	{
		if(0xFF00 && 0x00FF){
			printf("&& is true\n");
		}
		if(0xFF00 & 0x00FF){
			printf("& is true\n");
		}
	}

	if(0){
		unsigned char a = 7; 
		unsigned char b = -1; 
		printf("a %u b %u a+b %u %d \n",a, b, (unsigned char)(a+b), (char)(a+b)); 
	}

	return 0;
}





