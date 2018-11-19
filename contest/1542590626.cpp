//####################################################################
//#####In the Name Of Allah,the Most Gracious,the Most Merciful.######
//####################################################################

#include <bits/stdc++.h>
using namespace std;

#define maxn            100010
#define esp             1e-6
#define mod             1000000007
#define ll              long long
#define inf             1061109567
#define ff  first
#define ss  second

typedef pair<int, int> ii;

int Set(int N, int pos) {return N = N | (1 << pos);}
int reset(int N, int pos) {return N = N & ~ (1 << pos);}
bool check(ll N, int pos) {return (bool) (N & (1LL << pos));}

string s, r;
int n;
vector<string> v;


int main()
{
        cin >> s >> n;

        for(int i = 1;i <= n;i ++){
                cin >> r;
                v.push_back(r);
        }

        bool flag = false;
        for(int i = 0; i < n;i ++){
                if(v[i] == s) flag = true;
        }

        if(!flag){

                bool b1 = false;
                bool b2 = false;
                for(int i = 0; i < n;i ++){
                        if(v[i][1] == s[0]) b1 = true;
                }
                for(int i = 0; i < n;i ++){
                        if(v[i][0] == s[1]) b2 = true;
                }
                if(b1 && b2) flag = true;
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";

        return 0;
}

