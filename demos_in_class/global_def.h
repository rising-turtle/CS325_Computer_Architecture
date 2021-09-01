#pragma once 

#include "stdafx.h"
#include <string>

using namespace std; 

template<typename T>
void print_bin(T n){
	T mask;
	int MAX = sizeof(T)*8;
	
	for(int i=MAX; i>0; i--){
    // for (i = 1 << MAX; i > 0; i = (i >> 1))
		mask = 1<<(i-1); 
        (n & mask) ? printf("1") : printf("0");
	}
	printf("\n");
} 

template<typename T>
string string_bin(T n){
	T mask;
	int MAX = sizeof(T)*8 ;
	
	string ret = ""; 

	for(int i=MAX; i>0; i--){
		mask = 1<<(i-1); 
        (n & mask) ? ret+="1" : ret+="0";
	}
	return ret; 
} 






