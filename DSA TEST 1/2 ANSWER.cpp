#include <bits/stdc++.h>

using namespace std;

 void rotateArr(int arr[], int n){

       int temp = arr[n - 1];

    for(int i = 0;i < n;i++){
        int temp2 = arr[i];
        arr[i] = temp;
        temp = temp2;
    }

    }

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;

    cout<<"Before Rotation: ";
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rotateArr(arr,n);

    cout<<"After Rotation: ";

    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
