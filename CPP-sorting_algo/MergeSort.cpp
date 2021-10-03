#include <bits/stdc++.h>
using namespace std;

void Sort_merge(int A[], int a, int b, int c) {
  
  int N1 = b - a + 1;
  int N2 = c - b;

  int M[N1], N[N2];

  for (int i = 0; i < N1; i++)
    M[i] = A[a + i];
  for (int j = 0; j < N2; j++)
    N[j] = A[b + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = a;

  while (i < N1 && j < N2) {
    if (M[i] <= N[j]) {
      A[k] = M[i];
      i++;
    } else {
      A[k] = N[j];
      j++;
    }
    k++;
  }

  while (i < N1) {
    A[k] = M[i];
    i++;
    k++;
  }

  while (j < N2) {
    A[k] = N[j];
    j++;
    k++;
  }
}

void merge_Sort(int A[], int a, int b) {
  if (a < b) {

    int c = a + (b - a) / 2;

    merge_Sort(A, a, c);
    merge_Sort(A, c + 1, b);

    Sort_merge(A, a, c, b);
  }
}


int main() 
{
	int n;
	
	cout<<"Enter size of Array : ";
	cin>>n;
	
  	int A[n];
  	cout<<"\nEnter Array elements : ";
  	for(int i=0; i<n; i++)
	  {
  		cin>>A[i];
	  }
	  
	cout << "\nUnsorted Array : ";
  	for (int i = 0; i < n; i++)
    cout << A[i] << " ";
  
  	merge_Sort(A, 0, n - 1);

  	cout << "\nSorted Array : ";
  	for (int i = 0; i < n; i++)
    cout << A[i] << " ";
  	
	return 0;
}
