#include <stdio.h>

/*
Develop insertEntry() and removeEntry() functions for a
doubly linked list that are similar in function to those developed in
previous exercises for a singly linked list. Why can your
removeEntry() function now take as its argument a direct pointer to
the entry to be removed from the list?
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

void insertEntry(struct entry* input, struct entry* index){
    // if we insert the element at NOT last place
    if (index->next != NULL){
        index->next->prev = input;
    }

    input->prev = index;
    input->next = index->next;
    index->next = input;
}


void removeEntry(struct entry* input){
    if (input->prev == NULL){
        // deleting first element
        input->next->prev = NULL;
    } else if (input->prev != NULL && input->next != NULL){
        // deleting middle element
        input->prev->next = input->next;
        input->next->prev = input->prev;
    } else if (input->next == NULL){
        // deleting last element
        input->prev->next = input->next;
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

    printf("List after adding the elements at the start, middle and end:\n");
    struct entry start, middle, end;
    start.value = 100;
    middle.value = 200;
    end.value = 300;
    insertEntry(&start, &head);
    insertEntry(&middle, &n2);
    insertEntry(&end, &n4);
    printList(&head);

    printf("List after removing the same elements:\n");
    removeEntry(&start);
    removeEntry(&middle);
    removeEntry(&end);
    printList(&head);

    return 0;
};
