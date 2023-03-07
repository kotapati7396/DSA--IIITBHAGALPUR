#include <bits/stdc++.h>

using namespace std;

int main(){

   vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

   int row = matrix.size();
   int col =  matrix[0].size();

   int startRow = 0, startCol = 0, endRow = row - 1, endCol = col - 1;

while(startRow < endRow && startCol < endCol){

for(int i = startCol;i <= endCol;i++){
    cout<<matrix[startRow][i]<<" ";
}
   startRow++;

for(int i = startRow;i <= endRow;i++){
    cout<<matrix[i][endCol]<<" ";
}
endCol--;

for(int i = endCol;i >= startCol;i--){
    cout<<matrix[endRow][i]<<" ";
}
endRow--;

for(int i = endRow;i >= startRow;i--){
    cout<<matrix[i][startCol]<<" ";
}
startCol++;
}

    return 0;
}
