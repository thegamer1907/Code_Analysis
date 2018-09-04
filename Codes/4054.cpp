#include <iostream>
#include <vector>

using namespace std;

int main(){
  int rows,columns;
  while(cin>>rows>>columns){
    vector<vector<int>> grid(rows,vector<int>(columns));
    vector<vector<int>> most(rows,vector<int>(columns));
    for(int r=0;r<rows;r++)
      for(int c=0;c<columns;c++)
        cin>>grid[r][c];
    for(int c=0;c<columns;c++)
      most[rows-1][c]=1;

    for(int r=rows-2;r>=0;r--)
      for(int c=0;c<columns;c++)
        if(grid[r][c]<=grid[r+1][c])
          most[r][c]=most[r+1][c]+1;
        else
          most[r][c]=1;

    vector<int> most_row(rows);
    for(int r=0;r<rows;r++)
      for(int c=0;c<columns;c++)
        most_row[r]=max(most_row[r],most[r][c]);

    int queries;
    cin>>queries;
    for(int i=0;i<queries;i++){
      int low,high;
      cin>>low>>high;
      if(low+most_row[low-1]-1>=high)
        cout<<"Yes\n";
      else
        cout<<"No\n";
    }
  }
}
