#include <stdio.h>

/*
Write a function called removeEntry() to remove an entry from a
linked list. The sole argument to the procedure should be a pointer to the
list. Have the function remove the entry after the one pointed to by the
argument. (Why can’t you remove the entry pointed to by the argument?)
You need to use the special structure you set up in exercise 3 to handle the
special case of removing the first element from the list.
*/

struct entry {
    int value;
    struct entry* next;
};

void insertEntry(struct entry* input, struct entry* index){
    input->next = index->next;
    index->next = input;
}

void removeEntry(struct entry* input){
    input->next = input->next->next;
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

    printf("Initializing List:\n");
    printList(&beginningPointer);

    printf("List after adding value 100 at the beginning of the list: \n");
    struct entry newEntry = {.value = 100};
    insertEntry(&newEntry, &beginningPointer);
    printList(&beginningPointer);

    printf("List after removing value 30 from the list:\n");
    removeEntry(&n1);
    printList(&beginningPointer);

    return 0;
}
