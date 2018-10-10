#include <bits/stdc++.h>

#define ll long long
using namespace std;


int main() {


    cin.tie(0);
    cin.sync_with_stdio(0);


    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int up[n][m];

    for(int j=0;j<m;j++){
        up[0][j]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]>=a[i-1][j]){
                up[i][j]=up[i-1][j]+1;
            }else{
                up[i][j]=1;
            }
        }
    }

    int mx[n]={0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mx[i]=max(up[i][j],mx[i]);
        }
    }


    int q,l,r;
    cin>>q;;
    for(int i=0;i<q;i++){
        cin>>l>>r;
        int d=r-l+1;
        r--;
        if(mx[r]>=d){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }




    return 0;
}
