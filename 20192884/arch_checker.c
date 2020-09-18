#include<stdio.h>

int main(){
	int num = 15213;
	unsigned char *pointer;

	long arr[2020] ={0,};//64bit os : 8bytes, 32bit os : 4bytes
	int x;
		
	x = sizeof(arr) ;
	if(x==16160) printf("64-bit\n"); // 2020*8 = 16160
	else printf("32-bit\n");	
	
	pointer = (unsigned char*)&num;

	if(pointer[0] == 109){
		printf("little endian\n");
	}
	else{
		printf("big endian\n");
	}

	return 0;
}
