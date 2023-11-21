#include <stdio.h>
int main(){
	int i, j, x=0;
	for(i=0; i<5; ++j){
		for(j=0; j<i; ++j){
			x = x + (i+ j- 1);
			printf("%d\t",x);
		}
	}	
	
	return 0;
}
