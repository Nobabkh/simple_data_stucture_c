#include<stdio.h>
#define stack_quit 9

int CAPACITY;
int top = -1;
int *stacke;
int rem;

void push(int x)
{
    if(top < CAPACITY - 1){
        top = top + 1;
        *(stacke+top)= x;
        printf("Succesfully added item: %d\n", x);
        printf("space left %d\n", CAPACITY -top -1);
    }else{
        printf("Exception! No spaces\n");
    }
}

int pop()
{
    if(top >= -1){
        int val = *(stacke+top);
        top = top - 1;
        return val;
    }
    printf("Exception from Pop! Empty Stack\n");
    return -1;
}

int peek()
{
    if(top >= 0){
        return *(stacke+top);
    }
    printf("Exception from Peek! Empty Stack\n");
    return -1;
}
int main()
{
    int status = 0, pope;
    printf("Implementing my stack in C.\n");
    printf("Enter stack size\t");
    scanf("%d", &CAPACITY);
    printf("stack creation successfull stack size %d\n", CAPACITY);
    int poin[CAPACITY];
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
            scanf("%d", &pope);
            push(pope);
        }
        else if(status == 2)
        {
            rem = pop();
            if(rem != -1)
            {
                printf(" poped value is %d\n", pop());
            }
            else
            {
                printf("No value in stack\n");
            }
        }
        else if(status == 3)
        {
            printf(" peek is %d\n", peek());
        }

    }
    return 0;
}
