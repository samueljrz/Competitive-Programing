#include <iostream>
using namespace std;

#define FALSE 0
#define TRUE 1

int main (){

	int count=0, sizes=0, sizess=0, aux=0;
	bool res=FALSE;
	string s, ss;

	cin >> s;
	cin >> ss;

	sizes = s.size();
	sizess = ss.size();

	aux = (sizes - sizess) + 1;

	for(int i=0; i<aux; i++){
		for(int h=0; h<sizess; h++){
			if(s[i+h] == ss[h]){
				res = TRUE;
			}
		}if(res)
			count++;
			res = FALSE;
	}
	cout << (aux - count) << endl;
	
return 0;
}