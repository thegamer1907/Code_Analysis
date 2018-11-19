#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define pb push_back
#define mp make_pair
#define pf printf
#define sf scanf
#define mem(n,i) memset((n),i,sizeof (n))
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<vector<ll> > vvll;
typedef vector<vector<pll> > vvp;
typedef map<int,int> mi;
typedef map<ll,ll> mll;
typedef map< string , ll> ms;
typedef queue<ll> qll;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    int n,k;
    cin>>n>>k;
    bool can = 1;


    if(k==1){
        map<bool,int> mp;
        for (int j = 0; j < n; ++j) {
            for (int i = 0; i < k; ++i) {
                bool a;
                cin>>a;
                can&=a;
            }
            if(!can){
                cout<<"YES\n";
                return 0;
            }
        }
        cout<<"NO\n";
        return 0;
    }
    else if(k==2){
        map<pair<bool,bool>,int> mp;
        for (int j = 0; j < n; ++j) {
            bool a,b;
            cin>>a>>b;
            can = a||b;
            mp[{a,b}]++;
            if(!can){
                cout<<"YES\n";
                return 0;
            }
        }
        if(mp[{0,1}]>0&&mp[{1,0}]>0){
            cout<<"YES\n";
            return 0;
        }
        puts("NO");
        return 0;
    }
    else if(k==3){
        map<pair<pair<bool,bool>,bool>,int> mp;
        for (int j = 0; j < n; ++j) {
            bool a,b,c;
            cin>>a>>b>>c;
            mp[{{a,b},c}]++;

            can = a||b||c;
            if(!can) {
                cout << "YES\n";
                return 0;
            }
        }
        string w[100001];

        if(mp[{{0,1},0}]&&mp[{{1,0},0}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},1}]&&mp[{{1,0},0}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,1},0}]&&mp[{{1,0},0}]){
            puts("YES");
            return 0;
        }
        if(mp[{{0,1},0}]&&mp[{{0,0},1}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},1}]&&mp[{{1,0},0}]){
            puts("YES");
            return 0;
        }
        if(mp[{{0,0},1}]&&mp[{{0,1},0}]){
            puts("YES");
            return 0;
        }
        if(mp[{{0,1},1}]&&mp[{{1,0},0}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,1},1}]&&mp[{{1,0},0}]){
            puts("YES");
            return 0;
        }
        if(mp[{{1,0},1}]&&mp[{{0,1},0}]){
            puts("YES");
            return 0;
        }
        if(mp[{{1,1},0}]&&mp[{{0,0},1}]){
            puts("YES");
            return 0;
        }
        puts("NO");
        return 0;
    }
    else{
        map<pair<pair<bool,bool>,pair<bool,bool>>,int> mp;
        for (int j = 0; j < n; ++j) {
            bool a,b,c,d;
            cin>>a>>b>>c>>d;
            mp[{{a,b},{c,d}}]++;
            can = a||b||c||d;
            if(!can){
                cout<<"YES\n";
                return 0;
            }
        }
        if(mp[{{0,0},{0,1}}]&&mp[{{0,0},{1,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},{0,1}}]&&mp[{{0,1},{0,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},{0,1}}]&&mp[{{1,0},{0,0}}]){
            puts("YES");
            return 0;
        }


        if(mp[{{0,0},{1,0}}]&&mp[{{0,1},{0,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},{1,0}}]&&mp[{{1,0},{0,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,1},{0,0}}]&&mp[{{1,0},{0,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},{1,1}}]&&mp[{{1,1},{0,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,1},{0,1}}]&&mp[{{1,0},{1,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{1,0},{0,1}}]&&mp[{{0,1},{1,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,1},{1,1}}]&&mp[{{1,0},{0,0}}]){
            puts("YES");
            return 0;
        }
        if(mp[{{1,0},{1,1}}]&&mp[{{0,1},{0,0}}]){
            puts("YES");
            return 0;
        }
        if(mp[{{1,1},{0,1}}]&&mp[{{0,0},{1,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{1,1},{1,0}}]&&mp[{{0,0},{0,1}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},{0,1}}]&&mp[{{1,1},{0,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},{0,1}}]&&mp[{{1,0},{1,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},{0,1}}]&&mp[{{0,1},{1,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},{1,0}}]&&mp[{{1,1},{0,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},{1,0}}]&&mp[{{1,0},{0,1}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,0},{1,0}}]&&mp[{{0,1},{0,1}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,1},{0,0}}]&&mp[{{1,0},{1,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,1},{0,0}}]&&mp[{{1,0},{0,1}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{0,1},{0,0}}]&&mp[{{0,0},{1,1}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{1,0},{0,0}}]&&mp[{{0,1},{1,0}}]){
            puts("YES");
            return 0;
        }

        if(mp[{{1,0},{0,0}}]&&mp[{{0,1},{0,1}}]){
            puts("YES");
            return 0;
        }
        if(mp[{{1,0},{0,0}}]&&mp[{{0,0},{1,1}}]){
            puts("YES");
            return 0;
        }


        cout<<"NO\n";
        return 0;
    }

#ifndef ONLINE_JUDGE
    cerr << "Time elapsed: " << clock() / 1000 << " ms" << endl;
#endif
}
