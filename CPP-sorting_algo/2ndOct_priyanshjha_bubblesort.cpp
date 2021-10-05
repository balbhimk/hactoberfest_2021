#include<bits/stdc++.h>
using namespace std;
void swapping(int &a, int &b) {     
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void bubbleSort(int *array, int size) {
   for(int i = 0; i<size; i++) {
      int swaps = 0;       
      for(int j = 0; j<size-i-1; j++) {
         if(array[j] > array[j+1]) {     
            swapping(array[j], array[j+1]);
            swaps = 1;  
         }
      }
      if(!swaps)
         break;      
   }
}
int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];  
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   bubbleSort(arr, n);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   return 0;
}