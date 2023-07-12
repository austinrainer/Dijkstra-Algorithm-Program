// Main function for dijkstra program

#include <iostream>
#include <limits>
#define infinite INT_MAX;
using namespace std;



void initialize(int vertices, int root, int * distance)
{
	for (int i = 0; i < vertices; i++)
		distance[i] = infinite;
	distance[root] = 0;
}


int getNearest()
{
	int minValue = infinite;
	int minNode	 = 0;

	for (int i = 0; i < vertices; i++)
	{
		if
	}
}


void dijkstra(int vertices)
{
	for (int i = 0; i < vertices; i++)
	{
		int nearest = getNearest();
	}
}


int main(void)
{
	
	int vertices = 0, root = 0, distance[50], cost[50][50];

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

	initialize(vertices, root, distance);

}