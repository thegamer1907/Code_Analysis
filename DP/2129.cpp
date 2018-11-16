#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){

    long long n, m; cin >> n >> m;
    vector<long long> a = {0};
    long long b[n+1];
    b[n]=1;
    for(long long i = 0; i<n; i++){
        long long t;
        cin >> t;
        a.push_back(t);
    }
    set<long long> s = {a[n]};
    for(long long j = 0; j<n-1; j++){
        if(s.count(a[n-j-1])){
            b[n - 1 - j]=b[n - j];
        }
        else{
            b[n - 1 - j]=b[n - j]+1;
            s.insert(a[n-j-1]);
        }
    }

    for(long long p = 0; p<m; p++){
        long long bb; cin >> bb;
        cout<< b[bb]<< endl;
    }
}
