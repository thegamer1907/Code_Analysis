#include <bits/stdc++.h>
    #define rep(i ,x ,y) for( int i=x ;i<=y ;i++)
    using namespace std;
    typedef long long ll;
    ll n ,m ,k ,ans=1;
    struct Op{
        ll a,n,res;
    }op[100500];
    int main( ){
         scanf("%lld%lld%lld" ,&n ,&m ,&k);
         rep( i ,1 ,m ){
             scanf("%lld" ,&op[i].a );
             op[i].a--;
             op[i].n = op[i].a/k;
             op[i].res = op[i].a%k;
         }
         ll div = 0 ,now = op[1].n ,d ,tmp=0;
         rep( i ,1 ,m ){
     
           //  cout<<now<<" "<<op[i].n<<endl;
             if( op[i].n == now ){
                 tmp++;
             }
             else{
                    div+=tmp;
                // cout<<"it is "<<op[i].a+1<<endl;
                     rep( j ,i ,m){
                        // cout<<"div "<<div<<endl;
                      if( op[j].res<div ){
                      op[j].n -= div/k;
                     d = div%k;
             //cout<<"d "<<d<<endl;
                     op[j].res -= d;
                     if( op[j].res<0 ){
                     	op[j].n--;
                     	op[j].res += k;
					    }  
                     }
                     else op[j].res -= div;
           //  cout<<"res "<<op[j].res<<endl;
           //  cout<<"n "<<op[j].n<<endl;
                 }
                 ans++;
                 tmp = 1;
                 div = 0;
                 now = op[i].n;
                }
            }
         printf("%lld" ,ans);
         return 0;
    }