#include <bits/stdc++.h>
using namespace std;
#define fl(i,a,n) for (int i=a;i<n;i++)
#define rfl(i,a,n) for (int i=n-1;i>=a;i--)
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
typedef long long ll;
typedef pair<int,int> PII;
const ll mod=1000000007;
template <typename T> T gcd(T a, T b) { return b != 0 ? gcd(b, a % b) : a; }
/*std::cout << std::fixed;
std::cout << std::setprecision(2);*/

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n,k;
    cin >> n >> k;
    map<int,int>ma;
    if(k==1)
    {
    	int t;
    	int flag=0;
    	while(n--)
    	{
    		cin >> t;
    		if(t==0){flag=1;}
    	}
    	if(flag==1)
    	{
    		cout << "YES";
    	}
    	else
    	{
    		cout << "NO";
    	}
    	return 0;
    }
    else if(k==2)
    {
    	int x,y;
    	int flag1=0,flag2=0;
    	while(n--)
    	{
    		cin >> x >> y;
             if(x==0)
             {
             	flag1=1;
             }
             if(y==0)
             {
             	flag2=1;
             }
    	}
    	if(flag1==1&&flag2==1)
    	{
    		cout << "YES";
    	}
    	else
    	{
    		cout << "NO";
    	}
    	return 0;
    }
    else if(k==3)
    {
    	int x,y,z;
    	int flag1=0,flag2=0,flag3=0;
    	int flag=0;
    	while(n--)
    	{
    		flag1=0,flag2=0,flag3=0;
    		cin >> x >> y >> z;
    		if(x==1)
    		{
    			flag1=1;
    		}
    		if(y==1)
    		{
    			flag2=1;
    		}
    		if(z==1)
    		{
    			flag3=1;
    		}
            if(flag1==0&&flag2==0&&flag3==0)
            {
            	flag=1;
            }
            if(flag1==0&&flag2==0&&flag3==1)
            {
            	ma[1]=1;
            }
            if(flag1==0&&flag2==1&&flag3==0)
            {
            	ma[2]=1;
            }
            if(flag1==1&&flag2==0&&flag3==0)
            {
            	ma[3]=1;
            }
            if(flag1==0&&flag2==1&&flag3==1)
            {
            	ma[4]=1;
            }
            if(flag1==1&&flag2==1&&flag3==0)
            {
            	ma[5]=1;
            }
            if(flag1==1&&flag2==0&&flag3==1)
            {
            	ma[6]=1;
            }
    	}
    	if(flag==1)
    	{
    		cout << "YES";
    		return 0;
    	}
    	if((ma[1]==1&&ma[2]==1)||(ma[2]==1&&ma[3]==1)||(ma[3]==1&&ma[1]==1)||(ma[1]==1&&ma[2]==1&&ma[3]==1))
    	{
    		cout << "YES";
    	}
    	else if(ma[1]==1&&ma[5]==1)
    	{
    		cout << "YES";
    	}
    	else if(ma[2]==1&&ma[6]==1)
    	{
    		cout << "YES";
    	}
    	else if(ma[3]==1&&ma[4]==1)
    	{
    		cout << "YES";
    	}
    	else
    	{
    		cout << "NO";
    	}
    	return 0;

    }
    else if(k==4)
    {
    	int a,b,c,d;
    	int flag1=0,flag2=0,flag3=0,flag4=0;
    	map<int,int>m2;
    	while(n--)
    	{
    		cin >> a >> b >> c >> d;
            flag1=0,flag2=0,flag3=0,flag4=0;
    		if(a==1)
    		{
    			flag1=1;
    			m2[1]++;
    		}
    		if(b==1)
    		{
    			flag2=1;
    			m2[2]++;
    		}
    		if(c==1)
    		{
    			flag3=1;
    			m2[3]++;
    		}
    		if(d==1)
    		{
    			flag4=1;
    			m2[4]++;
    		}
    		if(flag1==0&&flag2==0&&flag3==0&&flag4==0)
    		{
                 ma[1]=1;
    		}
    		if(flag1==0&&flag2==0&&flag3==0&&flag4==1)
    		{
    			ma[2]=1;
    		}
    		if(flag1==0&&flag2==0&&flag3==1&&flag4==0)
    		{
    			ma[3]=1;
    		}
    		if(flag1==0&&flag2==1&&flag3==0&&flag4==0)
    		{
    			ma[4]=1;
    		}
    		if(flag1==1&&flag2==0&&flag3==0&&flag4==0)
    		{
    			ma[5]=1;
    		}
    		if(flag1==1&&flag2==1&&flag3==0&&flag4==0)
    		{
    			ma[6]=1;
    		}
    		if(flag1==1&&flag2==0&&flag3==1&&flag4==0)
    		{
    			ma[7]=1;
    		}
    		if(flag1==1&&flag2==0&&flag3==0&&flag4==1)
    		{
    			ma[8]=1;
    		}
    		if(flag1==0&&flag2==1&&flag3==1&&flag4==0)
    		{
    			ma[9]=1;
    		}
    		if(flag1==0&&flag2==1&&flag3==0&&flag4==1)
    		{
    		       ma[10]=1;
    		}
    		if(flag1==0&&flag2==0&&flag3==1&&flag4==1)
    		{
    			ma[11]=1;
    		}
    		if(flag1==1&&flag2==0&&flag3==1&&flag4==1)
    		{
    			ma[12]=1;
    		}
    		if(flag1==0&&flag2==1&&flag3==1&&flag4==1)
    		{
    			ma[13]=1;
    		}
    		if(flag1==1&&flag2==1&&flag3==0&&flag4==1)
    		{
    			ma[14]=1;
    		}
    		if(flag1==1&&flag2==1&&flag3==1&&flag4==0)
    		{
    			ma[15]=1;
    		}
    		if(flag1==1&&flag2==1&&flag3==1&&flag4==1)
    		{
    			ma[16]=1;
    		}

    	}
    	if(ma[1]==1)
    	{
    		cout << "YES";
    		return 0;
    	}
    	if(m2[1]==n||m2[2]==n||m2[3]==n||m2[4]==n)
    	{
    		cout << "NO";
    	}
    	else if(ma[2]==1&&((ma[3]==1)||(ma[4]==1)||(ma[5]==1)||(ma[6]==1)||(ma[7]==1)||(ma[9]==1)||(ma[15]==1)))
    	{
    		cout << "YES";
    	}
    	else if(ma[3]==1&&((ma[2]==1)||(ma[4]==1)||(ma[5]==1)||(ma[6]==1)||(ma[8]==1)||(ma[10]==1)||(ma[14]==1)))
    	{
    		cout << "YES";
    	}
    	else if(ma[4]==1&&((ma[2]==1)||(ma[3]==1)||(ma[5]==1)||(ma[7]==1)||(ma[8]==1)||(ma[11]==1)||(ma[12]==1)))
    	{
    		cout << "YES";
    	}
    	else if(ma[5]==1&&((ma[2]==1)||(ma[3]==1)||(ma[4]==1)||(ma[9]==1)||(ma[10]==1)||(ma[11]==1)||(ma[13]==1)))
    	{
    		cout << "YES";
    	}
    	else if(ma[6]==1&&ma[11]==1)
    	{
    		cout << "YES";
    	}
    	else if(ma[7]==1&&ma[10]==1)
    	{
    		cout << "YES";
    	}
    	else if(ma[8]==1&&ma[9]==1)
    	{
    		cout << "YES";
    	}
    	else 
    	{
    		cout << "NO";
    	}
    }
    return 0;
}
