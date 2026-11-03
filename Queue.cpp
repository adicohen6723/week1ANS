#include "Queue.h"
#include <iostream>
using namespace std;

/*TODO*/
void initQueue(Queue* q, unsigned int size)
{
	q->arr = new unsigned int[size];
	q->size = size;
	q->count = 0;
	q->front = 0;
	q->back = 0;
}
/*TODO*/
void cleanQueue(Queue* q)
{
	delete[] q->arr;
}
/*TODO*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		cout << "The queue is full" << endl;
	}
	else
	{
		q->arr[q->back] = newValue;
		q->back = (q->back + 1) % q->size;
		q->count++;
	}
}
/*TODO*/
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	int num = 0;
	if (isEmpty(q))
	{
		num = -1;
	}
	else
	{
		num = q->arr[q->front];
		q->front = (q->front + 1) % q->size;
		q->count--;
	}
	return num;
}
/*TODO*/
bool isEmpty(Queue* s)
{
	return s->count == 0;
}
/*TODO*/
bool isFull(Queue* s)
{
	return s->count == s->size;
}
