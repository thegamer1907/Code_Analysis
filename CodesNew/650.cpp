/* Things that you own, End up owning you!

    author    : ayushgupta1997
    Created On: 09/06/2018

Do not go gentle into that good night.....
Old age should burn and rave at close of day
 Rage, rage against the dying of the light
 though wise men at their end Know dark is right
Because their words has forked No lightening they
Do not go gentle into that good night
  Rage, rage against the dying of the light.....

*/


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define rep(i, a, b)             for(int i = a; i < b; i++)
#define REP(i, a, b)             for(int i = a; i <= b; i++)
#define sc(n)                    scanf("%d",&n)
#define pb                       push_back
#define fi                       first
#define se                       second
#define mp                       make_pair
#define all(v)                   (v).begin(),(v).end()
#define rall(v)                  (v).rbegin(),(v),rend()
#define MAX 100005


typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef double ld;


int main()  {
    set<string> s1,s2;
    int n,m;
    cin >> n >> m;
    string temp;
    rep(i,0,n) {
        cin >> temp;
        s1.insert(temp);
    }
    int k=0;
    rep(i,0,m) {
        cin >> temp;
        s2.insert(temp);
        if(s1.find(temp)!=s1.end()) k++;
    }
    int s1size = s1.size()-k;
    int s2size = s2.size()-k;
    if(s1size > s2size ) {
        cout << "YES";
    }
    else if(s1size == s2size) {
        if(k%2==1)
        cout << "YES";
        else
        cout << "NO";

    }
    else
        cout << "NO";
    return 0;
}

