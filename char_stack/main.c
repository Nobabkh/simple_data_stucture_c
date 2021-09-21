#include<stdio.h>
#define stack_quit 9

int CAPACITY;
int top = -1;
char *stacke;
char rem;

void push(char x)
{
    if(top < CAPACITY - 1){
        top = top + 1;
        *(stacke+top)= x;
        printf("Succesfully added item: %c\n", x);
        printf("space left %d\n", CAPACITY -top -1);
    }else{
        printf("Exception! No spaces\n");
    }
}

char pop()
{
    if(top >= -1){
        char val = *(stacke+top);
        top = top - 1;
        return val;
    }
    printf("Exception from Pop! Empty Stack\n");
    return -1;
}

char peek()
{
    if(top >= 0){
        return *(stacke+top);
    }
    printf("Exception from Peek! Empty Stack\n");
    return -1;
}
int main()
{
    int status = 0;
    char pope;
    printf("Implementing my stack in C.\n");
    printf("Enter stack size\t");
    scanf("%d", &CAPACITY);
    printf("stack creation successfull stack size %d\n", CAPACITY);
    char poin[CAPACITY];
    stacke = poin;
    printf("Please select stack operation\n");
    while(status != stack_quit)
    {
        status = 0;
        printf("1 : push\n");
        printf("2 : pop\n");
        printf("3 : peek\n");
        printf("9 : exit\n");
        scanf("%d", &status);
        if(status == 1)
        {
            printf("Enter number to push in the stack\t");
            gets(pope);
            push(pope);
        }
        else if(status == 2)
        {
            rem = pop();
            if(rem != '-1')
            {
                printf(" poped value is %c\n", pop());
            }
            else
            {
                printf("No value in stack\n");
            }
        }
        else if(status == 3)
        {
            printf(" peek is %c\n", peek());
        }

    }
    return 0;
}
