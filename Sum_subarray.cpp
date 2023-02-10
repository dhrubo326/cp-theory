#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&Arr, int N, int K){
	int sum = 0;
	while(K>0){
		sum += Arr[N-1];
		--N;
		--K;
	}
	cout <<sum;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	vector<int> Arr = {100, 200, 300, 400};
	int N=4, K=2;
	// cin >>N>>K;
	// sort the array
	sort(Arr.begin(), Arr.end());
	solve(Arr, N, K);
	
	return 0;
}