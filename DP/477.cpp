#include <bits/stdc++.h>
using namespace std;
int a[101], b[101];
int main(){
    int n, m;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    cin >> m;
    for(int i=0; i<m; i++)
        cin >> b[i];
    sort(b, b+m);
    //cout << endl << endl;
    //for(int i=0; i<n; i++)
    //    cout << a[i] << " ";
    //cout << endl << endl;
    //for(int i=0; i<m; i++)
    //    cout << b[i] << " ";
    //cout << endl << endl;
    int dem=0, i=0, j=0;
    while(j<m&&i<n){
        if(a[i]==b[j]||a[i]==b[j]+1||a[i]==b[j]-1){
            //cout << i << " " << j << endl;
            dem++;
            i++;
            j++;
        }
        if(a[i]-b[j]>1)
            j++;
        if(b[j]-a[i]>1)
            i++;
    }
    cout << dem;
}
