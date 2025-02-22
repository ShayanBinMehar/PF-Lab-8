#include <stdio.h>

int main(){

	
	int userrange, checker;
	printf("Enter the upper bound for the series of prime number = ");
	scanf("%d", &userrange);
	
	for(int x = 2; x <= userrange; x++){
	checker = 1;	
		for(int y = 2; y < x; y++){
			if(x % y == 0){
				checker = -1;
			}
			
		}
		if(checker == 1){
			printf("The series of the prime number is %d\n", x);
		}
	}
}