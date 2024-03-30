#include <stdio.h>

/*
Write a function called insertEntry() to insert a new entry into a
linked list. Have the procedure take as arguments a pointer to the list entry
to be inserted (of type struct entry as defined in this chapter), and a
pointer to an element in the list after which the new entry is to be
inserted.
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
    for ( ; firstElement != (struct entry*) 0; ){
        firstElement = firstElement->next;
        printf("entry %i; value: %-5i next: %p\n", ++i, firstElement->value, firstElement->next);
    }
}

int main() {

    // entry 1
    struct entry entry1 = {1};
    // beginning pointer pointing to entry1
    struct entry beginningPointer;
    beginningPointer.next = &entry1;
    // entry 2, entry 3
    struct entry entry2 = {2};
    struct entry entry3 = {3};
    // connecting entries
    entry1.next = &entry2;
    entry2.next = &entry3;
    entry3.next = (struct entry*) 0;

    struct entry entry4 = {200};
    insertEntry(&entry4, &entry1);

    printList(&beginningPointer);

    return 0;
}