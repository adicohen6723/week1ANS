#include "Stack.h"

/*The function adds a new element to the top of the stack
  Input: A pointer to the stack, An unsigned integer
  Output: None
*/
void push(Stack* s, unsigned int element)
{
    Stack* newNode = new Stack;
    newNode->num = element;
    newNode->next = s;
    s = newNode;
}
/*The function removes the top element from the stack
  Input: A pointer to the stack
  Output: The removed number, or -1 if the stack is empty
*/
int pop(Stack* s)
{
    int num = 0;
    if (isEmpty(s))
    {
        return -1;
    }

    Stack* temp = s->next;
    num = temp->num;
    s->next = temp->next;
    delete temp;

    return num;
}
/*The function initializes an empty stack
  Input: A pointer to the stack
  Output: None
*/
void initStack(Stack* s)
{
    s->num = 0;
    s->next = nullptr;
}
/*The function removes all elements from the stack
  Input: A pointer to the stack
  Output: None
*/
void cleanStack(Stack* s)
{
    while (!isEmpty(s))
    {
        pop(s);
    }
}
/*The function checks if the stack is empty
  Input: A pointer to the stack
  Output: True if the stack is empty, False otherwise
*/
bool isEmpty(Stack* s)
{
    return s->next == nullptr;
}

/*The function checks if the stack is full
  Input: A pointer to the stack
  Output: True if the stack is full, False otherwise
*/
bool isFull(Stack* s)
{
    return false;
}
