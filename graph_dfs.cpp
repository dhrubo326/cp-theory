#include "bits/stdc++.h"
using namespace std;
#define White 1
#define Gray 2
#define Black 3


void dfsTraversal(int i, vector<int> vec[], vector<int>&color ){

	color[i] = Gray;
	cout<<"start visiting: "<<i<<endl;
	for(int j = 0; j<vec[i].size(); ++j){
		if(color[vec[i][j]] == White){
			dfsTraversal(vec[i][j], vec, color);
		}
	}
	color[i] = Black;
	cout<<"final visiting: "<<i<<endl;
}

void dfs(vector<int> vec[], int node){
	vector<int> color(node, White);
	for(int i = 0; i<node; i++){
		if(color[i] == White){
			dfsTraversal(i, vec, color);
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
		vector<int> vec[node];
		for(int i = 0; i<edge; i++){
			cin>>n1>>n2;
			vec[n1].push_back(n2);
			vec[n2].push_back(n1);
		}

		for(int i = 0; i<node; i++){
			cout << "\n adjacent node " << i<<": ";
			for(int j = 0; j<vec[i].size(); j++){
				cout<<vec[i][j]<<" ";
			}
			cout<<endl;
	}

		dfs(vec, node);

	}

	return 0;
}
