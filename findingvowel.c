#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    int length,i;
    printf("Enter the line text:\n");
    fgets(str,100,stdin);  //fgets --> it takes input from the user, it does exact work as scanf.
    length = strlen(str);
    printf("length is %d.\n",length);
    printf("The vowels in the given text are:\n");
    for( i=0;i<length;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            puts(str[i]);
    }
    return 0;
}
