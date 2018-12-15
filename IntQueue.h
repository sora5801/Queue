#pragma once
class IntQueue
{
private:
	int *queueArray;
	int queueSize;
	int front;
	int rear;
	int numItems;
public:
	IntQueue(int);

	IntQueue(const IntQueue &);

	~IntQueue();

	void enqueue(int);
	void dequeue(int &);
	bool isEmpty() const;
	bool isFull() const;
	void clear();

};