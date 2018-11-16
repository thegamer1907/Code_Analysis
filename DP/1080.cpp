#include <bits/stdc++.h>
using namespace std;

string dp[101][902];
string dp1[101][902];
int main() 
{
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a[101];
	int n;
	cin>>n;
	int sum=0;
	int start=0,end=0,s=0;
	int maxsum=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    a[i]==0?sum+=(1):sum+=(-1);
	    if(sum>maxsum)
	    {
	        maxsum=sum;
	        start=s;
	        end=i;
	       
	    }
	    if(sum<0)
	    {
	        sum=0;
	        s=i+1;
	    }
	    
	}
//	cout<<start<<end<<endl;
	int cnt=0;
	if(start<=end)
	{
	    for(int i=0;i<start;i++)
	    {
	        if(a[i]==1)
	        cnt++;
	    }
	    for(int i=start;i<=end;i++)
	    {
	        if(a[i]==0)
	        cnt++;
	    }
	    for(int i=end+1;i<n;i++)
	    {
	        if(a[i]==1)
	        cnt++;
	    }
	}
	
	cout<<cnt;
	
	return 0;
}
