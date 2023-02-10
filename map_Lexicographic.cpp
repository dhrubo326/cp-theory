#include <bits/stdc++.h>
using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	map<string, int> map;
	int n;
	cin>>n;
	for(int i = 0; i<n; ++i){
		string s;
		cin>>s;
		map[s] = map[s]+1;
	}
	for(auto k = map.begin(); k != map.end(); ++k){
		cout<<(*k).first<<" "<<k->second<<endl;
	}
	return 0;
}