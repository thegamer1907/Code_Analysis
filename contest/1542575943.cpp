#include<bits/stdc++.h>
using namespace std;
char a[100005];
char b[100005];
int main()
{
    string s,ans,tmp;
    cin>>s;
    int n,i,j;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        cin>>tmp;
        a[i]=tmp[0];
        b[i]=tmp[tmp.size()-1];
        if(i==0)
        ans=tmp;
        else
        ans=ans+tmp;
    }
    //cout<<ans<<endl;
    int len=ans.size();
    int flag=0;
    for(i=0;i<len-1;i++)
    {
        if(ans[i]==s[0] && ans[i+1]==s[1])
        {
        flag=1;
        break;
        }
    }
    if(flag)
    printf("YES");
    else
    {
    	for(i=0;i<n;i++)
    	{
    		if(b[i]==s[0])
    		{
    			for(j=0;j<n;j++)
    			{
    				if(a[j]==s[1])
    				{
    					flag=1;
    					break;
					}
				}
				if(flag)
				break;
			}
		}
		
		if(flag)
		printf("YES");
		else
		printf("NO");
    }
    
    
    return 0;
}