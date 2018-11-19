
#include<bits/stdc++.h>

using namespace std;

#define READ                freopen("in.txt", "r", stdin)
#define WRITE               freopen("out.txt", "w", stdout)
#define ll                  int long long
#define ull                 unsigned long long
#define ld                  long double
#define lld                 long long double
#define pi                  acos(-1)
#define pb                  push_back
#define pbk                 pop_back
#define m_p                 make_pair
#define gcd(a,b)            __gcd(a,b)
#define lcd(a,b)            (a/gcd(a,b))*b
#define INF                 1000000000
#define M                   1000000000+7
#define dist(ax,ay,bx,by)   ((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
#define sort(t)             sort(t.begin(),t.end())
//div div[100][100];
//int br[100][100];
//int a[8]= {-1,-1,-1,0,0,1,1,1};
//int b[8]= {-1,0,1,-1,1,-1,0,1};


int main()
{
    string s1,s2;
    int n,temp=0;
    cin>>s1;
    cin>>n;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        cin>>s2;
        if(s2==s1)
        {
            cout<<"Yes"<<endl;
            temp=1;
            break;
        }
        if(s1[1]==s2[0])
            cnt2=1;
        if(s1[0]==s2[1])
            cnt1=1;

    }
   // cout<<cnt1<<cnt2<<endl;
   if(temp==0)
    {if(cnt1+cnt2==2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }
    return 0;
}
