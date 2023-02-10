#include <bits/stdc++.h>
using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	vector<int>arr[n];
	for(int i =0; i<n; i++){
		int x;
		cin>>x;
		for(int j=0; j<x; ++j){
			int k;
			cin>>k;
			arr[i].push_back(k);
		}
	}
	for(int i = 0; i<n; i++){
		cout<<"Size of vector:"<<arr[i].size()<<endl;
		for(int j = 0; j<arr[i].size(); ++j){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}