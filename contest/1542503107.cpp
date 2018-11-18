#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;

typedef long long ll;

bool arr[70];
ll h, m, s, t0, t1;
ll dx[2] = {-1, 1};

int main(){
    //freopen("out.txt", "w", stdout);
    cin >> h >> m >> s>> t0>>t1;
    h = h%12;
    m = m%60;
    s = s%60;
    t0 = t0%12;
    t0 *= 5;
    t1 = t1%12;
    t1 *= 5;
    h*=5;
    arr[h] = true;
    arr[m] = true;
    arr[s] = true;
    if(arr[t0]) t0--;
    if(arr[t1]) t1--;
    if(t0 < 0) t0 = 60+t0;
    if(t0 > 59) t0=t0%60;
    if(t1 < 0) t1 = 60+t1;
    if(t1 > 59) t1=t1%60;
    if(arr[t0]){
        cout << "NO" << endl;
        return 0;
    }
    queue<ll> q;

    q.push(t0);

    while(!q.empty()){
        arr[q.front()] = true;
        for(int i = 0; i < 2; i++){
            ll nx = q.front()+dx[i];
            if(nx < 0) nx = 60+nx;
            if(nx > 59) nx = nx%60;
            if(arr[nx]) continue;
            if(nx == t1){
                cout << "YES" << endl;
                return 0;
            }
            q.push(nx);
        }
        q.pop();
        /*for(int i = 0; i < 60; i++){
            cout << arr[i] << " ";
        }
        cout << endl;*/
    }

    cout << "NO" << endl;

    return 0;

}
