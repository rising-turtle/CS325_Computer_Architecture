// computer_architecture.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include "global_def.h"

using namespace std; 

extern void test_chapter1(); 
extern void test_chapter2(); 

int _tmain(int argc, _TCHAR* argv[])
{
	// test_chapter1();
	test_chapter2();

	printf("size of long %d and longlong %d\n", sizeof(long), sizeof(long long)); 

	if(0){
		// test heap size
		int K = 1024; 
		int M = K*K; 
		int G = K*M; 
		int G2 = G*2; 

		char * pi = new char[G]; 
	}

	return 0;
}





