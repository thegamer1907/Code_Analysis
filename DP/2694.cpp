#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e+5;
int x[maxn],h[maxn],N,memo[maxn][4];
int f(int pos,int prev){
    if (pos == N+1)return 0;
    int &ans = memo[pos][prev];
    if (ans != -1)return ans;
    int sol = 0;
    int l = x[pos]-h[pos];
    int r = x[pos]+h[pos];
    if (r < x[pos+1]|| pos == N)
        sol = max(sol,f(pos+1,2)+1);
    if (prev <= 1){
        if (l > x[pos-1] || pos == 1)
            sol = max(sol,f(pos+1,1)+1);

    }
    else{
        int z = x[pos-1]+h[pos-1];
        if (z < l)
            sol = max(sol,f(pos+1,1)+1);
    }
    sol = max(sol,f(pos+1,0));
    return (ans = sol);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen(".in","r",stdin);
    memset(memo,-1,sizeof memo);
    cin >> N;
    for (int i = 1; i <= N;i++)
        cin >> x[i] >> h[i];
    cout << f(1,0);
    return 0;
}
