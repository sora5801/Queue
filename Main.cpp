/*#include <iostream>
#include "IntQueue.h"
using namespace std;

int main()
{
	const int MAX_VALUES = 5;

	IntQueue iQueue(MAX_VALUES);

	cout << "Enqueuing " << MAX_VALUES << " items...\n";
	for (int x = 0; x < MAX_VALUES; x++)
		iQueue.enqueue(x);

	cout << "Now attemping to enqueue again...\n";
	iQueue.enqueue(MAX_VALUES);

	cout << "The values in the queue were:\n";
	while (!iQueue.isEmpty())
	{
		int value; 
		iQueue.dequeue(value);
		cout << value << endl;
		}
	system("pause");
}
*/