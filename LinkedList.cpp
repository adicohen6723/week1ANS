#include "LinkedList.h"

/*The function adds a new node and inserts a value into it.
 Input: Pointer to pointer at the top of the list, the value that in to the list
 Output: None
*/
void addNewItem(Node** head, int num)
{
    Node* newNode = new Node;
    newNode->data = num;
    newNode->next = *head;
    *head = newNode;
}
/*Deleting the node located at the head of the linked list and freeing its memory
  Input:Pointer to pointer at the top of the list
  Output: None
*/
void deleteItem(Node** head)
{
    if (*head == nullptr)
    {
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;  
    delete temp;
}
