// C++ program to Find the two repeating
// elements in a given array
#include <bits/stdc++.h>
using namespace std;

void printRepeating(int arr[], int size)
{
	unordered_set<int> s;
	cout << "Repeating elements are ";
	for (int i = 0; i < size; i++) {
		if (s.empty() == false && s.find(arr[i]) != s.end())
			cout << arr[i] << " ";
		s.insert(arr[i]);
	}
}


int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen ("output.txt", "w", stdout);
	#endif
	int arr[] = { 1, 2, 3, 4, 3, 2, 2, -1, -1, 0, 6 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	printRepeating(arr, arr_size);
	return 0;
}

