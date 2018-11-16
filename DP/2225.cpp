#include <iostream>

using namespace std;
const int maxn = 1000*100 + 10;
int a[maxn],b[maxn],c[maxn],t[maxn];
int main()
{
    int n , m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0;i < m; i++){
        cin >> c[i];
    }
    b[n-1] = 1;
    t[a[n-1]]=1;
    for(int i = n - 2; i >= 0; i--){
            if(t[a[i]]==0){
                b[i] = b[i+1] + 1;
            }
            else{
                b[i] = b[i+1];
            }
            t[a[i]]++;
    }
    for(int i = 0; i < m; i++){
        cout<<b[c[i]-1]<<endl;
    }
    return 0;
}
