#include <iostream>
#include <stdio.h>
#define FOR(i,a,b) for (int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define REP(i,b) for (int i=0; i<b; ++i)
#define input stdin
#define output stdout
#define assign freopen
#define endl '\n'
#define sz(x) (int) x.size()
#define div /
#define mod %
#define fillchar(x,y,z) memset(x,z,y)
typedef long long int64;
typedef unsigned long long qword;
typedef void procedure;
using namespace std;
int n,k;
int a[300005];
procedure Input()
{
    cin >> n >> k;
    FOR(i,1,n)
        cin >> a[i];
}
procedure Solve()
{
    int l=0,cnt=0,res=0,save=0;
    FOR(i,1,n) {
        if (l<i) {
            l=i;
            cnt=0;
        }
        while (l<=n&&1-a[l]+cnt<=k)
            cnt+=1-a[l++];
        if (cnt<=k)
            if (res<l-i) {
                res=l-i;
                save=i;
            }
        cnt-=1-a[i];
    }
    cout << res << endl;
    FOR(i,save,save+res-1)
        a[i]=1;
    FOR(i,1,n)
        cout << a[i] << ' ';
}
int main()
{
    //assign("input.txt","r",input);
    //assign("output.txt","w",output);
    iostream::sync_with_stdio(false);
    cin.tie(0);
    Input();
    Solve();
    return 0;
}