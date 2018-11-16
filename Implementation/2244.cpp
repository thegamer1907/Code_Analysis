/* Author: Mayank Sharma
email: mayank04111998@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
#define TEST int T;\
cin>>T;
#define FORI(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define ci pair<char,int>
#define pb push_back
typedef  long long int ull;

ull getSum(ull k,ull w){
    return ((w)*(2*k+(w-1)*k))/2;
}
int main(int argc, char const *argv[]){


    ull k,n,w;
    cin>>k>>n>>w;
    ull sum1 = getSum(k,w);
    sum1<=n?cout<<0:cout<<sum1-n;
    return 0;
}
