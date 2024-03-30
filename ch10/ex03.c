#include <stdio.h>

/*
The function developed in exercise 2 only inserts an element after an
existing element in the list, thereby preventing you from inserting a new
entry at the front of the list. How can you use this same function and yet
overcome this problem? (Hint: Think about setting up a special structure
to point to the beginning of the list.)
*/

struct entry {
    int value;
    struct entry* next;
};

void insertEntry(struct entry* input, struct entry* index){
    input->next = index->next;
    index->next = input;
}

void printList(struct entry* firstElement){
    int i = 0;
    for ( ; firstElement->next != (struct entry*) 0; ){
        firstElement = firstElement->next;
        printf("entry %i; value: %-5i next: %p\n", ++i, firstElement->value, firstElement->next);
    }
}

int main() {

    struct entry n1, n2, n3, n4, beginningPointer;
    n1.value = 20;
    n2.value = 30;
    n3.value = 40;
    n4.value = 50;

    beginningPointer.next = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = (struct entry*) 0;

    printList(&beginningPointer);
    struct entry newEntry = {.value = 100};
    insertEntry(&newEntry, &beginningPointer);
    printList(&beginningPointer);

    return 0;
}
