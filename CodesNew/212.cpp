#include <bits/stdc++.h>
//freopen("transmitters.in","r",stdin);
using namespace std;

void fast(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
long long mn=1e9;
void lucky (long long a, long long c,int b)
{
    if(a > 1e11)
    return ;
    if(a>=b&&c==0)
    mn=min(mn,a);
    
    lucky (a*10+7,c-1,b);
    lucky (a*10+4,c+1,b);
    
}
int n;
void fff(string s,int c)
{
    if(s.size()==2*n)
    {
        if(c==0)
        cout<<s<<endl;
        return ;
    }
    fff(s+"(",c+1);
    if(c>0)
    fff(s+")",c-1);
}


long long toint(string s){
	long long a = 0, c = 1;;
	for (int i = 0; i<s.size(); i++){
		a += (s[s.size() - i - 1] - '0')*c;
		// cout<<a<<endl;
		c *= 10;
	}
	return a;
}
int main()
{

	fast();
long long n,m,c=0,sum=0,x,y,arr[1000000],r=0,l=0;
string s="",ss="";
char ch='A';
cin >> n >> m;
  for(int i=0;i<n;i++)
  cin>>arr[i];
  while(r<n)
  {
      sum+=arr[r];
      if(sum<=m)
          c=max(c,(r-l+1));
      else 
      {
          sum-=arr[l];
          l++;
      }
      r++;
  }
  cout<<c<<endl;
	//	system("pause");
	//cout << "-1" << endl;
	//  transform(x.begin(), x.end(), x.begin(), ::tolower); 

	return 0;
}