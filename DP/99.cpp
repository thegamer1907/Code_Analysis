#include<iostream>
#include<algorithm>
using namespace std;
int b[100];
int g[100];
int main(){
    int n, m, h=0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> b[i];
    cin >> m;
    for(int i=0; i<m; i++)
        cin >> g[i];
    sort(b,b+n);
    sort(g,g+m);
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            if (abs(b[i] - g[j]) <= 1){
                h++;
                g[j] = 1000;
                break;
            }
    cout << h << endl;
}
