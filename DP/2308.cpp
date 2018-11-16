#include<bits/stdc++.h>
using namespace std;

const int N = 100100;
int angka[N];

int main() {
    ios_base::sync_with_stdio(false);
    int n, m, a[N], l[N], beda[N];

    memset(angka,0,sizeof(angka));
    cin >> n >> m;
    for(int i=1;i<=n;i++) {
        cin >> a[i];
    }

    int counter=0;
    for(int i=n;i>0;i--) {
        if(!angka[a[i]]) {
            angka[a[i]]=1;
            counter++;
        }
        beda[i]=counter;
    }

    for(int i=1;i<=m;i++) {
        cin >> l[i];
        cout << beda[l[i]] << '\n';
    }




    return 0;
}