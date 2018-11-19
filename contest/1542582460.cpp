#include<bits/stdc++.h>
using namespace std ;
#define removeDuplicate(a) sort(a.begin(), a.end()); a.resize(distance(a.begin(), unique(a.begin(), a.end())));

const double eps = 1e-9; 

double a[5];
double t1, t2;

int main(){
	#define file "in"
    //freopen(file".inp", "r", stdin); freopen(file".out", "w", stdout);

    cin >> a[1] >> a[2] >> a[3] >> t1 >> t2;

    a[1] *= 5; 
    if(a[1] == 60) a[1] = 0;
    t1 *= 5; 
    if(t1 == 60) t1 = 0;
    t2 *= 5; 
    if(t2 == 60) t2 = 0;
    if(abs(a[2]) > eps || abs(a[3]) > eps) a[1] += 0.5;
    if(abs(a[3]) > 0) a[2] += 0.5;

    if(t1 > t2) swap(t1 , t2);

    bool ok = true, okrev = true;

    for (int i = 1; i <= 3; ++i) {
        if(a[i] >= t1 && a[i] <= t2) ok = false;
        if(a[i] <= t1 || a[i] >= t2) okrev = false;
    }

    if (ok || okrev) printf("YES");
    else printf("NO");

    return 0 ;
}
