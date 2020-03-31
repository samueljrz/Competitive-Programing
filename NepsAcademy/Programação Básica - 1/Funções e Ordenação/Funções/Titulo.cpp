#include <iostream>
#include <cctype>

using namespace std;

string title(string x){
	
	int size;

	size = x.size();
	x[0] = toupper(x[0]);

	for(int i=1; i<size; i++){
		if(x[i-1] == ' '){
			x[i] = toupper(x[i]);
		}else
			x[i] = tolower(x[i]);
	}
	return x;
}	

int main ()	{

	string s;

	getline(cin, s);

	cout << title(s) << endl;

	return 0;
}