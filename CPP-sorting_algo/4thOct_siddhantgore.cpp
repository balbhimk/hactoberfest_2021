//buble sort algorithm
#include <iostream>
using namespace std;

void bubbleSort(){
    int arr[]={1,2,-4,0,7,3,6,5};
    int temp;
    int length;
    bool stop=true;
    length = (sizeof(arr) / sizeof(arr[0]));
    cout<<length<<endl;
    for(int i=0;i<length;i++){
        for(int j=1;j<length-i;j++){
            if(arr[j-1]>arr[j]){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                stop=false;
            }
        }
        if(stop) break;
    }
    for(int i=0;i<length;i++){
    cout<<arr[i]<<endl;
    }
}

int main(){
    
    bubbleSort();
    return 0;
}