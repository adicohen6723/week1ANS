#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node
{
    int data;
    Node* next;
};
void addNewItem(Node** head, int num);
void deleteItem(Node** head);

#endif