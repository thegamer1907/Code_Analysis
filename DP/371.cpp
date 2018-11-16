#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define freo freopen("gir.txt","r",stdin)
#define frec freopen("cik.txt","w",stdout)

using namespace std;
vector<int>boy;
vector<int>girl;

int main()
{
	int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	int a;
    	cin>>a;
    	boy.pb(a);
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int a;
		scanf("%d",&a);
		girl.pb(a);
	}
	sort(girl.begin(),girl.end());
	sort(boy.begin(),boy.end());
	int s=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			int x=boy[i]-girl[j];
			if(x>=-1 && x<=1)
			{
			girl[j]=10000;
			s++;
			break;	
			}
		}
	}
	cout<<s;
	   
	   
	   
	   
return 0;
}


