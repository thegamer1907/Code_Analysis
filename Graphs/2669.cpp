#include<bits/stdc++.h>
#define pb push_back
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll ;
ll n,m,x,nb; string s ;
vector < ll > g[101010];
bool vis[101010];
double ans = 0.0;


void solve()
{
    ll n,m,k;

    cin>>n>>m>>k;
    ll need = (n*m) / k ;
    if(need==1) need++;
    bool direction = true ;
    int lasti=0,lastj=0;
    ll cnt = 0 ;
    for(int l=0;l<k-1;l++)
    {
    cout<< need<<" ";
    ll p = need ;
    //cout<<lasti<<"-------------------- "<<lastj<<"---";
    while(p)
    {
    int i = lasti ;

            if(direction && p)
                {
                int j=lastj ;
                for(;j<m && p; j++,p--)
                {

                    cout<<i+1<<" "<<j+1<<" ";
                    cnt++;


                }

                if(j>=m) direction =false,lastj=m-1,i++;
                else lastj=j;


                 lasti = i;
                 continue ;


                }
            if(!direction && p)
            {

            int j=lastj;
                for(;j>=0 && p; j--,p--)
                {

                    cout<<i+1<<" "<<j+1<<" ";
                    cnt++;



                }

                if(j<0) direction = true,lastj=0,i++;
                else lastj=j;

                 lasti = i;

            }








    }
    cout<<'\n';

    }

    cout<<n*m - cnt<<" ";

    while(cnt<n*m)
    {

     int i = lasti ;

            if(direction)
                {
                int j=lastj;
                for(;j<m && cnt<n*m; j++)
                {

                      cout<<i+1<<" "<<j+1<<" ";
                    cnt++;


                }

                if(j>=m) direction =false,lastj=m-1,i++;
                else lastj=j;


                 lasti = i;



                }
            if(!direction)
            {

            int j=lastj;
                for(;j>=0 && cnt<n*m ; j--)
                {

                    cout<<i+1<<" "<<j+1<<" ";
                    cnt++;



                }

                if(j<0) direction = true,lastj=0,i++;
                else lastj=j-1;

                 lasti = i;

            }



    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("test.in","r",stdin);
    //freopen("out.txt","w",stdout);
    solve();
    return 0;
}
