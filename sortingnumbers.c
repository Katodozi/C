#include <stdio.h>
#include <string.h>
int main(){
    char str[5][10],temp[10];
	int i,j;
    printf("Enter the names to be sorted:\n");
    for(i=0;i<5;i++){
        scanf("%s",&str[i]);
    }for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(strcmp(str[i],str[j])>0){
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("The sorted list of names you entered:\n");
    for(i=0;i<5;i++){
        printf("\n%s\n",str[i]);
    }
    return 0;
}
