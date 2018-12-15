#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

const int QUEUE_SIZE = 5;

int main()
{
	string name;

	Queue<string> queue(QUEUE_SIZE);

	for (int count = 0; count < QUEUE_SIZE; count++)
	{
		cout << "Enter a name: ";
		getline(cin, name);
		queue.enqueue(name);
	}

	cout << "\nHere arethe names you entered:\n";
	for (int count = 0; count < QUEUE_SIZE; count++)
	{
		queue.dequeue(name);
		cout << name << endl;
	}
	system("pause");
}