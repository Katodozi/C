#include<stdio.h>

int main(){
	float money;
	int i, max;
	printf("Enter the Amount of money:\n");
	scanf("%f",&money);
	printf("Enter the days:\n");
	scanf("%d",&max);
	for(i=0;i<max;i++){
		money=money+(money*(1.44/100));
	}
	printf("The total money with interest:\n %f",money);
	return 0;
}
