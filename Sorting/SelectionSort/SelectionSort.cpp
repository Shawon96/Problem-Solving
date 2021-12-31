#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
     for(int i=0;i<n;i++){
            int iMin = i;
            int element = arr[i];
        for(int j=i+1; j<n;j++){
            if(arr[iMin]>arr[j]){
                element = arr[j];
                 iMin = j;
            }
        }
        int temp = element;
        arr[iMin]=arr[i];
        arr[i]=temp;
     }
     for(int k=0; k<n ; k++){
        cout<<arr[k]<<" ";
     }
}

int main(){
   int arr[]= {8,2,3,6,7,9};
   int size = sizeof(arr)/sizeof(arr[0]);
   SelectionSort(arr, size);
}
