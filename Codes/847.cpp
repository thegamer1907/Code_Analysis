#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    while(true){
        if(k%2){
            cout<<1<<endl;
            return 0;
        }
        if(k==((long long)1<<n)){
            cout<<n+1<<endl;
            return 0;
        }
        else if(k>((long long)1<<n)) k-=((long long)1<<(n+1))/2;
        else n--;
    }
}
