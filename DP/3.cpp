#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define endl "\n"
#define ull unsigned long long
#define ALL(v) ((v).begin()), ((v).end())
#define INCREASING(v) sort(ALL(v))
#define DECREASING(v) SORTI(v), reverse(ALL(v))
#define SZ(v)   ((int)((v).size()))
#define LP(c,x,n)  for(int c=x;c<n;c++)
#define LO(c,n,x)  for(int c=n;c>=x;c--)
#define watch(x) cout << (#x) << " is " << (x) << endl
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define PI ( 2 * acos(0.0))
#define EPS 1e-8
#define INF 1.0/0.0
#define Yala_Besor3a ios_base::sync_with_stdio(0),ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ReadFile freopen("input.txt","r",stdin)
#define WriteFile freopen("output.txt","w",stdout)
using namespace std;
const int OO = 0x3f3f3f3f,NegOO= -1*OO,N =1e3+5,mod = 1e9+7 ;
int fbo[N],fgi[N];
int main()
{
    //Yala_Besor3a;
    int n,m,ans=0;
    cin>>n;
    int bo[n];
    for (int i = 0; i < n; ++i) {
        cin>>bo[i];
        fbo[bo[i]]++;
    }
    cin>>m;
    int gi[m];
    for (int i = 0; i < m; ++i) {
        cin>>gi[i];
        fgi[gi[i]]++;
    }
    sort(bo,bo+n);
    for (int i = 0; i < n; ++i) {
        if(fgi[bo[i]-1]>0)ans++,fgi[bo[i]-1]--;
        else if(fgi[bo[i]]>0)ans++,fgi[bo[i]]--;
        else if(fgi[bo[i]+1]>0)ans++,fgi[bo[i]+1]--;
    }
    cout<<ans<<endl;
    return 0;
}