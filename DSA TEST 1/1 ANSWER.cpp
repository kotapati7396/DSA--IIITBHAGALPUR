#include <bits/stdc++.h>

using namespace std;

 void rotateArr(int arr[], int d, int n){

      reverse(arr,arr+n);

      d = d % n;

      int temp = n - d;

      reverse(arr,arr+temp);
      reverse(arr+temp,arr+n);
    }

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 2;

    cout<<"Before Rotation: ";
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    rotateArr(arr,d,n);

    cout<<"After Rotation: ";

    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
