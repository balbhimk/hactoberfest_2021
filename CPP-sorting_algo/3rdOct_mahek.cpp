#include<iostream>
#include<algorithm>
using namespace std;
void maxHeapify(int a[], int n, int i)
{
	int largest = i;
	int l = (2*i)+1;
	int r = (2*i)+2;
	if (l<n && a[l]>a[largest])
	largest = l;
	if (r<n && a[r]>a[largest])
	largest = r;
	if (largest != i)
	{
		swap(a[i], a[largest]);
		maxHeapify(a, n, largest);
	}
}
void heap_sort(int a[], int n)
{
	for (int i=(n/2)-1; i>=0; i--)
	maxHeapify(a, n, i);
	cout<<"\nArray after heapify:\n";
	for (int i=0; i<n; i++)
	cout<<a[i]<<" ";
	cout<<"\n";
	for (int i=n-1; i>=0; i--)
	{
		swap(a[0], a[i]);
		maxHeapify(a, i, 0);
	}
}
int main()
{
	int n;
	cout<<"\nEnter no. of elements: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter array elements:\n";
	for (int i=0; i<n; i++)
	cin>>a[i];
	heap_sort(a, n);
	cout<<"\nHeap sort:\n";
	for (int i=0; i<n; i++)
	cout<<a[i]<<" ";
	return 0;
}
