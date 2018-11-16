#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n , m , a[10005] , b [10005];
bool used[10005];
int main()
{
    ll cnt = 0;
    cin >>  n;
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    sort(a, a+n);
    cin >> m;
    for(int j = 0 ; j < m ; j ++){
        cin >> b[j];
    }
    sort(b, b+m);
    for(int i = 0 ; i < n; i ++){
        for(int j = 0 ; j < m ; j ++){
            if(!used[j] && abs(a[i] - b[j]) <= 1)
            {
                used[j]=true;
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;
}
