#include <bits/stdc++.h>
using namespace std;
// time  hour
const int N = 1e5 + 5;
int n, m, cnt, mx;
int ar[N], b[N];
long long sum;
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    for(int i=0, p=0; i<n; i++){
        sum += ar[i];
        if(!i)b[i]++;
        else b[i] += (b[i-1] + 1);
        while(sum > m){
            //cout << b[i] << ' ' << sum << endl;
            sum -= ar[p];
            p++;
            b[i]--;
            if(p == i)break;
        }
        //cout << i << ' ' << b[i] << ' ' << sum << endl;

    }
    for(int i=0; i<n; i++){
        mx = max(mx, b[i]);
    }
    cout << mx;
    return 0;
}
