#include <stdio.h>
int main(){
	int n, sum, rem;
	printf("Enter the number whose digit's sum is to calculated:\n");
	scanf("%d",&n);
	while(n>0){
		rem = n%10;
		sum = sum + rem;
		n=n/10;
	}printf("The sum of the each digits of the given number is %d",sum);
	
	return 0;
}
