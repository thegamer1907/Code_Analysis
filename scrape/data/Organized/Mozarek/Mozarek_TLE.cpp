#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;

int main(){
    ll n,m,k;
    cin >> n >> m >> k;

    vector<ll> p(m);
    for(int i=0;i<m;i++){
        cin>>p[i];
    }

    ll shift=0;
    ll t_shift=0;
    ll op=1;
    ll page=1;
    ll i=0;
    while(i<m){
        //cout << i<<endl;
        while(p[i] > k*page+shift && t_shift==shift) page++;

        if(p[i] <= k*page+shift){
            i++;
            t_shift++;
        }else{
            op++;
            shift = t_shift;
        }
    }

    cout << op<<endl;
}