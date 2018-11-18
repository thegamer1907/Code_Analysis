/*#include <bits/stdc++.h>

using namespace std;

int n;
int b,B;

int main(){

    string A;
    cin >> A;

    cin >> n;

    for (int i = 0 ; i < n ; i++){
        string a;
        cin >> a;
        if ((a[0] == A[0] and A[1] == a[1]) or (A[0] == a[1] and A[1] == a[0])){
            cout << "YES\n";
            return 0;
        }

        if (A[1] == a[0])
            b++;
        if (A[0] == a[1])
        B++;
    }

    if (b != 0 and B!=0)
        cout << "YES\n";
    else
        cout << "NO\n";




return 0;

}
*/



#include <bits/stdc++.h>

using namespace std;

set <pair <int, pair <int, pair <int, int> > > > s;
int n,k;
struct T{
    int a,b,c,d;
};

vector <T> x;

int main(){

    cin >> n >> k;
    for (int i = 0 ; i < n ; i++){
        int a[15];
        for (int j = 0 ; j < k ; j++){
            cin >> a[j];
        }
        s.insert({a[0],{a[1],{a[2],a[3]}}});
    }

        for (auto pos = s.begin() ; pos != s.end() ; pos++){
                int uno = 0 , dos = 0 , tres = 0, cero = 0;
                pair <int, pair <int, pair <int,int> > > po = *pos;
                if (po.first == 1)
                    cero++;
                if ( po.second.first == 1)
                    uno++;
                if (po.second.second.first == 1)
                    dos++;
                if (po.second.second.second == 1)
                    tres++;
                    x.push_back({cero, uno, dos, tres});
        }

        for (int i = 0 ; i < x.size() ; i++){
            for (int j = 0 ; j < x.size() ; j++){
                if (x[i].a + x[j].a != 2 and x[i].b + x[j].b != 2 and x[i].c + x[j].c != 2 and x[i].d + x[j].d != 2){
                    cout << "YES\n";
                    return 0;
                }
            }
        }

    cout << "NO\n";





return 0;

}
