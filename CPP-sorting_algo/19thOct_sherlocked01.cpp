//QUICK SORT IN C++

#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int start, int end)
{
	int pivot = arr[start];
	int ptr = end+1;
	
	for(int i=end; i>start; i--)
	{
		if(arr[i]>pivot)
		{
			ptr--;
			swap(arr[i], arr[ptr]);
		}
	}
	swap(arr[start], arr[ptr-1]);
	return (ptr-1);

}
void quickSort(vector<int> &arr, int start, int end)
{
	if(start>=end)
	{
		return;
	}
	int pi = partition(arr, start, end);
	quickSort(arr, start, pi-1);
	quickSort(arr, pi+1, end);
}
int main()
{
    int n;
    cin>>n;
    
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    
    quickSort(a, 0, n-1);
    
    cout<<"Sorted Array: ";
    
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}