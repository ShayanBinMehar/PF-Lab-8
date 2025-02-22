#include <stdio.h>

int main(){
	
	int row;
	printf("Enter the upper row for the triangle = ");
	scanf("%d", &row);
	
	for(int x = 1; x <= row; x++){
		
		for(int space = 1; space <= row - x; space++){
			printf(" ");
		}
		for(int y = 1; y <= x * 2 - 1; y++){
			printf("*");
		}
		printf("\n");
	}
	for(int x = row - 1; x >= 1 ; x--){
		
		for(int space = 1; space <= row - x; space++){
			printf(" ");
		}
		for(int y = 1; y <= x * 2 - 1; y++){
			printf("*");
		}
		printf("\n");
	}
}