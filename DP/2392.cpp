#include <bits/stdc++.h>
#define task        ""
#define fu(i,a,b)   for(int (i) = (a); i <= (b); ++i)
#define fd(i,a,b)   for(int (i) = (a); i >= (b); --i)
#define read(ans)   (ans) = 0; while(!isdigit(ch = getchar())); while(isdigit(ch)){(ans) = ((ans)<<1) + ((ans)<<3) + ch - 48; ch = getchar(); }
#define ll  long long

using namespace std;
const int oo = 1e9 + 7;
const int N = 2e5 + 9;
    int n,k,id,a[N];
    char    ch;

//=====================================
void home(){
    #ifndef ONLINE_JUDGE
    freopen(task".INP","r", stdin);
    freopen(task".OUT","w", stdout);
    #endif
}

//=====================================
int main()
{   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //home();
    cin>>n>>k; a[0] = 0;
    fu(i,1,n){
        cin>>a[i];
        a[i] += a[i-1];
    }
    int res = oo;
    fu(i,k,n) if (res > a[i] - a[i-k]){
        res = a[i] - a[i-k];
        id = i-k+1;
    }
    cout<<id;
}
