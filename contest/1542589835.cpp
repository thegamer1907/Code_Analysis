#include <iostream>
#include <bits/stdc++.h>
#define fr first
#define sc second
#define mp make_pair
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef set<ll> sll;


int main()
{
    string s,x;
    cin >> s;
    int n,ok = 0,ok2 = 0,ok3 = 0,ok4 = 0,ok1 = 0;
    cin >> n;
    string a[n + 10];
    for(int i=0; i<n; i++)
    {
        cin >> a[i],x += a[i];
        if(a[i] == s)ok = true;
        if(a[i][0] == s[1] && a[i][1] == s[0])ok = true;
        if(a[i][1] == s[0] )ok1 = true;
        if(a[i][0] == s[1])ok2 = true;
    }
    if(ok)cout << "YES";
    else{
        if((ok1 && ok2) )cout << "YES";
        else cout << "NO";
    }


    return 0;
}
