#include<iostream>
#include<vector>
using namespace std;

int ans;

bool canWeMove(vector<vector<int>> &grid, int i, int j, int n){
  return i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == 0;
}

void f(vector<vector<int>> &grid, int n, int i, int j){
  // base case
  if(i == n-1 && j == n-1){
    ans += 1;
    // Print the grid for the current path
    for(int x = 0; x < n; x++){
      for(int y = 0; y < n; y++){
        cout << grid[x][y] << " ";
      }
      cout << endl;
    }
    cout << endl;
    return; 
  }

  grid[i][j] = 2; // mark as visited

  // move left
  if(canWeMove(grid, i, j-1, n)){
    f(grid, n, i, j-1);
  }

  // move up
  if(canWeMove(grid, i-1, j, n)){
    f(grid, n, i-1, j);
  }

  // move right
  if(canWeMove(grid, i, j+1, n)){
    f(grid, n, i, j+1);
  }

  // move down
  if(canWeMove(grid, i+1, j, n)){
    f(grid, n, i+1, j);
  }

  grid[i][j] = 0; // unmark as visited
}

int ratInMaze(vector<vector<int>> &grid, int n){
  ans = 0;
  f(grid, n, 0, 0);
  return ans;
}

int main(){
  vector<vector<int>> grid = {
    {0, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0, 0},
    {0, 1, 0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0}
  };

  int n = 7;
  int result = ratInMaze(grid, n);
  cout << "Number of paths: " << result << endl;
  return 0;
}