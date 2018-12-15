#pragma once
#include <iostream>
using namespace std;

template <class T>
class Queue
{
private:
	T *queueArray;
	int queueSize;
	int front;
	int rear;
	int numItems;
public:
	Queue(int);
	Queue(const Queue &);

	~Queue();
	void enqueue(T);
	void dequeue(T &);
	bool isEmpty() const;
	bool isFull() const;
	void clear();
};

template <class T>
Queue<T>::Queue(int s)
{
	queueArray = new T[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}

template <class T>
Queue<T>::Queue(const Queue &obj)
{
	queueArray = new T[obj.queueSize];

	queueSize = obj.queueSize;
	front = obj.front;
	rear = obj.rear;
	numItems = obj.numItems;

	for (int count = 0; count < obj.queueSize; count++)
		queueArray[count] = obj.queueArray[count];
}

template <class T>
Queue<T>::~Queue()
{
	delete[] queueArray;
}

template <class T>
void Queue<T>::enqueue(T item)
{
	if (isFull())
		cout << "The queue is full.\n";
	else
	{
		rear = (rear + 1) % queueSize;
		queueArray[rear] = item;
		numItems++;
	}
}

template <class T>
void Queue<T>::dequeue(T &item)
{
	if (isEmpty())
		cout << "The queue is empty.\n";
	else
	{
		front = (front + 1) % queueSize;

		item = queueArray[front];
		numItems--;
	}
}

template <class T>
bool Queue<T>::isEmpty() const
{
	bool status;
	if (numItems)
		status = false;
	else
		status = true;

	return status;
}

template <class T>
bool Queue<T>::isFull() const
{
	bool status;
	if (numItems < queueSize)
		status = false;
	else
		status = true;

	return status;
}

template <class T>
void Queue<T> :: clear()
{
	front = queueSize - 1;
	rear = queueSize - 1;
	numItems = 0;
}