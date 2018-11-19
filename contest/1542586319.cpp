#include<bits/stdc++.h>
using namespace std;
#define gearchange() cin.tie(0),cerr.tie(0),ios_base::sync_with_stdio(0)
#define ll long long int
#define MOD 1000000007LL
#define SIZE 10001

int main() {
    gearchange();
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector< int > vec1,vec2;

    bool yes = false;

    while(n--){
        string a;
        cin>>a;
        if(a==s){ yes = true; }
        if(a[0]==s[1]){ vec1.push_back(n); }
        if(a[1]==s[0]){ vec2.push_back(n); }
    }

    if(yes){
        cout<<"YES";
        return 0;
    }

    if(vec1.size() and vec2.size()){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
