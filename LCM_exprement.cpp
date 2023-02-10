#include "bits/stdc++.h"
using namespace std;

string ans = "";
string multyply(string a, int b){
  int carry = 0;
  ans = "";
  for(int i = 0; i < a.size(); i++){
    carry = ((a[i] - '0') * b + carry);
    ans += carry % 10 + '0';
    carry /= 10;
    cout<<"ans1: "<<ans<<endl;
  }
  while(carry != 0){
    ans += carry % 10  + '0';
    carry /= 10;
    cout<<"ans2: "<<ans<<endl;
  }
  return ans;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif 
    string str = "4154";
    int b = 51454;
    string result = multyply(str, b);

    cout<<result<<endl;

	return 0;
}
