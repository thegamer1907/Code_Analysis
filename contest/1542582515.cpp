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

const int maxn=100100;

int n,k;

bool mark[32];

int c[10];
int N;
void check(int msk)
{
  memset(c,0,sizeof c);
  N=0;
  
  for(int i=0;i<16;i++)
    if(((msk>>i)&1))
      {
	N++;
	if(!mark[i])
	  return;
	for(int j=0;j<4;j++)
	  if((i>>j)&1)
	    c[j]++;
      }
  for(int j=0;j<4;j++)
    if(c[j]*2>N)
      return;
  cout<<"Yes"<<endl;
  exit(0);
}

int main()
{
  ios::sync_with_stdio(0);cin.tie(0);

  cin>>n>>k;

  for(int i=0;i<n;i++)
    {
      int a=0;
      for(int j=0;j<k;j++)
	{
	  int b;
	  cin>>b;
	  a=a*2+b;
	}
      mark[a]=true;
    }

  for(int msk=1;msk<(1<<16);msk++)
    check(msk);

  cout<<"No"<<endl;
  
  return 0;
}
