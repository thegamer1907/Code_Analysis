#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << n/2 << "\n";
    if(n%2)
        cout << "3 ";
    else
        cout << "2 ";
    for(int i=0;i<n/2-1;i++)
        cout << "2 ";

    return 0;
}
