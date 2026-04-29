#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
    SinglyLinkedListNode(int x) {
        data = x;
        next = NULL;
    }
};

int compare_lists(SinglyLinkedListNode* llist1, SinglyLinkedListNode* llist2) {
    while (llist1 != NULL && llist2 != NULL) {
        if (llist1->data != llist2->data) {
            return 0;
        }
        llist1 = llist1->next;
        llist2 = llist2->next;
    }
    if (llist1 == NULL && llist2 == NULL) return 1;
    return 0;
}