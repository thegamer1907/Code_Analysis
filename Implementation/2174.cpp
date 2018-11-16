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
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
int adelkhah()
{
    int n;
    cin >> n;
    int A = 0;
    int B = 0;
    int C = 0;
    for(int i = 0; i < n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        A += a;
        B += b;
        C += c;
    }
    if(A == 0 && B == 0 && C == 0){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}

