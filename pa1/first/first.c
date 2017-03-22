#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argcount, char** argarr){

	if(argcount == 1){
		printf("error");
		return 0;
	}

	int num = atoi(argarr[1]);
	int sqr = (int)num/2;
	int i;
	for(i = 2; i <= sqr; i++){
		if(num%i == 0){
			printf("no");
			return 0;
		}
	}
	printf("yes");
	return 0;
}
