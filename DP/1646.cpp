#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
#define mod 1000000007
using namespace std;
/*
int gcd(int x,int y)
{
    if(x%y==0)
    return y;
    return gcd(y,x%y);
}
int no1(int x)
{
    int count=0;
    while(x)
    {
        if(x%2)
        count++;
        x=x>>1;
    }
    return count;
}
ll min(ll x,ll y)
{
    if(x<y)
    return x;
    return y;
}*/
int max(int x,int y)
{
    if(x>y)
    return x;
    return y;
}
/*
ll power(int  b,int p)
{
    if(p==0)
    return 1;
    ll temp=power(b,p/2);
    temp=temp*temp;
    if(p%2==1)
    temp=temp*b;
    return temp;
}
*/
int lif(float x)
{
    int y=x;
    if(x==(float)y)
    return y;
    return y+1;
}
int main()
{
    char c[1000000];
    cin>>c;
    int n=strlen(c);
    c[n]='c';
    c[n+1]='c';
    c[n+2]='c';
    int ab=0,ba=0,aba=0;
    for(int i=0;i<n;i++)
    	if(c[i]=='A'){
    		if(c[i+1]=='B')
    			if(c[i+2]=='A')
    			{
    				aba++;
    				i+=2;
    			}
    			else
    			{
    				if(ab!=1)
    				ab++;
    				i++;
    			}
    	}
    	else
    		if(c[i]=='B')
    			if(c[i+1]=='A')
    				if(c[i+2]=='B')
    				{
    					aba++;
    					i+=2;
    				}
    				else
    				{
    					if(ba!=1)
    					ba++;
    					i++;
    				}
    if(aba>=2)
    	cout<<"YES";
    else
    	if(ab+ba+aba>=2)
    		cout<<"YES";
    	else
    	cout<<"NO";
    return 0;
}