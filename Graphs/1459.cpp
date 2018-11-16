/*
__mennat khoday ra azz o va jall ke taatash mojebe ghorbat ast o be shokr andarash mazide nemat.
__har nafasi ke foro miravad momedde hayatast o chon bar miayad mofarrahe zat.
__pas dar har nafasi 2 nemat mojod ast o bar har nematy shokry vajeb.

__az dast o zabane ke barayad ?
__kaz ohdeye shokrash be dar ayad !

*/
#include<bits/stdc++.h>
#define pb push_back
#define adelkhah main
//#define int long long
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
int adelkhah()
{
    int n,t;cin >> n >> t;
    int id = 1;
    for(int i = 1; i < n; i++){
        int y;
        cin >> y;
        if(id == i){
            id += y;
            if(id == t){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}



