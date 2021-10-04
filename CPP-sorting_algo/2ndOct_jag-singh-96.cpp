// example of merge sort in C/C++
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void merge(int *A, int start, int mid, int end) {
	int temp[end - start + 1];

	int i = start, j = mid+1, k = 0;

	while(i <= mid && j <= end) {
		if(A[i] <= A[j]) {
			temp[k] = A[i];
			k ++; 
			i ++;
		}
		else {
			temp[k] = A[j];
			k += 1; j += 1;
		}
	}

	while(i <= mid) {
		temp[k] = A[i];
		k += 1; i += 1;
	}

	while(j <= end) {
		temp[k] = A[j];
		k += 1; j += 1;
	}

	for(i = start; i <= end; i += 1) {
		A[i] = temp[i - start];
	}
}


void mergeSort(int *A, int start, int end) {
    
    if(start < end)
        return;
	else {
		int mid = (start + end) / 2;
		mergeSort(A, start, mid);
		mergeSort(A, mid+1, end);
		merge(A, start, mid, end);
	}
}

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++){
        cout << A[i] <<" ";
    }
        
   cout << "\n";
}

int main(){

	int A[] = {-2, 7, 15, -14, 0, 15, 0, 7, -7,
               -4, -13, 5, 8, -14, 12};
    int n = sizeof(A) / sizeof(A[0]);
    cout << "Given Array is\n";
    printArray(A, n);

    mergeSort(A, 0,n-1);

    cout << "\nAfter Sorting Array is\n";
    printArray(A, n);
    return 0;
}
