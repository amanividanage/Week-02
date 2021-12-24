#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, num;
	printf("Enter the number of asterisks reqiured");
	scanf("%d", &num);

    while (i<num){
    	printf("*");
    	i++;
	}
	printf("\n");
	return 0;
}