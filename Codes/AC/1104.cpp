#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>

#define ll long long

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    ll d;
    cin >> n >> d;
    vector<pair<ll, ll> > A(n);
    for (int i= 0; i < n; i++){
        cin >> A[i].first >> A[i].second;
    }

    sort(A.begin(), A.end());

    int i= 0, j= 0;
    ll cur= A[0].second, cntmax= 0;
    while (j < n){
        if (A[j].first - A[i].first >= d){
            cur-= A[i].second;
            i++;
            if (j < i){
                j++;
                if (j < n){
                    cur+= A[j].second;
                }
            }
        }else{
            cntmax= max(cur, cntmax);
            j++;
            if (j < n){
                cur+= A[j].second;
            }
        }
    }
    cout << cntmax;
    return 0;
}
