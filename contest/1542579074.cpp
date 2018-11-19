#include <bits/stdc++.h>
using namespace std;

int n;
string pa,a[169];
int main(){
    cin>>pa;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
        if (a[i]==pa){
            cout<<"YES";
            return 0;
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            if (a[j][1]==pa[0] && a[i][0]==pa[1]){
                cout<<"YES";
                return 0;
            }
            if (a[j][0]==pa[1] && a[i][1]==pa[0]){
                cout<<"YES";return 0;
            }
        }
    }
    cout<<"NO";
}
