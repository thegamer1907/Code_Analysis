#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector < int > a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int k = 1, s = 1;
    for (int i = 0; i < n - 1; ++i){
        if (a[i + 1] > a[i]){
            ++k;
            s = max(k, s);
        }
        else k = 1, s = max(k, s);
    }
    cout  << s;
}
