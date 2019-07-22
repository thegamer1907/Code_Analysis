#include <bits/stdc++.h>

using namespace std;

#define mp(a,b) make_pair(a,b)
#define fast cin.tie(0);cout.tie(0);std::ios_base::sync_with_stdio(0);
#define fuf -1;

int main(){
    fast
    long long n,a,b;
    cin >> n >> a >> b;
    long long mass[a];
    long long k = 0;
    cin >> mass[0];
    if(mass[0] > b){
        k = mass[0]/b;
        mass[0] %= b;
    }
    for(long long i = 1;i<a;i++){
        cin >> mass[i];
        mass[i] -= k*b;
    }
    long long c = 1;
    long long x = 0;
    long long d = b;
    long long j1 = 0;
    while(mass[j1] <= b && j1 < a){
        j1++;
    }
    if(j1 == a){
        cout << 1;
        return 0;
    }
    d += j1;
    x = j1-1;
    if(mass[a-1] <= b){
        cout << 1;
        return 0;
    }
    vector<long long> ans;
    ans.push_back(0);
    while(x < n){
        //cout << d << endl;
        long long j = upper_bound(mass,mass+a,d)-mass;
        if(j == a){
            cout << c+1;
            return 0;
        }
        j--;
        //cout << d << endl;
        if(j == x){
            //c++;
            d += ((mass[j+1]-d+b-1)/b)*b;
            continue;
        }
        c++;
        d += j-x;
        x = j;
        ans.push_back(d);
        //cout << d << endl;
    }
    cout << c;
}