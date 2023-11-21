#include<stdio.h> 
#include<conio.h>
#include<string.h> 
int main() 
{ 
    int i,j,n; 
    char name[100][20],temp[20]; 
    printf("Enter the number of students\n");     
	scanf("%d",&n); 
    printf("Enter the name of %d students:\n",n);     
	for(i=0;i<n;i++) 
     { 
       gets(name[i]); 
     } 
    for(i=0;i<n-1;i++) 
        { 
    	   for(j=0;j<n-1-i;j++) 
   	     { 
     	       if(strcmp(name[j],name[j+1])>0) 
                       { 
             	strcpy(temp,name[j]);               	
				strcpy(name[j],name[j+1]); 
              	strcpy(name[j+1],temp); 
        	           } 
                       } 
          } 
    printf("Name of students in alphabetical  order are\n"); 
     for(i=0;i<n;i++) 
      { 
       puts(name[i]); 
     } 
     getch(); 
     return 0; 
 } 
 

