#include <bits/stdc++.h>
using namespace std;

#define MAXN 10e6

void constructSegTMin(vector<int> &input, vector<int> &segT, int low, int high, int pos) {
	if(low == high) {	
		segT[pos] = input[low];
		return;
	}
	int mid = (low + high)/2;
	constructSegTMin(input, segT, low, mid, (2*pos+1));
	constructSegTMin(input, segT, mid+1, high, (2*pos+2));
	segT[pos] = min(segT[2*pos+1], segT[2*pos+2]);
}

int rangeMinQuery(vector<int> &segT, int qlow, int qhigh, int low, int high, int pos) {
	if(qlow <= low && qhigh >= high) return segT[pos];
	if(qlow > high || qhigh < low) return MAXN;
	int mid = (low + high)/2;
	return min(rangeMinQuery(segT, qlow, qhigh, low, mid, (2*pos+1)), rangeMinQuery(segT, qlow, qhigh, mid+1, high, (2*pos+2)));
}	

vector<int> inn;
vector<int> tree;
int n, aux;

int main() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> aux;
		inn.push_back(aux);
	}
	tree.resize(4*n);
	fill(tree.begin(), tree.end(), MAXN);
	constructSegTMin(inn, tree, 0, (inn.size()-1), 0);
	cout << rangeMinQuery(tree, 1, 5, 0, (inn.size()-1), 0) << endl;
	return 0;
}