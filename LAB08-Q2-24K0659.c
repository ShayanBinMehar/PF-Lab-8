#include <stdio.h>

int main(){
	int userrow, usernum, count, usercoloum;
	
	printf("Enter the row for the pattern = ");
	scanf("%d", &userrow);
	printf("Enter the coloum for the pattern = ");
	scanf("%d", &usercoloum);
	printf("Enter the number upper bound to generate a pattern in reverse odd sequence = ");
	scanf("%d", &usernum);

	if(usernum % 2 ==0){
		usernum++;
	}
	for(int x = 0; x < userrow; x++){
		count = 0;
		for(int y = usernum; y > 0;){
			printf("%d, ", y);
			y -= 2;
			usernum -= 2;
			count += 1;
			if(count == usercoloum){
				break;
			}
		}
		printf("\n");
	} 
	
	
}