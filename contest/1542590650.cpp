#include<bits/stdc++.h>
using namespace std;
string t[10001] , e , s ;
long long i , j , n;
int  main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>e;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>t[i];
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
                s ="";
            s += t[i][1];
            s += t[j][0];

            if(t[i] == e || t[j] == e || s == e){
                cout <<"YES";
                return 0 ;
            }
        }
    }
    cout <<"NO";
}
