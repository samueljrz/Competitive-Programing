#include <iostream>
#include <vector>
#include <algorithm>

#define INF 99999999
#define INFN -99999999

using namespace std;

int main ()	{
	int x, aux, sizevec;
	vector<int> matry;
	vector<int> result;

	cin >> x;
	matry.push_back(INFN);

	for(int i=0; i<x; i++)	{
		cin >> aux;
		matry.push_back(aux);
	}

	matry.push_back(INF);
	aux = 0;

	for(int i=1; i<=x; i++)	{
		if(matry[i] > matry[i+1])	{
			aux++;
			if(i == (x-1))	{
				result.push_back(matry[i+1]);
			}else{
				result.push_back(matry[i]);
			}
			matry.erase(matry.begin() + i - 1);
			x-=1;
		}else
			continue;
	}

	cout << aux << endl;

	sizevec = result.size();

	sort(result.begin(), result.end());

	for(int i=0; i<sizevec; i++)	{
		if(i == (sizevec - 1))	{
			cout << result[i];
		}else
			cout << result[i] << " ";
	}

return 0;
}