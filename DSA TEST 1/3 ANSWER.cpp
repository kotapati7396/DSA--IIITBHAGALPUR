#include <bits/stdc++.h>

using namespace std;

vector<int> findSubarray(int a[], int n) {
	    vector<int> ans;

	    int maxSum = INT_MIN;
	    int index = -1;
	    int sum = 0;

	 for(int i = 0;i < n;i++){

	     if(a[i] < 0){
	         sum = 0;
	         continue;
	     }
	     sum += a[i];

	     if(maxSum < sum){
	         maxSum = sum;
	         index = i;
	     }
	     else if(sum < 0){
	         sum = 0;
	     }
	 }
      for(int i = 0;i <= index;i++){
	     ans.push_back(a[i]);
	 }
	 return ans;
}

int main(){

   int arr[] = {1,2,5,-7,2,3};
   int n = 6;

   vector<int> ans = findSubarray(arr,n);

   for(int i = 0;i < ans.size();i++){
    cout<<ans[i]<<" ";
   }

    return 0;
}
