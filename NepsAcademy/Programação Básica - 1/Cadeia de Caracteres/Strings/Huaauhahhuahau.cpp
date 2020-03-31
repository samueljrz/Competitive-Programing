#include <iostream>

using namespace std;

int main ()	{
	int sizeword, sizevogais=0, aux=0, i=0;
	string word, vogais;

	cin >> word;

	sizeword = word.size();

	for(int i=0; i<sizeword; i++)	{
		if(word[i] == 'a' or word[i] == 'e' or word[i] == 'i' or word[i] == 'o' or word[i] == 'u')	{
			vogais[sizevogais] = word[i];
			sizevogais++;
		}
	}

	aux = sizevogais;

	if((sizevogais%2) != 0)	{
		aux--;
	}

	while(i < aux)	{
		if(vogais[i] != vogais[sizevogais-1-i])	{
			cout << "N" << endl;
			return 0;
		}
		i++;
	}
	cout << "S" << endl;
return 0;
}