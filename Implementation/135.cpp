#include <bits/stdc++.h>

using namespace std;

const long long inf = 1e15;

int main(){
   /* ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/

    long long n,a,b;
    cin >> n >> a >> b;

    long long cnt = 0;

    long long x = n;

    while ( x > 1){
        x /= 2;
        cnt++;
    }

    vector < long long > q(n);

    long long id = 1;
    for ( int i = 0; i < n; i++){
        q[i] = id;
        id++;
    }
    int num = 1;


    while ( q.size() > 1){
        vector < long long > p;
        sort(q.begin(), q.end());
        for ( int i = 0; i < q.size(); i+=2){
            int v = q[i];
            int u = q[i + 1];
            if ( v == a && u == b || v == b && u == a){
                if (q.size() == 2){
                    cout << "Final!";
                } else {
                    cout << num;
                }
                return 0;
            }
            if ( v == a || v == b){
                p.push_back(v);
            } else {
                p.push_back(u);
            }
        }
        q = p;
        num++;
    }



}
