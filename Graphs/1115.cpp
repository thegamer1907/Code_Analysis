#include <bits/stdc++.h>

using namespace std;

int n, t, a[30018], visited[30018];

int main()
{
    cin >> n >> t;
    for(int i = 1; i < n;i++){
        cin >> a[i];
    }
    int j = 1;
    while(j <= n){
        if(j == t){
            cout << "YES";
            return 0;
        }
        if(visited[j]){
            cout << "NO";
            return 0;
        }
        visited[j] = true;
        j += a[j];
    }
    cout << "NO";
    return 0;
}
