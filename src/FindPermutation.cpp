//============================================================================
// Name        : FindPermutation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


void showPermutation(int permu[], int l, int r)
{
	if(l == r)
	{
		for(int i = 0; i < r; i ++)
		{
			cout << permu[i];
		}
		cout << endl;
	}
	else
	{

		for(int i = l; i < r; i++)
		{
			swap(permu[l], permu[i]);
			showPermutation(permu, l + 1, r);
			swap(permu[l], permu[i]);
		}
	}
}

int main()
{

	int permu[3] = {1, 2, 3};
	int SIZE = (sizeof(permu) / sizeof(int));
	showPermutation(permu, 0, SIZE);

	return 0;
}
