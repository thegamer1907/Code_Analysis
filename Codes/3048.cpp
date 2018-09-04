/*
    
    Jaydeep Khandelwal,
    CSE 3rd year,
    MNNIT Allahabad
    
    Kathumar, Alwar, Rajsthan.
    
*/
//For taking input line with spaces: getline(cin,s[i]);


#include<bits/stdc++.h>
using namespace std;

//Constants:
#define mod 1000000007
#define INF 1000000000
#define INFL 1000000000000000000
#define N 100005
#define PI (2.0*acos(0.0))

//Shortcuts:
#define ll long long
#define vec vector<ll>
#define matrix vector<vector<ll> >
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sn struct node
#define sf1(a) scanf("%lld",&a);
#define sf2(a,b) scanf("%lld%lld",&a,&b);
#define sf3(a,b,c) scanf("%lld%lld%lld",&a,&b,&c);
#define pf1(a) printf("%lld\n",a);
#define pf2(a,b) printf("%lld %lld\n",a,b);
#define pf3(a,b,c) printf("%lld %lld %lld\n",a,b,c);
#define ffor(a,b) for(i=a;i<=b;i++)
#define rfor(a,b) for(i=a;i>=b;i--)

//Mistakes:
#define pritnf printf

ll LPS[1000005];

string s, s2;
ll l, l2;

void calcLPS()
{
    ll i,j=0,k,m;

    LPS[0]=0;

    for(i=1;i<l;)
    {
        if(s[i]==s[j])
            LPS[i++]=++j;       //LPS[i]=j+1; i++; j++;
        else
        {
            if(j==0)
                LPS[i++]=0;     //LPS[i]=0; i++;
            else
                j=LPS[j-1];
        }
    }
}




int main()
{
	ll t,i=0,j,k,x,y,z,count=0,p,flag=0,ans=0,sum=0,n,m,max1,min1,pos,tmp,q;
	
	//string s;
	
	t=1;
	
	while(t--)
	{
		string ans;
		cin >> s;

		l=n=s.length();

		flag=0;

		calcLPS();

		if(LPS[n-1]==0)
			ans="Just a legend";
		else
		{
			for(i=0;i<n-1;i++)
			{
				if(LPS[i]==LPS[n-1])
				{
					flag=1;
					break;
				}
			}

			if(flag==1)
			{
				ans=s.substr(0, LPS[n-1]);
			}
			else
			{
				//printf("jay");
				if(LPS[LPS[n-1]-1]==0)
					ans="Just a legend";
				else
					ans=s.substr(0, LPS[LPS[n-1]-1]);
			}


		}
	    
	    cout << ans;

	}
	
	
	return 0;
}
