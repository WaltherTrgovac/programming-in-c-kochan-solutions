#include <stdio.h>

/*
A doubly linked list is a list in which each entry contains a pointer to the
preceding entry in the list as well as a pointer to the next entry in the list.
Define the appropriate structure definition for a doubly linked list entry
and then write a small program that implements a small doubly linked list
and prints out the elements of the list.
*/

struct entry {
    int value;
    struct entry* next;
    struct entry* prev;
};

void printList(struct entry* beginningPointer){
    int i = 0;
    while (beginningPointer->next != NULL){
        printf("entry %i; value: %-5i next: %i\n", ++i, beginningPointer->next->value, beginningPointer->next);
        beginningPointer = beginningPointer->next;
    }
}

int main() {

    struct entry n1, n2, n3, n4;
    n1.value = 10;
    n2.value = 20;
    n3.value = 30;
    n4.value = 40;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;

    struct entry head;
    head.next = &n1;
    n1.prev = NULL;
    n2.prev = &n1;
    n3.prev = &n2;
    n4.prev = &n3;

    printf("Initializing list:\n");
    printList(&head);

    return 0;
};
