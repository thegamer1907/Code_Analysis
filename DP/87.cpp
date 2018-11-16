#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
    cin >> m;
    int b[m];
    for(int j=0;j<m;j++){
        cin >> b[j];
    }
    sort(b,b+m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(abs(a[i]-b[j])<=1){
                cnt++;
                  b[j]=1000;
                   break;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}


