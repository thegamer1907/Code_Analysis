#include <bits/stdc++.h>
using namespace std;

int dp[101][101];
int n,m;
int man[101];
int wom[101];

int solve(int i,int j)
{
    int &ret=dp[i][j];
    if(ret!=-1) return ret;
    if(i==n||j==m) return 0;
    ret=0;
    if(abs(man[i]-wom[j])<=1)ret=solve(i+1,j+1)+1;
    ret=max(ret,solve(i+1,j));
    ret=max(ret,solve(i,j+1));
    return ret;
}


int main()
{

   cin>>n;
   for(int i=0;i<n;i++)
    cin>>man[i];

   cin>>m;
   for(int i=0;i<m;i++)
    cin>>wom[i];
   sort(man,man+n);
   sort(wom,wom+m);
   memset(dp,-1,sizeof(dp));
   cout<<solve(0,0);









}


