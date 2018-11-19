#include <bits/stdc++.h>

using namespace std;

vector<string> P;
string a;
int N;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> a;

    cin >> N;

    int h = 0;

    while (h < N){
        string g;
        cin >> g;
        if (g == a){
            cout << "YES";
            return 0;
        }
        P.push_back(g);
        h++;
    }

    for (int i = 0; i < N; i++){
        if (P[i][1] == a[0]){
            for (int j = 0; j < N; j++){
                if (P[j][0] == a[1]){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }

    cout << "NO";

    return 0;
}
