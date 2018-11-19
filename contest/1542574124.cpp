//In the Name of God
//Ya Ali

#include<bits/stdc++.h>

#define ll long long

using namespace std;

const int maxn=100100;
const int maxk=21;

int n,k;

int a[maxn];

int cnt[maxn];
long long dp[maxk][maxn],cur;
int ls,rs;

void add(int i){cur+=cnt[a[i]],cnt[a[i]]++;}
void rem(int i){cnt[a[i]]--,cur-=cnt[a[i]];}

void solve(int l,int r,int la,int ra,int h)
{
  int me=(l+r)>>1;

  while(rs>me)rem(rs--);
  while(rs<me)add(++rs);
  while(ls>la)add(--ls);
  while(ls<la)rem(ls++);

  int bst=la;
  dp[h][me]=cur+dp[h-1][ls-1];
  
  while(1)
    {
      if(cur+dp[h-1][ls-1]<dp[h][me])
	dp[h][me]=cur+dp[h-1][ls-1],bst=ls;
      if(ls==me or ls==ra)break;
      rem(ls++);
    }
  
  if(l==r-1)
    return;

  solve(l,me,la,bst,h);
  solve(me,r,bst,ra,h);
}

int main()
{
  ios::sync_with_stdio(0);cin.tie(0);

  cin>>n>>k;

  for(int i=1;i<=n;i++)
    cin>>a[i];

  for(int i=1;i<=n;i++)
    add(i),dp[1][i]=cur;
  
  ls=1,rs=n;

  for(int j=2;j<=k;j++)
    solve(1,n+1,1,n,j);
  
  cout<<dp[k][n]<<endl;
  
  return 0;
}
