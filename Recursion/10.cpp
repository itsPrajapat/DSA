// Quick Sort

#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int l, int r){
    int pivot = arr[l];
    int count = 0;

    for(int i=l+1; i<=r; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivotIndex = l+count;
    swap(arr[pivotIndex], arr[l]);

    int j=l;
    int k=r;

    while(j < pivotIndex && k > pivotIndex){
        while(arr[j]<pivot){
            j++;
        }
        while(arr[k]>pivot){
            k--;
        }
        if(j < pivotIndex && k > pivotIndex){
            swap(arr[j], arr[k]);
            j++;
            k--;
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int l, int r){
    if(l<r){
        int p = partition(arr, l, r);

        quickSort(arr, l, p-1);
        quickSort(arr, p+1, r);
    }
}

int main(){

    int arr[7] = {6,3,1,9,2,8,7};

    quickSort(arr,0,6);

    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}