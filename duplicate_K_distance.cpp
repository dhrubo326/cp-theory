// C++ program to Find the two repeating
// elements in a given array
#include <bits/stdc++.h>
using namespace std;

bool duplicateKthDistance(int arr[], int size, int k)
{
	unordered_set<int> s;
	for (int i = 0; i < size; i++) {
		if (s.find(arr[i]) != s.end()){
			// repeted item exists
			return true;
		}
		// Add iteams in has set
		s.insert(arr[i]);
		//Remove items more then k distance
		if(i >=k){
			s.erase(arr[i-k]);
		}
	}
	return false;
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	int arr[] = { 1, 2, 3, 4, 5, 2, -1, 0, 6 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	if( duplicateKthDistance(arr, arr_size, k) ){
		cout<<"YES";
	}else{
		cout<<"NO";
	}

	return 0;
}

