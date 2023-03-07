#include <bits/stdc++.h>

using namespace std;

void subset(vector<int> arr,int index,vector<int> temp,vector<vector<int>>& ans){

    //base case
    if(index == arr.size()){
        ans.push_back(temp);
        return;
    }

    //leave element
    subset(arr,index+1,temp,ans);

    //take element
    temp.push_back(arr[index]);
    subset(arr,index+1,temp,ans);
}

int main(){

    vector<int> arr = {1,2,3,4,5};

    vector<vector<int>> ans;
    vector<int> temp;
    subset(arr,0,temp,ans);

    for(int i = 0;i < ans.size();i++){
        for(int j = 0;j < ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
