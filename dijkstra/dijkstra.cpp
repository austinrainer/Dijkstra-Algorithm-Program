// Main function for dijkstra program

#include <iostream>
#include <limits>
using namespace std;

int main(void)
{
	int vertices, root, cost[50][50];




	do
	{
		if (!cin.good())
		{
			cin.clear();
			cin.ignore(10000, '\n');
		}

		cout << "Enter the whole number of vertices:";
		cin >> vertices;

	} while (!cin.good());

	for (int i = 0; i < vertices; i++)
	{
		for (int j = 0; j < vertices; j++)
		{
			cin >> cost[i][j];
		}
	}

	cout << "Enter which is the root node:";
	cin >> root;


}