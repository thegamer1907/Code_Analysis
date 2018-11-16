#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef double    dl ;
#define INF 0x7f

const int  inf = 987654321;
const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
const int sqrtn = 300;

#define f(i,l,r) for(int i=l;i<=r;++i)
#define g(i,l,r) for(int i=l;i>=r;--i)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
#define pii pair<int,int>
#define lowbit(x) x&(-x)
#define X first
#define Y second 
int n,a,b,c;
void work()
{
    cin>>n>>a>>b;
    if(a>b)swap(a,b);
    n/=2; 
    while(!((b-a)==1 && a%2==1))
    {

        a=(a+1)/2;
        b=(b+1)/2;
        n /=2; 
        c++; 
    }
    if(n==1)  cout << "Final!"<<endl;
    else cout << c+1<<endl; 


}

int main()
{
    FAST_IO ;

    
    work();


    return 0; 
}