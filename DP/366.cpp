#include<bits/stdc++.h>

using namespace std;
#define N 105
int n,m;
int a[N],b[N];
bool dp[N][N];
int max1[N][N];

int solve(int i,int j)
{

if(i==n || j==m)
        return 0;

if(max1[i][j]!=-1)
    return max1[i][j];

max1[i][j]=max(solve(i+1,j+1)+dp[i][j],max(solve(i+1,j),solve(i,j+1)));

return max1[i][j];

}


int main (){

memset(max1,-1,sizeof(max1));

cin>>n;

for(int i=0;i<n;++i)
    cin>>a[i];

cin>>m;

for(int i=0;i<m;++i)
    cin>>b[i];

sort(a,a+n);
sort(b,b+m);

for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
        if(abs(a[i]-b[j])<=1)
            dp[i][j]=1;


cout<<solve(0,0);

return 0;
}

