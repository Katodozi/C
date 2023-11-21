#include <stdio.h>
int main(){
	//suppose input 123 ---> 1+2+3=6
	int n, rem, sum=0;
	printf("Enter any number:\n");
	scanf("%d",&n);
	while(n>0){//123>0
		rem = n%10;// 123/10=> first rem=> 3
		sum = sum + rem; //sum=> 0 + 3=> 3 
		n = n/10; // n => 12(quotient) then the condition is checked and then the loop is run accordingly
	}
	printf("Sum of digits:%d\t",sum);
	
	return 0;
}
