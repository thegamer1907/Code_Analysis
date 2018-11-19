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

int n;

string p;
string s[maxn];

int main()
{
  ios::sync_with_stdio(0);cin.tie(0);
  
  cin>>p;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>s[i];

  for(int i=0;i<n;i++)
    {
      if(s[i]==p)
	{
	  cout<<"Yes"<<endl;
	  return 0;
	}
      for(int j=0;j<n;j++)
	if(s[i][1]==p[0] and s[j][0]==p[1])
	  {
	    cout<<"Yes"<<endl;
	    return 0;
	  }
    }

  cout<<"No"<<endl;
  
  return 0;
}
