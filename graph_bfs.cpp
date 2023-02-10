#include "bits/stdc++.h"
using namespace std;
#define White 1
#define Gray 2
#define Black 3



void dfs(vector<int> vec[], int node, int startingNode){
	vector<int> color(node, White);
	vector<int> parent(node, -1);
	vector<int> dis(node, INT_MIN);
	dis[startingNode] = 0;
	parent[startingNode] = -1;

	queue<int> q;
	q.push(startingNode);
	while(!q.empty()){
		int x;
		x = q.front();
		q.pop();
		color[x] = Gray;
		cout<<x<<endl;

		//travras next level
		for(int i = 0; i<vec[x].size(); i++){
			if(color[vec[x][i]] == White){
				// x node is parent of i
				parent[vec[x][i]] = x;
				dis[vec[x][i]] = dis[x]+1;
				q.push(vec[x][i]);
			}
		}
		color[x] = Black;

		// cout<<x<<" er parent: "<<parent[x]<<endl;
		// cout<<x<<" er distance: "<<dis[x]<<endl;

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
		int startingNode;
		cin>>startingNode;

		// for(int i = 0; i<node; i++){
		// 	cout << "\n adjacent node " << i<<": ";
		// 	for(int j = 0; j<vec[i].size(); j++){
		// 		cout<<vec[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }

		dfs(vec, node, startingNode);

	}

	return 0;
}
