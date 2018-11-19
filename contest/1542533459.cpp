#include <bits/stdc++.h>

using namespace std;

int h,m,s,t1,t2;

int main(){

    cin >> h >> m >> s >> t1 >> t2;

    if (t1 > t2)
        swap(t1,t2);

    if (h >= t1 and t2 > h){

        if (s < t1*5){
            cout << "NO\n";
            return 0;
        }
        if (s > t2 * 5){
            cout << "NO\n";
            return 0;
        }
        if (m < t1*5){
            cout << "NO\n";
            return 0;
        }
        if (m >= t2 * 5){
            cout << "NO\n";
            return 0;
        }

    }
    else{
        if (s > t1*5 and s < t2*5){
            cout << "NO\n";
            return 0;
        }

        if (m >= t1*5 and m < t2*5){
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";




return 0;
}