#include<bits/stdc++.h>

using namespace std;
vector<int>data;
int main(){
    int n; cin >> n;

    int l[1005][1005];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>> l[i][j];
        }
    }
    int ans1 =0;
    int ans2 =0;
    int ans3 =0;

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
             if(j==0) ans1 += l[i][j] ;
             if(j==1) ans2 += l[i][j] ;
             if(j==2) ans3 += l[i][j] ;
        }
       //cout << endl;
    }
    if(ans1 == 0 && ans2 == 0 && ans3==0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
