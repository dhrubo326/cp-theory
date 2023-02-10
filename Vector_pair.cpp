#include <bits/stdc++.h>
using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	vector<pair<int ,int>>nestVec;
	int n;
	cin>>n;
	for(int i =0; i<n; i++){
		int x, y;
		cin>>x>>y;
		nestVec.push_back({x, y});
	}
	for(int i = 0; i<nestVec.size(); i++){
		cout<<nestVec[i].first<<" "<<nestVec[i].second<<endl;
	}
	for(auto p: nestVec){
		// cout<<p.first<<endl;
		cout<<p.second<<endl;
	}

	return 0;
}