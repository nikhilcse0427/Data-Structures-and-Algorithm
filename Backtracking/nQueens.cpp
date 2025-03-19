#include<iostream>
#include<vector>
using namespace std;

vector<vector<char>> grid;

bool canPlaceQueen(int row, int col, int n){
  //check column
  for(int i=row-1;i>=0;i--){
    if(grid[i][col] == 'Q') return false;
  }

  for(int i = row - 1; i >= 0; i--){
    if(grid[i][col] == 'Q') return false;
  }

  //check left diagonal
  for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--){
    if(grid[i][j] == 'Q') return false; // we are attacked
  }
  return true;//no attack
}

void f(int row, int n){
  if(row==n){
    //we got one possible answer
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<grid[i][j]<<" ";
      }
      cout<<endl;
    }
    return;
  }
  for(int col=0;col<n;col++){
    if(canPlaceQueen(row,col,n)){
      grid[row][col] = 'Q';
      f(row+1,n);
      grid[row][col] = '.';
    }
  }
}

vector<vector<string>>nQueen(int n){
  grid.resize(n, vector<char>(n,'.'));
  f(0, n);
}



int main(){
  nQueen(4);
  return 0;
}