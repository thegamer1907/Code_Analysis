#include <iostream>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int arr[n+1][m+1],up[n+1][m+1];
  int mx[n+1],i,j;
  for (i=0;i<n;i++)
    for (j=0;j<m;j++)
      cin>>arr[i][j];
  for (j=0;j<m;j++){
    up[0][j]=1;
    for (i=1;i<n;i++){
      if (arr[i][j]>=arr[i-1][j])
	up[i][j]=up[i-1][j]+1;
      else
	up[i][j]=1;
    }
  }
  int temp;
  for (i=0;i<n;i++){
    temp=0;
    for (j=0;j<m;j++)
      temp=max(temp,up[i][j]);
    mx[i]=temp;
  }
  int k,l,r;
  cin>>k;
  for (i=0;i<k;i++){
    cin>>l>>r;
    l--; r--;
    if (mx[r]>=r-l+1)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
  return 0;
}
