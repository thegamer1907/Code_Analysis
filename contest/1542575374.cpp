//In the Name of God
//Ya Ali
//Ya Abalfazl

#include<bits/stdc++.h>

#define pb push_back
//#define int long long
#define ll long long
#define pii pair<int,int>

#define err(A) cout<<#A<<" = "<<(A)<<endl

using namespace std;

const ll inf=1e16+100;
const int maxn=100100;
const int maxk=21;

int n,k;

int a[maxn];

ll dp[maxk][maxn];

int cnt[maxn];
ll cur=0;
int ls,rs;

void add(int i){cur+=cnt[a[i]],cnt[a[i]]++;}
void rem(int i){cnt[a[i]]--,cur-=cnt[a[i]];}

void solve(int l,int r,int la,int ra,int h)
{
  //cout<<"solve "<<h<<" : "<<l<<","<<r<<" __ "<<la<<","<<ra<<endl;
  //cout<<"["<<ls<<","<<rs<<"]"<<endl;
  
  int me=(l+r)>>1;

  while(rs>me)rem(rs--);
  while(rs<me)add(++rs);
  while(ls>la)add(--ls);
  while(ls<la)rem(ls++);

  int bst=la;
  dp[h][me]=cur+dp[h-1][ls-1];

  //cout<<"["<<ls<<","<<rs<<"]"<<endl;
  //err(cur);
  
  while(1)
    {
      if(cur+dp[h-1][ls-1]<dp[h][me])
	dp[h][me]=cur+dp[h-1][ls-1],bst=ls;
      if(ls==me or ls==ra)break;
      rem(ls++);
    }

  //err(bst);
  //err(dp[h][me]);
  
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
    {
      add(i);
      dp[1][i]=cur;
    }

  for(int j=2;j<=k;j++)
    {
      memset(cnt,0,sizeof cnt);
      cur=ls=rs=0;
      cnt[0]=1;
      solve(1,n+1,1,n,j);
    }
  
  cout<<dp[k][n]<<endl;
  
  return 0;
}
