#include "bits/stdc++.h"
using namespace std;


void adjacentNode(){
	int node, edge, n1, n2;
	cin>>node>>edge;
	vector<int> vec[node];
	for(int i = 0; i<edge; i++){
		cin>>n1>>n2;
		vec[n1].push_back(n2);
		vec[n2].push_back(n1);
	}

	for(int i = 0; i<node; i++){
		cout << "\n Adjacency list of vertex " << i
             << "\n head ";
		for(int j = 0; j<vec[i].size(); j++){
			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}


}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 

	int t; cin>>t;
	int kase=1;
	while(t--){
		adjacentNode();

	}

	return 0;
}
