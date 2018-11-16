#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);

  int n,m;
  cin>>n>>m;

  string a;
  cin>>a;

  for(int i=0;i<m;i++){
    for(int j=0;j<n-1;j++){
      if(a[j]=='B'&&a[j+1]=='G'){
        a[j]='G';
        a[j+1]='B';
        j++;
      }
    }
  }
  cout<<a;
	return 0;
}
