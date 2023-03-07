#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> arr = {1,1,1,2,2,3,3,4,4,5,5};

    int ans = 0;

    for(int i = 0;i < arr.size();i++){
        ans ^= arr[i];
    }
    cout<<ans<<endl;
}
