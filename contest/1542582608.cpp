#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;


inline int read(){int ra,fh;char rx;rx=getchar(),ra=0,fh=1;
while((rx<'0'||rx>'9')&&rx!='-')rx=getchar();if(rx=='-')
fh=-1,rx=getchar();while(rx>='0'&&rx<='9')ra*=10,ra+=rx-48,
rx=getchar();return ra*fh;}


int h,m,s;
int t1,t2;

int main()
{
//    freopen("data.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin >> h>>m>>s>>t1>>t2;
    h*=5;
    h%=60;

    t1*=5;
    t1%=60;
    t2*=5;
    t2%=60;


    double ss = s;
    double mm = m+s/60.0;
    double hh = h+mm/60.0*5;



    int f=0;
    for(int i=t1;;i=(i+1)%60)
    {
        if(i==t1)continue;
        if(i==0)
        {
            if(ss>=59||mm>=59||hh>=59)
                break;
        }
        else
        {
            if(ss>=i-1&&ss<=i || mm>=i-1&&mm<=i || hh>=i-1&&hh<=i)
                break;
        }
        if(i==t2)
        {
            f=1;
            break;
        }

    }


    for(int i=t1;;i=(i-1+60)%60)
    {
        if(i==t1)continue;
        if(i==59)
        {
            if(ss>=59||mm>=59||hh>=59)
                break;
        }
        else
        {
            if(ss>=i&&ss<=i+1 || mm>=i&&mm<=i+1 || hh>=i&&hh<=i+1)
                break;
        }
        if(i==t2)
        {
            f=1;
            break;
        }

    }
    if(f)
    {
        cout <<"YES"<<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
	return 0;
}



