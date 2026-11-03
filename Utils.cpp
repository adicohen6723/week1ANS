#include "Utils.h"
#include "Stack.h"
#include <iostream>
/*The function reverses the order of the elements in the existing array
  Input: A pointer to an array of integers, Array size
  Output:None
*/
void reverse(int* nums,unsigned int size)
{
    Stack s;
    initStack(&s);

    for (int i = 0; i < size; i++)
    {
        push(&s, nums[i]);
    }

    for (int i = 0; i < size; i++)
    {
        nums[i] = pop(&s);
    }

    cleanStack(&s);
}

/*The function accepts 10 numbers from the user, reverses their input order and returns a new array containing the numbers in reverse order
  Input:None
  Output: pointer to the arr
*/
int* reverse10()
{
    int* nums = new int[10];
    Stack s;
    initStack(&s);


    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter a number: ";
        std::cin >> nums[i];

        push(&s, nums[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        nums[i] = pop(&s);
    }

    cleanStack(&s);

    return nums;
}