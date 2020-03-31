#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()	{

	int x=0, *v, count=0;

	cin >> x;

	v = (int *) malloc(x*sizeof(int));

	for(int i=1; i<=x; i++){
		if((x % i) == 0){
			v[count] = i;
			count++;
		}
	}
	for(int i=0; i<count; i++){
		cout << v[i];
		cout << " ";
	}
return 0;
}