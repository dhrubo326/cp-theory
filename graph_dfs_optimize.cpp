#include "bits/stdc++.h"
using namespace std;


void dfsTraversal(vector<int> vec[], int i, vector<bool> &visited){
	visited[i] = true;
	// cout<<"starting: "<<i<<endl;
	cout<<i<<endl;
	for(int j = 0; j<vec[i].size(); ++j){
		if(visited[vec[i][j]] == false){
			dfsTraversal(vec, vec[i][j], visited);
		}
	}
	// cout<<"final: "<<i<<endl;

}


void dfs(vector<int>vec[], int node){
	vector<bool> visited(node, false);
	for(int i = 0; i<node; i++){
		if(!visited[i]){
			dfsTraversal(vec, i, visited);
		}
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
		int node, edge, n1, n2;
		cin>>node>>edge;
		vector<int>vec[node];

		for(int j=0; j<edge; ++j){
			cin>>n1>>n2;
			vec[n1].push_back(n2);
			vec[n2].push_back(n1);
		}

		// for(int i = 0; i<node; ++i){
		// 	for(int j=0; j<vec[i].size(); ++j){
		// 		cout<<vec[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }

		dfs(vec, node);

	}

	return 0;
}
