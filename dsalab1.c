#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 3
struct stack{
    int stack[MAXSIZE];
    int top;
}st;

void push(){
    int item;
    if(st.top == MAXSIZE-1){
        printf("\n Stack is full....");
        exit(0);
    }
    else{
        printf("\n Enter the element to be pushed:\n");
        scanf("%d",&item);
        st.top=st.top++;
        st.stack[st.top]= item;
    }
}
void pop(){
    int item;
	if(st.top == -1){
        printf("\n Stack is empty.....");
        exit(0);
    }
    else{
        st.top=st.top--;
        item = st.stack[st.top];
        printf("\nThe deleted element is %d.", item);
    }
}
void display(){
    int i;
    if(st.top==-1){
        printf("\nStack is empty.....");
    }
    else{
        printf("\n The element in the stack are:");
        for(i=st.top; i>=0; i--){
            printf("\n %d", st.stack[i]);
        }
    }
}

int main(){
    int exp;
    printf("\nPERFORMING THE STACK OPERATION......!!");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.END");
    printf("\nEnter your choice:\n");
    scanf("%d",&exp);
    while(1){
        switch (exp){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
            case 4:
                printf("Exiting.........");
                exit(0);
        }
    }
         return 0;
}
