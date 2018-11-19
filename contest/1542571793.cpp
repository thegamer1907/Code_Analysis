#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<fstream>
#include<queue>
#include<ctime>
#include<stack>
#include<iomanip>

#define LL long long int
#define LG long double
#define PB push_back
#define IN insert
#define F first 
#define S second

using namespace std;

int n,s,q;
string k,p;

int main()
{
  ios::sync_with_stdio(false);  

  cin>>k>>n;

  for(int i=1;i<=n;i++)
    {
      cin>>p;
      if(p==k)
	{
	s+=2;
	q+=2;
	}
      if(p[0]==k[1])
	s++;
      if(p[1]==k[0])
	q++;
    }
  if(s>0 && q>0)
    cout<<"YES";
  else
    cout<<"NO";


  return 0;
}
