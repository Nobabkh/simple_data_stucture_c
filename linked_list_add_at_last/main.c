#include<stdio.h>
#include<stdlib.h>

typedef struct Bed{
    char *patient;
    struct Bed *next;
}No;

void printLinkedlist(No *p) {
  while (p != NULL) {
    printf("%s \n", p->patient);
    p = p->next;
  }
}

int main()
{
    No *Head = NULL;
    Head = (No*) malloc(sizeof(No));

    No *a1 = NULL;
    No *a2 = NULL;
    No *a3 = NULL;
    No *a4 = NULL;
    No *a5 = NULL;
    No *a6 = NULL;
    No *a7 = NULL;
    No *a8 = NULL;
    No *a9 = NULL;
    No *a10 = NULL;
    No *a11 = NULL;
    No *a12 = NULL;

    a1 =(No*) malloc(sizeof(No));
    a2 =(No*) malloc(sizeof(No));
    a3 =(No*) malloc(sizeof(No));
    a4 =(No*) malloc(sizeof(No));
    a5 =(No*) malloc(sizeof(No));
    a6 =(No*) malloc(sizeof(No));
    a7 =(No*) malloc(sizeof(No));
    a8 =(No*) malloc(sizeof(No));
    a9 =(No*) malloc(sizeof(No));
    a10 =(No*) malloc(sizeof(No));
    a11 =(No*) malloc(sizeof(No));
    a12 =(No*) malloc(sizeof(No));

    a1->patient = "krik";

    a3->patient = "Dean";
    a4->patient = "Maxwell";
    a5->patient = "Adams";

    a7->patient = "Lare";
    a8->patient = "Green";
    a9->patient = "Samwel";

    a11->patient = "Field";
    a12->patient = "Nelson";



    a5->next = a3;
    a3->next = a11;
    a11->next = a8;
    a8->next = a1;
    a1->next = a7;
    a7->next = a4;
    a4->next = a12;
    a12->next = a9;
    a9->next = NULL;

    No *last = NULL;
    last =(No*) malloc(sizeof(No));

    last->patient = "karim";
    a9->next = last;

    last->next = NULL;

    Head = a5;

    printLinkedlist(Head);


    return 0;
}
