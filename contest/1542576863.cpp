/* code by AbhiTaker  */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define M 1000000007
#define N 1000016
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
#define f first
#define s second
#define inf 9000000000000000000

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n,k,i,j,a,b,c,d;
    cin>>n>>k;
    ll ar[20]={0};
    if(k==4){
    for(i=0;i<n;i++)
    {
            cin>>a>>b>>c>>d;

            if(a==0 && b==0 && c==0 && d==0)
                ar[1]=1;
            else if(a==0 && b==0 && c==0)
                ar[2]=1;
            else if(a==0 && b==0 && d==0)
                ar[3]=1;
            else if(a==0 && c==0 && d==0)
                ar[4] = 1;
            else if(b==0 && c==0 && d==0)
                ar[5]=1;
            else if(a==0 && b==0)
                ar[6]=1;
            else if( a==0 && c==0 )
                ar[7]=1;
            else if(a==0 && d==0)
                ar[8]=1;
            else if(b==0 && c==0)
                ar[14]=1;
            else if(b==0 && d==0)
                ar[13]=1;
            else if(c==0 && d==0)
                ar[12]=1;
            else if(a==0)
                ar[15]=1;
            else if(b==0)
                ar[11]=1;
            else if(c==0)
                ar[10]=1;
            else if(d==0)
                ar[9]=1;


    }

    if(ar[1] || (ar[2] && ar[9]) || (ar[3] && ar[10]) || (ar[4] && ar[11]) ||
        (ar[6] && ar[12]) || (ar[7] && ar[13]) || (ar[8] && ar[14]) || (ar[5] && ar[15])
       || (ar[2] && ar[12]) || (ar[2] && ar[13]) || (ar[2] && ar[8]) || (ar[4] && ar[6])
       || (ar[4] && ar[14]) || (ar[4] && ar[13]) || (ar[3] && ar[7])  || (ar[3] && ar[12])
       || (ar[3] && ar[14]) || (ar[5] && ar[7]) || (ar[5] && ar[6]) || (ar[5] && ar[8])
       || (ar[2] && ar[3]) || (ar[2] && ar[4])|| (ar[2] && ar[5]) || (ar[3] && ar[4])
       || (ar[3] && ar[5]) || (ar[4] && ar[5]))
        cout<<"YES\n";
    else
        cout<<"NO\n";

    }
    else if(k==3)
    {
        for(i=0;i<n;i++)
        {

                cin>>a>>b>>c;
                if(a==0 && b==0 && c==0)
                    ar[1]=1;
                else if(a==0 && b==0)
                    ar[2]=1;
                else if(a==0 && c==0)
                    ar[3]=1;
                else if(b==0 && c==0)
                    ar[4]=1;
                else if(a==0)
                    ar[7]=1;
                else if(b==0)
                    ar[6]=1;
                else if(c==0)
                    ar[5]=1;

        }

        if(ar[1] || (ar[2] && ar[5]) || (ar[3] && ar[6]) || (ar[4] && ar[7]) || (ar[3] && ar[4]) ||
            (ar[2] && ar[4]) || (ar[3] && ar[2]) )
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    else if(k==2)
    {

        for(i=0;i<n;i++)
        {

                cin>>a>>b;
                if(a==0 && b==0)
                    ar[1]=1;
                else if(a==0)
                    ar[2]=1;
                else if(b==0)
                    ar[3]=1;

        }
        if(ar[1] || (ar[2] && ar[3]))
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    else
    {
        ll f=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a==0)
                f=1;
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
