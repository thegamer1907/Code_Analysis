#include <bits/stdc++.h>

using namespace std;


int n,k, a[111111][5] ,lt[5], kt[100], co[10];

int kiemtra(int vt, int gt){
    int x=gt;
    int b[5];
    for (int i=0;i<5;++i) b[i]=0;
    int d = 0;
    while (x!=0){
        b[d] = x%2;
        x = x/2;
        ++d;
    }
    /*cout<<gt<<endl;
    for (int i=k-1;i>=0;--i)
        cout<<b[i];
    cout<<endl;
    for (int i=k-1;i>=0;--i)
        cout<<a[vt][k-1-i];
    cout<<endl;*/
    for (int i=k-1;i>=0;--i)
        if (b[i]==1 && a[vt][i]==1) return 0;
    return 1;

}
int main(){
    cin>>n>>k;
    lt[0]=1;
    for (int i=1;i<=4;++i)
        lt[i]=lt[i-1]*2;
    for (int i=1;i<=n;++i){
        int luu=0;
        for (int j=0;j<k;++j){
            cin>>a[i][j];
            luu = luu + a[i][j]*lt[j];
        }
        kt[luu] = 1;
        //cout<<luu<<endl;

    }

    for (int i=1;i<=n;++i){
        for (int j=0;j<= lt[k]-1;++j)
            if (kt[j]==1)
            if( kiemtra(i,j) ==1 ){
                cout<<"YES";
                return 0;
            }
    }
    cout<<"NO";

}
