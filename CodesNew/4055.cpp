#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
#include<set>
#include<string>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=2e5+5;
typedef pair<int, int> pr;
typedef long long ll;
#define fi first
#define se second
#define me(x) memset(x, -1, sizeof(x))
#define mem(x) memset(x, 0, sizeof(x))
//#define N 100000+5
//ll a[N], b[N]; //a wohen
ll a[N], b[N];
int main()
{
    ll i, j, k;
    ll sumx[N], suma, sum=0;  //sumy%suma==0-->sum
    ll n, m;
    scanf("%I64d%I64d", &n, &m);
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        sumx[i]=sum;
    }
    suma=sum;
    sum=0;
    for(i=0; i<m; i++)
        cin>>b[i];
    for(i=0; i<m; i++)
    {
        sum+=b[i];
        if(sum>=suma) {cout<<n<<endl;sum=0;}
        else
        {
            k=upper_bound(sumx, sumx+n, sum)-sumx-1;
            //cout<<k<<' ';
            cout<<n-k-1<<endl;
        }
    }

}
