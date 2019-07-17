#include <bits/stdc++.h>
using namespace std;
vector<long long> vs;
int main(){
    long long n, m, k, num, klast;
    cin >> n >> m >> k;
    for(int i= 0; i<m; i++){
        cin >> num;
        vs.push_back(num);
    }
    klast = ((vs[0]-1)/k)*k + k;
    int res = 1;
    //cout << klast << " "  << endl;
    for(int i= 0; i<m; i++){
        //cout << klast << " ";
        if(vs[i]<=klast){}
        else{
            klast = ((((vs[i]-(1+i))/k)*k)+k)+i;
            res++;
        }
    }
    cout << res << endl;
    return 0;
}