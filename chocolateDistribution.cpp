// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    long long minimum = INT_MAX;
    for(long long i = 0; i+m-1<n; ++i){
        long long diff = a[i+m-1] - a[i];
        if(diff < minimum){
           minimum =  diff;
        }
    }
    return minimum;
} 


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	vector<long long> a = {3, 4, 1, 9, 56, 7, 9, 12};
	long long n = 8;
	long long student = 5;
	cout<<findMinDiff(a, n, student)<<endl;

	return 0;
}

