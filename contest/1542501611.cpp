#include<bits/stdc++.h>
using namespace std;
short bit[21][205][20005],len[205],idd;
string ls[205],rs[205],s[205];
void cross(string b)
{
    string a=b;
	reverse(a.begin(),a.end());
    for(int j=0;j<a.size();j++)
   	{
    	int val=0;
    	for(int k=j;k<a.size() && k<j+20;k++)
   		{
   		    if(a[k]=='1')
    		val|=((1ll<<((k-j))));
    		if(val>=2e4)break;
   			bit[k-j+1][idd][val]=1;
   		}
   	}
}
int32_t main()
{
    cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(0);
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>s[i];
    	idd=i;
    	len[i]=s[i].size();
    	if(s[i].size()>=20)
    	{
    		ls[i]=s[i].substr(0,20);
    		rs[i]=s[i].substr(s[i].size()-20,20);
    	}
    	else
    	{
    		ls[i]=s[i];
    		rs[i]=s[i];
    	}
    	cross(s[i]);
    }
    int m;cin>>m;
    for(int i=n+1;i<=n+m;i++)
    {
    	int l,r;cin>>l>>r;
    	idd=i;
    	len[i]=len[r]+len[l];
    	if(len[i]>20)len[i]=20;
    	for(int k=1;k<=20;k++)
    	for(int j=0;j<=1e4 && j<(1ll<<(k));j++)
    	    bit[k][i][j]=bit[k][l][j]|bit[k][r][j];
    	if(len[l]<20 && len[r]<20)
    	{
    		s[i]=ls[l]+rs[r];
    		len[i]=len[l]+len[r];
    		if(s[i].size()>=20)
    		{
    			ls[i]=s[i].substr(0,20);
    			rs[i]=s[i].substr(s[i].size()-20,20);
    		}
    		else
    		{
    			ls[i]=s[i];
    			rs[i]=s[i];
    		}
    		cross(s[i]);
    	}
    	else if(len[l]<20 && len[r]>19)
    	{
    		s[i]=rs[l]+ls[r];
    		rs[i]=rs[r];
    		ls[i]=s[i].substr(0,20);
    		cross(s[i]);
    	}
    	else if(len[i]>19 && len[r]<20)
    	{

    		s[i]=rs[l]+ls[r];
    		ls[i]=ls[l];
    		rs[i]=s[i].substr(s[i].size()-20,20);
    		cross(s[i]);
    	}
    	else
    	{
    		s[i]=rs[l]+ls[r];
    		ls[i]=ls[l];
    		rs[i]=rs[r];
    		cross(s[i]);
    	}
    	int id=0;
    	for(int k=1;k<=20;k++)
    	for(int j=0;j<=2e4 && j<(1ll<<(k));j++)
    	{
    	        if(bit[k][i][j]==0)break;
    	        if(j==((1ll<<(k)))-1)
    	            id=k;
    	}
    	cout<<id<<"\n";


    }

}