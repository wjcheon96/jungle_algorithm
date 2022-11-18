#include <bits/stdc++.h>
using namespace std;

int arr[1000000];


int main()
{
	int n;
	int result;

	cin >> n;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= n; i++)
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
	cout << arr[n];
}
