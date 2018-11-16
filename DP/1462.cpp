#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n,x,mx=0;
	cin>>n;
	int cnt0=0,cnt1=0;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x==1)
		{
			cnt1++;
		}
		if(x==0)
        {
            cnt0++;
            if(cnt0>mx) 
            {
            	mx=cnt0;
			}
        }
        else if(cnt0) 
        {
        	cnt0--;
		}
	}
	
	if(mx==0)
	{
		mx--;
	}
	cout<<mx+cnt1<<endl;
	
	
}
