#include<iostream>
#define endl '\n'
using namespace std;
const int MAXN = (int) 1e5+3;
long long p[MAXN];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,k;
    int m;
    cin>>n>>m>>k;
    for(int i=0;i<m;++i){
        cin>>p[i];
    }
    long long comp;
    int res=0,i=0,counter=0;
    while(i<m){
        comp=counter+((p[i]-counter-1)/k+1)*k;
        while(i<m and p[i]<=comp){
            ++i;
            ++counter;
        }
        ++res;
    }
    cout<<res<<endl;
return 0;
}