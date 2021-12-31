#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    int value = 0, index = 0;
   for(int i=0; i<n; i++){
      int value = arr[i];
       index = i;
       while(index>0 && arr[index-1]>value){
        arr[index] = arr[index-1];
        index = index - 1;
       }
       arr[index] = value;
   }
   for(int j=0;j<n;j++){
    cout <<arr[j]<<" ";
   }
}

int main(){
   int arr[] = { 7,5,3,4,8,1 };
   int size = sizeof(arr) / sizeof(arr[0]);
   InsertionSort(arr, size);
return 0;
}
