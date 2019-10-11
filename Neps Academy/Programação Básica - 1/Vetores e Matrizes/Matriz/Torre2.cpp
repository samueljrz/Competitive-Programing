#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 1010

using namespace std;

int main()	{
	int x, result=0, mtz[MAX][MAX], vlinha[MAX], vcoluna[MAX];

	cin >> x;

	for(int i=0; i<x; i++)	{
		for(int j=0; j<x; vlinha[i] += mtz[i][j], vcoluna[j] += mtz[i][j], j++)	{
			cin >> mtz[i][j];
		}
	}

	for(int i=0; i<x; i++)	{
		for(int j=0; j<x; j++)	{
			result = max(result, vlinha[i] + vcoluna[j] - 2*mtz[i][j]);
		}
	}
	cout << result << endl;
}

