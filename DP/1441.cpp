
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<list>
#include<queue>
#include<stack>
#include<iomanip>
#include<cmath>
#include <utility>
#include <numeric>
#include<complex>
#include<sstream>
#include <functional>
#include<valarray>
#define ln cout<<endl;
#define vll vector<long long int>
#define vi vector<int>
#define vc vector<char>
#define vstr vector<string>
#define vb vector<bool>
#define sti set<int>
#define sz size()
#define lli long long int
using namespace std;
lli prime(lli n){
    if(n%2==0&&n!=2||n<2)
        return false;
    else{
        for(lli i=3;i*i<=n;i+=2)
        {
            if(n%i==0)
            {
                return false;
            }
        }}
   return true;
}
lli gcd(lli n,lli m){//g 
    if(n%m==0)
        return m;
    else return gcd(m,n%m);
}
lli gcd(lli n,lli m,lli k ){//g
	lli c=gcd(n,m);
	return gcd(c,k);
}

lli lcm(lli n,lli m){
	return n*m/gcd(n,m);
}
lli fact(lli n){
    if (n == 1)return 1;
    else return n * fact(n - 1);
}
int sumdigit(int n){
	int sum=0;
	while (n)
	{
		sum+=(n%10);
	    n/=10;
	}
	return sum; 
}
string tobinary(int n)
{
	string s;
	while(n)
	{
		s+=(n%2)+'0';
		n/=2;
	}
	reverse(s.begin(),s.end());
	return s;
}
string tostring(double n){
	double m=n;
	string x;
    stringstream ss;
    ss<<m;
    ss>>x;
 return x;
}
char tochar(int n){
	int m=n;
	char x;
    stringstream ss;
    ss<<m;
    ss>>x;
 return x;
}
int div(lli n)
{
	int c=0;
	if(n==1)return 1;
	if(n==2) return 2;
	//if(prime(n))return 2;
	for (int i = 2; i<=int(sqrt(n));i++)
	{
		if(n%i==0)
		  c++;
	}
	c*=2;
	if(int(sqrt(n))*int(sqrt(n))==n)c--;
	return c+2;
}
lli fun(lli n){
	return n+div(n);
}
  bool in(string s1,string s2)
{
	string sub,ns;bool f=false;
	if(s1.size()<s2.size()){sub=s1;ns=s2;}
	else {sub=s2;ns=s1;}
	for (int i = 0; i < ns.size();i++ )
	{ 
		if(sub[0]==ns[i])
		{
			bool f=true;
			for (int  j= 0,k=i;j<sub.size();)
			{
				if(sub[j]==ns[k]){k++;j++;}
				else{f=false ;break;};
			}
			if(f)return f;
		}
	}
	return f;
  }
 //const double pi=3.14159;
int main()
{

	int n,a[105],b[105],mx=0;bool f[105];
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];b[i]=a[i];
	}
	for (int i = 0; i < n; i++)
	{ int c=0;
		for (int j = i; j < n; j++)
		{   
			for (int k = i; k <= j; k++)
			{
				if(b[k])b[k]=0;
			    else b[k]=1;
			}
			 for (int k = 0; k < n; k++)
			   if(b[k])c++;
			mx=max(mx,c);
		    for (int k = 0; k< n; k++)
			  b[k]=a[k];
			//cout<<c<<" ";
			c=0;
		}
		
	}
	cout<<mx;ln
    return 0;  
}
