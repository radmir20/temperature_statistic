#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int a, b, c;
	
	cout << "enter 3 numbers: \n";
	cin >> a >> b >> c;
	
	int arr[] = {a, b, c};
	sort(arr, arr+3);
	
	cout << arr[0] << arr[1] << arr[2];
	return 0;
}