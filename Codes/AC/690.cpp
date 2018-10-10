#include <bits/stdc++.h>
#define ll      long long int
#define PI      acos(-1)
#define read    freopen("in.txt","r",stdin)
#define uu      first
#define vv      second
#define write   freopen("out.txt","w",stdout)
#define pii     pair<int,int>
#define INF     1e9
#define EPS     1e-8
#define MAX     1000006
#define MOD     1000000007
using namespace std;
int main()
{
    int n , k , sum = 0, cnt=0;
    cin>>k;
    for( int  i =10 ; i< INF; i++) {

        int tmp = i;
        sum = 0;
        while( tmp) {
            sum += tmp%10;
            tmp/=10;
        }
        if( sum == 10 ) cnt++;
        if( cnt == k ){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
