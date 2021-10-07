#include <stdio.h>
#define SIZE 5
#define END_LOOP  0

void enQueue(int);
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main()
{
    int status = 9;
    while (status != END_LOOP)
    {
        printf(" 1 : Add element to queue\n");
        printf(" 2 : Remove Element from queue\n");
        printf(" 3 : Display full queue\n");
        printf(" 0 : Exit\n");
        printf("Enter a choice : ");
        scanf("%d", &status);
        if(status == 1)
        {
            printf("Enter an element to add to the queue : ");
            int temp;
            scanf("%d", &temp);
            enQueue(temp);
        }
        else if(status == 2)
        {
            deQueue();
        }
        else if(status == 3)
        {
            display();
        }
        else
        {
            return 0;
        }
    }


  return 0;
}

void enQueue(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = value;
    printf("\nInserted -> %d", value);
  }
}

void deQueue() {
  if (front == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}
