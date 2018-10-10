#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;


#define sci(a) scanf("%d",&a)
#define scl(a) scanf("%lld",&a)
#define scs(a) scanf("%s",&a)

#define MOD 1000000007
#define PI acos(-1)
#define MXN 100099
#define MXM 100099

ll dx[] = {0,0,1,-1,1,1,-1,-1};
ll dy[] = {1,-1,0,0,-1,1,-1,1};


double dis(double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int A,B,C,D,L,P,Q,R,T,U,V,X,Y,Z;

bool ok(int n)
{
    int sum = 0;
    while(n)
    {
        sum +=n%10;
        n/=10;
    }
    return (sum==10);
}

int main()
{
    int k;
    cin>>k;
    int ans,cnt=0;
    for(int i=19;;i++)
    {
        if(ok(i))
            cnt++;
        if(cnt==k)
        {
            ans = i;
            break;
        }

    }
    cout<<ans<<endl;
    return 0;

}

