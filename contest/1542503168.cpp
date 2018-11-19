#include <bits/stdc++.h>

const int INF = (int)1e9;


using namespace std;

#define endl '\n'
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define popcnt(x) __builtin_popcount(x)

typedef long long ll;

const int MAX=105;
int n;
string str,arr[MAX],tmp;



int main() {
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin >> str >> n;
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<n; i++){
        if(arr[i]==str){
            cout << "YES" << endl;
            return 0;
        }
        for(int j=0; j<n; j++){
            tmp="";
            tmp+=arr[i][1];
            tmp+=arr[j][0];
            if(tmp==str){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
