#include <bits/stdc++.h>
#define a first
#define b second
#define oo 100000007
typedef long long ll;
using namespace std;


const int N = 110;
string s , x[N];
int n;

int main()
{

    //freopen("in.txt","r" ,stdin);
    //freopen("output.txt" ,"w",stdout);
    ios::sync_with_stdio(false);
    cin >> s >> n ;
    for(int i = 0 ; i < n ;++i){
        cin >> x[i];
        if(x[i] == s)
            return cout << "Yes" << endl ,0;
    }
    bool f = 0;
    for(int i = 0 ; i < n ; ++i){
        string t = x[i];
        if(t[1] == s[0]){
            f = 1;
            break;
        }
    }
    //cout << f << endl;
    if(f){
     for(int i = 0 ; i < n ; ++i){
        string t = x[i];
        if(t[0] == s[1]){
            return cout << "YES" << endl ,0;

        }
    }
    }
    cout << "NO"  << endl;
    return 0;
}
