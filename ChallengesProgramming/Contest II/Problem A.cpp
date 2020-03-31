#include <math.h>
#include <iostream>	
using namespace std;

int main() {
	int in;
	int x, y;
	cin >> in;

	for(int i=0; i<in; i++) {
		cin >> x >> y;
		//x--;
		//y--;
		cout << ((x/3) * (y/3)) << endl;
	}
	return 0;
}