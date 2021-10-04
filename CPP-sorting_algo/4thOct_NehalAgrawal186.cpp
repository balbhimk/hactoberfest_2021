//  sorting array using bucket sort
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void bucketSort(float arr[], int n)
{
	
	vector<float> b[n];

	for (int i = 0; i < n; i++) {
		int bi = n * arr[i]; 
		b[bi].push_back(arr[i]);
	}

	for (int i = 0; i < n; i++)
		sort(b[i].begin(), b[i].end());

	int index = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < b[i].size(); j++)
			arr[index++] = b[i][j];
}

/* Driver program to test above function */
int main()
{
	float arr[]
		= { 0.878, 0.545, 0.656, 0.1244, 0.669, 0.3422 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bucketSort(arr, n);

	cout << "Sorted array is \n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}

