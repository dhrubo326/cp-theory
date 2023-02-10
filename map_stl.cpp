#include <bits/stdc++.h>
using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	map<int, string> m;
	m[1] = "boss";
	m[5] = "me";
	m[2] = "Jon";
	m[6] = "doe";
	m.insert({4, "Thor"});
	m.insert({3, "me"});

	cout<<m[2];

	// for(auto &p: m){
	// 	cout<<p.first<<" "<<p.second<<endl;
	// }

	// for(auto it = m.begin(); it != m.end(); ++it){
	// 	cout<<(*it).first<<" "<<it->second<<endl;
	// }

	// for(auto k = m.find(7); k != m.end(); ++k){
	// 	cout<<(*k).first<<" "<<k->second<<endl;
	// }
	return 0;
}