#include <bits/stdc++.h>

using namespace std;
const int X = 1e7 + 100;
bool used[X];
int a[X];
int pr[X];
int c[X];
int pre[X];
int main()
{
    int n , m;
    ios_base::sync_with_stdio(0);
    cin>>n;
    for (int i = 1; i <= n ; ++ i){
        int b;
        cin>>b;
        a[b]++;
    }
    int flag = 0;
    for (int i = 2; i <= X; ++ i ){
           if (!used[i]){
                flag++;
                pr[flag] = i;
           }
           for (int j = 1; j <= flag && pr[j] * i <= X; ++ j){
            used[pr[j] * i] = true;
            if (i % pr[j] == 0) break;
           }
    }
    for (int i = 1; i <= flag; ++ i)
	{
		for (int j = pr[i]; j <= X; j += pr[i])
		{
			c[pr[i]] += a[j];
		}
	}
    for (int i = 1; i <= X; ++ i){
        pre[i] += pre[i - 1] + c[i];
    }
    cin>>m;
    for (int i = 0; i < m ; ++ i){
        int l , r;
        cin>>l>>r;
        r = min(r , X);
        if (l > r) cout<<0<<endl;
        else cout<<pre[r] - pre[l - 1]<<endl;
    }
}
