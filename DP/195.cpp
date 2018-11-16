#include<iostream>
#include<algorithm>
using namespace std;
int b[110];
int g[110];
int main(){
    int n, m, ans=0;
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
                ans++;
                g[j] = 110;
                break;
            }
    cout<<ans<<endl;
}
