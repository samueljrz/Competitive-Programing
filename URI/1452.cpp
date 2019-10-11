#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	while(cin>>n>>m and !(n == 0 and m == 0)){
		set< pair<int,int> > conj;
		map<string, vector<int> > mapa;
		
		int q;
		string ent;
		for(int i = 0; i < n; i++){
			cin>>q;
			for(int j = 0; j < q; j++){
				cin>>ent;
				if(mapa.find(ent) != mapa.end()){
					mapa[ent].push_back(i);
				}else{
					vector<int> prov;
					prov.push_back(i);
					mapa[ent] = prov;
				}
			}
		}
		
		for(int i = 0; i < m; i++){
			cin>>q;
			for(int j = 0; j < q; j++){
				cin>>ent;
				vector<int> prov = mapa[ent];
				for(int k = 0; k < prov.size(); k++){
					conj.insert(make_pair(i,prov[k]));
				}
			}
		}
		cout<<conj.size()<<endl;
		
	}
	return 0;
}
