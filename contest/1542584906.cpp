#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9;


inline int read(){int ra,fh;char rx;rx=getchar(),ra=0,fh=1;
while((rx<'0'||rx>'9')&&rx!='-')rx=getchar();if(rx=='-')
fh=-1,rx=getchar();while(rx>='0'&&rx<='9')ra*=10,ra+=rx-48,
rx=getchar();return ra*fh;}




int n;
string s;
string w;



int main()
{
//    freopen("data.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin >> s;
    cin >> n;
    int f=0,f1=0;
    for(int i=0;i<n;i++)
    {
        cin >> w;
        if(w==s)
        {
            f=1,f1=1;
        }
        if(w[0]==s[1])
        {
            f1=1;
        }

        if(w[1]==s[0])
        {
            f=1;
        }

    }
    if(f1&&f)
    {
        cout <<"YES"<<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }
	return 0;
}
