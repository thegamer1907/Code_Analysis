#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
//#define MAX_N 100000 + 100
using namespace std;


const int INF = 1e9 + 1;
typedef long long ll;
#define int ll
typedef pair<int,int> pii;
const int maxn = 1000 + 10;
string seq[maxn];
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    int n;
    cin >> n;
    for (int i = 0;i < n;i++){
        cin >> seq[i];
        if (seq[i] == str){
            cout << "YES"<<endl;
            return 0;
        }
    }
    for (int  i = 0;i < n;i++){
        for (int j = 0;j <n;j++){
            //if (i j) continue;
            if (seq[i][1] == str[0] && seq[j][0] == str[1]){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;


    return 0;
}
