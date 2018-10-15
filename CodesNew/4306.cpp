#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 500001;
string arr[MAXN];
int lens[MAXN];

int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n,cur,cur2,ind;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        lens[i] = (int)arr[i].length();
    }
    for (int i=n-2;i>=0;i--){
        cur = lens[i];
        cur2 = lens[i+1];
        for (int j=0;j<cur;j++){
            if (j>=cur2){
                ind = j;
                break;
            }
            if (arr[i][j]<arr[i+1][j]){
                ind = cur;
                break;
            }
            if (arr[i][j]>arr[i+1][j]){
                ind = j;
                break;
            }
        }
        lens[i] = ind;
    }
    for (int i=0;i<n;i++){
        cout << arr[i].substr(0,lens[i]) << "\n";
    }
}