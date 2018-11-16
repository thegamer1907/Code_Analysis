#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const int inf = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int kol_vo, a, b;
    cin >> kol_vo >> a >> b;
    vector<int> v;
    for(int c=0; c<kol_vo; c++){
        v.push_back(c+1);
    }
    set<int> dop;
    int now = 0;
    while(v.size() > 2){
        now++;
        //cout << v.size() << endl;
        for(int c=0; c<v.size(); c+=2){
            //cout << c << " ";
            if(v[c] == a && v[c+1] == b || v[c] == b && v[c+1] == a){
                cout << now;
                return 0;
            }
            else {
                if(v[c] == a || v[c] == b)dop.insert(v[c+1]);
                if(v[c+1] == a || v[c+1] == b)dop.insert(v[c]);
                if(v[c] != a && v[c] != b && v[c+1] != a && v[c+1] != b)dop.insert(v[c]);

            }
        }
        //cout << dop.size() << " ";
        //cout << endl;
        for(auto j : dop){
            for(int i=0; i<v.size(); i++)
                if(v[i] == j)v.erase(v.begin()+i);
        }
        dop.clear();
    }
    cout <<"Final!";
    return 0;
}
