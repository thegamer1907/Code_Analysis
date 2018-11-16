#include <bits/stdc++.h>

using namespace std;

int boys[105], girls[105], cnt;
bool pom[105];

int main()
{
    int n, m;
    double a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> boys[i];
    }
    sort(boys, boys+n);
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> girls[i];
    }
    sort(girls, girls+m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(!pom[j]){
                a = boys[i] - girls[j];
                if(abs(a) <= 1){
                    pom[j] = true;
                    cnt++;
                    break;
                }
            }else{
                continue;
            }
        }
    }
    cout << cnt;
}
