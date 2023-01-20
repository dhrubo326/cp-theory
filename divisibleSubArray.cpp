#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define nl "\n"

ll a[1000007], pre[1000007];

int main(){
	int t;
	cin>>t;
	while(t--){
		int k = 5;
		int n;
		cin>>n;
		memset(pre, 0, sizeof(pre));
		pre[0] = 1;
		int sum = 0;
		//read the input
		for(int i = 0; i<n; ++i){
			cin>>a[i];
			sum += a[i];
			sum %= k;
			sum = (sum+k)%k;
			pre[sum]++;
		}
		ll ans = 0;
		for(int i = 0; i<n; i++){
			int m = pre[i];
			ans += (m*(m-1))/2;
		}
		cout <<ans<<nl;
	}
	return 0;
}