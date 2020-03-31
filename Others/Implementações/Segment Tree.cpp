#include <bits/stdc++.h>
using namespace std;
//tamanho da tree tem que ser 4*size

/*
int join(int a, int b) {
	if()
	return min(a, b)

}*/

void construct(int *arr, int *tree, int low, int high, int node) {
	if(low == high) {
		tree[node] = arr[low];
		return;
	} 
	else {
		int mid = (low + high)/2;
        construct(arr, tree, low, mid, 2*node);
        construct(arr, tree, mid+1, high, 2*node+1);
        tree[node] = tree[2*node] + tree[2*node+1];
        // tree[node] = tree[2*node]>=tree[2*node+1] ? tree[2*node+1]:tree[2*node]; //minimum query
    
	}
}

void update(int *arr, int *tree, int low, int high, int node, int idx, int val) {
	if(low == high) {
		arr[idx] +=val;
		tree[node] += val;
		return;
	}else {
		int mid = (high + low)/2;
		if(low <= idx and idx <= mid) update(arr, tree, low, mid, 2*node, idx, val);
		else update(arr, tree, mid+1, high, 2*node+1, idx, val);
		tree[node] = tree[2*node] + tree[2*node+1];
		// tree[node] = tree[2*node]>=tree[2*node+1] ? tree[2*node+1]:tree[2*node]; //minimum query
	}
}

int query(int *tree, int low, int high, int node, int l, int r) {
	if(low > r or l > high) return 0;  // INT_MAX //minimum query
	if(low >= l and high <= r) return tree[node];
	int mid = (low + high)/2;
	int p1 = query(tree, low, mid, 2*node, l, r);
	int p2 = query(tree, mid+1, high, 2*node+1, l, r);
	return (p1 + p2);
	// return p1>=p2 ? p2:p1 //minimum query
}

int main() {
	int n, m, h, *arr, *tree;
	long long size;
	cin >> n >> m;
	arr = new int[n];
	h = (int)ceil(log2(n));
	size = 2*pow(2,h);
	tree = new int[size];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	memset(tree, 0, sizeof(tree));  // INT_MAX minimum query
	construct(arr, tree, 0, n-1, 1);
	for(int i=1; i<size-1; i++) {
		cout << tree[i] << endl;
	}
	delete[] arr;
	delete[] tree;
	return 0;
}