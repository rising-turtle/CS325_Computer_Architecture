
#include "stdafx.h"
#include <string>
#include <vector>
#include "global_def.h"



struct AA{	
	float f[2]; 
	char c[3];
	char* pc; 
};

bool little_endian(){
	int x= 1;
	return *((char*)&x);
}


bool any_even_one(char a); 

void right_shift(){
	
	// arithmetic shift
	int x = 0xA00000A8; // 
	int y = x >> 4; // y is arithmetic right shift of x 
	// printf("%d %d \n", x, y); 
	printf("%x %x \n", x, y); 
	print_bin(x); 
	print_bin(y);

	// logical shift
	unsigned int z = 0xA00000A8;
	unsigned int sz = z >> 4; 
	printf("%x %x \n", z, sz); 
	print_bin(z); 
	// printf("%x %u \n", z, z); 
	print_bin(sz);
	if(sz & 0xF0000000){
		printf("logical shift (sz = 0x%x) == (y = 0x%x) arithmetic shift !\n", sz, y); 
	}else{
		printf("logic shift (sz = 0x%x) != (y = 0x%x) arithmetic shift \n", sz, y);
	}

}

void test_chapter2(){

	// AA aa; 
	// char c; short s; int x; double df; 
	
	if(0){
		// test big/little endian 
		int x = 0x12345678; 
		printf("x = %x\n", x); 
		printf("&x = %x\n", &x); 
		
		char* p = (char*)&x; 
		printf("%x\n", p); 
		printf("%x\n", *p); 
		printf("%x\n", p+1);
		printf("%x\n", *(p+1)); 
		printf("%x\n", p+2);
		printf("%x\n", *(p+2)); 
		printf("%x\n", p+3);
		printf("%x\n", *(p+3)); 

		if(*p == 0x78)
			printf("little endian\n");
		else
			printf("big endian\n");
	}
	if(1){
		// test arithmetic and logic shift 
		right_shift();
	}


	if(0){
		// test signed and unsigned conversion 
		int x = -1;
		unsigned int u = 2147483648; /* 2^31 */
		printf("x = %u = %d\n", x, x);
		printf("u = %u = %d\n", u, u);
	}

	if(0){
		// test signed and unsigned comparison
		// -2147483647–1  ==  2147483648U
		unsigned int x = 2147483648; // x = 2147483648U
		int y = -2147483647 -1; // y = -2147483647–1
		if(x == y){
			printf("%i == %uU is true\n", y, x); 
		}else{
			printf("%i == %uU is false\n", y, x);
		}

		// -2147483647–1  <   2147483647
		int z = 2147483647; // z = 2147483647
		if( y < z){
			printf(" %i < %i is true\n", y, z); 
		}else{
			printf(" %i < %i is false\n", y, z); 
		}

		// -2147483647–1U < 2147483647
		unsigned int m = y; // m = -2147483647–1U; 
		if(m < z){
			printf(" %uU < %i is true, \n", y, z); 
		}else{
			printf(" %uU < %i is false \n", y, z); 
		}

		//  -2147483647–1 < -2147483647
		int k = -2147483647; // k = -2147483647
		if(y < k){
			printf(" %i < %i is true, \n", y, k); 
		}else{
			printf(" %i < %i is false, \n", y, k); 
		}

		// -2147483647–1U < -2147483647
		if(m < k){
			printf("%uU < %i is true, \n", m, k); 
		}else{
			printf("%uU < %i is false, \n", m, k);
		}
		
		// -2147483647–1u == -2147483648
		int kk = k-1; // kk = -2147483647
		unsigned int mm = (unsigned int)k + (unsigned int)(-1); 
		if(mm == kk){
			printf("%uU == %i is true, \n", mm, kk); 
		}else{
			printf("%uU == %i is false, \n", mm, kk);
		}


	}


	if(0){
		// test larger data type 
		unsigned short x = 0xFF00; 
		int y = x; 
		printf("y = %X \n", y); 
	}

	if(0){
		// test truncation 
		int x = 0xF2345687; 
		short y = x; 
		// char y = x; 
		printf("y = 0x%X = %d %u\n", y, y, y);
	}

	if(0){
		// multiplication 
		unsigned char x = 7; 
		unsigned char y = 70; 
		unsigned char z = x*y; // char

		printf("x = %d  y = %d z = %d\n", x,y,z); 
	}

	if(0){
		// IEEE 754 
		float x = -12.09375; // 19.59375; // -12.09375; 
		int * px = (int*)&x;
		printf("%X \n", *px);
		print_bin(*px);

	}
	if(0){
		// test even_one 
		char x = 0x02; 
		printf("x has %s even one(s)\n", (any_even_one(x)?"some":"no"));
	}

	if(0){
		// test shift for mask
		int x = (1<<32) -1; 
		printf("%X \n", x); 
	}
}


bool is_odd(int a){
	int mask = 0x01; 
	return (a && mask);
}

bool any_even_one(char a){
	/*use mask to select even bits*/
	return (a&0x55);  
}




