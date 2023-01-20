#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define watch(x) cerr << "\n" << (#x) << " is " << (x) << nl;

int kase = 1;

void solve() {

}

// Find Maximum Subarry SUM
int maxSubArray(vector<int>& nums) {
    int max_so_far = nums[0], curr_max = nums[0];
    for(int i = 1; i<nums.size(); ++i){
        curr_max = max(nums[i], curr_max+nums[i]);
        max_so_far = max(curr_max, max_so_far);
    }
    return max_so_far;
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	fastio;
	int t;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}