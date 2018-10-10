#include<bits/stdc++.h>
using namespace std;
int Z[1000001],cnt[1000001];
void getZarr(string str)
{
	memset(cnt,0,sizeof cnt);
	memset(Z,0,sizeof Z);
	int n=str.size();
	Z[0]=n;
	cnt[Z[0]]++;
	int L, R, k;
    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i > R)
        {
            L = R = i; 
            while (R<n && str[R-L] == str[R])
                R++;
            Z[i] = R-L;
            R--;
        }
        else
        {
            k = i-L;
 			if (Z[k] < R-i+1)
                 Z[i] = Z[k];
            else
            {
                L = i;
                while (R<n && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
        }
        cnt[Z[i]]++;
    }
    for(int i=n-1;i>0;i--)
    {
    	cnt[i]+=cnt[i+1];
    }
    /*for(int i=1;i<n;i++)
    {
    	if(Z[n-i-1]==i+1)
    	{
    //		cout<<i<<endl;
    	}
    }
    */
    int ans=0;
    int idx=-1;
    for(int i=1;i<=n;i++)
    {
    	if(Z[n-i]==i)
    	{
    		if(cnt[i]>2)
    		{
    			if(ans<i)
    			{
    				ans=i;
    			}
    		}
    	}
    }
    if(ans==0)
    {
    	cout<<"Just a legend\n";
    }
    else
    {
        for(int i=0;i<ans;i++)
        {
        	cout<<str[i];
        }
    }
}
int main()
{
	string str; cin>>str;
	getZarr(str);
}