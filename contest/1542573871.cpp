#include<bits/stdc++.h>
using namespace std;
    string a[123456];
    main(){
    string t;
    cin >> t;
    int n;
    cin >> n;
    bool ok = 0;
    for(int i = 0 ; i < n;i++){
        cin >> a[i];
        if(a[i] == t)ok = 1;

    }
    if(ok)return cout <<"YES",0;
    string tt="";
    string gg="";
    int pos1 = 0;
    int pos2 = 0;
    for(int i = 0 ; i < n;i++){
        tt += a[i][0];
        gg += a[i][1];


    }
    // tt bir
    // gg ikki;
    for(int i = t.size()-1 ; i >=0;i--){
        if(i % 2 == 1 and tt.find(t[i]) != -1)continue;
        if(i % 2 == 0 and gg.find(t[i]) != -1)continue;
        else{
            cout <<"NO";
            return 0;
        }
    }
    cout <<"YES";



    }
