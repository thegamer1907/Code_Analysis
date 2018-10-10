#include <bits/stdc++.h>

using namespace std;


int main() {
    ios::sync_with_stdio(0);

    //input's

    int n;
    double I;
    cin >> n >> I;

    vector <double> a;
    double aux;
    for (int i=0; i<n; i++) {
        cin >> aux;
        a.push_back(aux);
    }

    sort(a.begin(), a.end());


    double dmax=0;
    for (int i=0; i<a.size()-1; i++) {
        dmax=max(dmax, a[i+1]-a[i]);
    }

    double dmax1=max(a[0], dmax/2);
    double dmax2=max(I-a[n-1], dmax/2);
    dmax=max(dmax1,dmax2);

    cout << fixed << setprecision(10);
    cout << dmax << endl;

    return 0;
}

// 1538789390987
