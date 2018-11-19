#include<bits/stdc++.h>
using namespace std;
#define eb emplace_back
#define print(c,n) for(int i=0;i<n;i++) cout << c[i] << " ";
#define MOD 1000000007
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    std::ios::sync_with_stdio(false);
    string str;
    cin >> str;
    string s2=str;
    reverse(begin(s2),end(s2));
    char a = str[0];
    char b = str[1];
    int n;
    cin >> n ;
    bool ans=false,a1=false,a2=false;
    while(n--){
        string s1;
        cin >> s1;
        if(s1==s2 || s1==str) ans=true;
        if(s1[1]==a) a1=true;
        if(s1[0]==b) a2=true;
    }
    if(ans) cout << "YES";
    else{
        if(a1 && a2) cout << "YES";
        else cout << "NO";
    }
    return 0;
}