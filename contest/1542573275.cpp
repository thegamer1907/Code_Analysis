#include<bits/stdc++.h>
using namespace std;
    main(){
    string t;
    cin >> t;
    int n;
    cin >> n;
    string a[n+1];

    for(int i  = 0 ; i < n;i++){
        cin >> a[i];
        if(a[i] == t)return cout <<"YES",0;
        }
     for(int i = 0 ; i < n;i++){
        for(int j = 0 ; j < n;j++){
            if(a[i][0] == t[1] and a[j][1] == t[0])return cout <<"YES",0;
        }
     }
     cout <<"NO";



    }
