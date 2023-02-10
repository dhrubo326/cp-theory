#include <bits/stdc++.h>
using namespace std;

int main () {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	multiset<long long> bags;
	while(t--){
		int n, k;
		cin>>n>>k;
		while(n--){
			long long candy_cnt;
			cin>>candy_cnt;
			bags.insert(candy_cnt);
		}

		long long total_eaten = 0;
		for(int i = 0; i<k; ++i){
			auto last_item = bags.end();
			--last_item;
			long long candy_cnt = *last_item;
			total_eaten += candy_cnt;
			bags.erase(last_item);
			bags.insert(candy_cnt/2);

		}
		cout<<total_eaten<<endl;

	}
	return 0;
}