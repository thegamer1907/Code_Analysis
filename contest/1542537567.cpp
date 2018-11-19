//in the name of allah
#include<bits/stdc++.h>

#define len length()
#define forr(n) for(int i = 0;i<n;i++)
#define ll long long
#define ull unsigned long long
#define vecin(type,vec,n) forr(n){type a;cin >> a;vec.push_back(a);}
#define multin(type,mul,n) forr(n){type motegh;cin >> motegh;mul.insert(motegh);}
#define arrout(arr,n) forr(n){cout << arr[i] << " ";}
#define mapfor(type1,type2,con) for(map<type1,type2>::iterator it = con.begin();it!=con.end();++it)
#define setfor(type,con) for(set<type>::iterator it = con.begin();it!=con.end();++it)
#define arrin(arr,n) for(int i = 0;i<n;++i){cin >> arr[i];}
#define N 5163
#define MAX_N 2000010
const ull MOD = 1e9 + 7;

using namespace std;

ll stol(string s)
{
    ll number = 0;
    for(int i = 0;i<s.length();++i)
        number+=(s[i]-'0')*powl(10,s.length()-1 - i);
    return number;
}

string to_string(ll number)
{
    string s = "";
    while(number>0)
    {
        string l = "";
        l+=(number%10)+'0';
        s = l + s;
        number/=10;
    }
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    string s;
    cin >> s;
    int n;
    cin >> n;
    string pass[n];
    bool res = false;
    set<char> chars1;
    set<char> chars2;
    for(int i = 0;i<n;++i)
    {
        cin >> pass[i];
        string l = pass[i];
        reverse(l.begin(),l.end());
        if (pass[i] == s or s == l)
            res = true;
        chars1.insert(pass[i][0]);
        chars2.insert(pass[i][1]);
    }
    if (res)
        return cout << "YES",0;
    if (chars1.count(s[1]) and chars2.count(s[0]))
        return cout << "YES",0;
    cout << "NO";
    return 0;
}
