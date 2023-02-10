#include "bits/stdc++.h"
using namespace std;




bool solve(vector<int>&jus, int k){
    
    if(jus[0]==jus[1] && jus[1] ==jus[2]){
        return true;
    }else if(jus[0]>jus[1] || jus[0] >jus[2] || jus[2]<k){
        return false;
    }else{
        jus[2] -= k;
        jus[0] += k;
        solve(jus, k);
    }



}



int main()
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 

	int kase = 1;
	int t;cin>>t;
	while(t--){
         int a, b, c,k;
        cin>>a>>b>>c>>k;

        vector<int> jus;
        jus.push_back(a);
        jus.push_back(b);
        jus.push_back(c);
        sort(jus.begin(), jus.end());
		bool ans = solve(jus, k);
        if(ans){
           cout<<"Case "<<kase<<": Peaceful"<<"\n"; 
        }else{
           cout<<"Case "<<kase<<": Fight"<<"\n";   
        }
		kase++;
	}


	return 0;
}
