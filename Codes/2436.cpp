#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    long long n; cin >> n;
    vector<long long> x(10000005,0);
    long long t=0;
    for(long long i=0; i<n; i++) {
        cin >> t;
        x[t]++;
    }
    vector<long long> sieve(10000005,1);
    sieve[0]=0;
    sieve[1]=0;
    for(long long i = 2; i<10000005; i++) {
        if(sieve[i]) {
            for(long long j = 2*i; j<10000005; j+=i)
                sieve[j]=0;
            sieve[i]=sieve[i-1];
            for(int j = i; j<10000005; j+=i)
                sieve[i]+=x[j];
        }
        else
            sieve[i]=sieve[i-1];
    }
   // for(int i = 0; i<20; i++) {cout << sieve[i] << " ";} cout << endl;
    long long a;
    cin >> a;
    long long l,r;
    for(long long i=0; i<a; i++) {
        cin >> l >> r;
        l=min(l,10000004ll);
        r=min(r,10000004ll);
        cout << sieve[r]-sieve[l-1] << "\n";
    }
}
