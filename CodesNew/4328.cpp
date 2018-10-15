#include <bits/stdc++.h>
#include<math.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const long MOD = (long)1e9 + 7;
ll const MAXN = 500001;


string a[MAXN];
ll si[MAXN];

int main(){
    ll n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        si[i] = a[i].size();
    }
    int f;
    for(int i = n - 2; i >= 0; i--){
        f = 0;
        //cout << si[i]<< " " << si[i+1] << endl;
        for(int j = 1; j < min(si[i], si[i + 1]); j++){
            if(a[i][j] > a[i + 1][j]){
                f = -1;
                si[i] = j;
                break;
            } else if(a[i][j] < a[i + 1][j]) {
                f = 1;
                break;
            }
        }
        //cout << f << endl;
        if(f == 0){
            //cout << i;
            if(si[i] > si[i+1])si[i] = si[i+1];
        }
    }
    for(int i = 0;i < n; i++){
        for(int j = 0; j < si[i]; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}



/*

           _____           ______              ______        _______________           _______________
          /     \         |      \            /      |      /               \         /               \
         /       \        |       \          /       |     /                 \       /                 \
        /   ___   \       |   |\   \        /   /|   |    /    ___________    \     /    ___________    \
       /   /   \   \      |   | \   \      /   / |   |   |    /           \    |   |    /           \    |
      /   /_____\   \     |   |  \   \    /   /  |   |   |   |            |    |   |   |            |    |
     /               \    |   |   \   \  /   /   |   |   |    \___________/    |   |    \___________/    |
    /    _________    \   |   |    \   \/   /    |   |    \                   /     \                   /
   /    /         \    \  |   |     \      /     |   |     \                 /       \                 /
  /____/           \____\ |___|      \____/      |___|      \_______________/         \_______________/

*/
