#include<iostream>
using namespace std;

 int getMax(int inp[],int len){
      int max=0;
      for(int i=1;i<=len;i++){
          if(inp[i]>inp[max]){
              max=i;
          }
      }
      return max;
}

void selectionSort(){
    int inp[]={5,3,4,1,2,7,9,6,8};
    int length = (sizeof(inp) / sizeof(inp[0]));
    int temp;
    for(int i=0;i<length;i++){
        int last=length-1-i;
        int max=getMax(inp,last);

        temp=inp[max];
        inp[max]=inp[last];
        inp[last]=temp;
    }
     for(int i=0;i<length;i++){
         cout<<inp[i]<<" ";
     }
}

int main(){
    selectionSort();
    return 0;
}