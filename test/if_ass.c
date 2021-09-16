#include <stdio.h>

int main(int argc, char* argv[]){
    
    int x = 10; 
    if(x > argc)
	return x+1; 

    return argc; 

}
