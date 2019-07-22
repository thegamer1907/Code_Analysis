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
    long long comp=k,counter=1;
    int res=0;
    while(p[0]>comp){
        comp+=k;
        if(comp>n){
            comp=n;
            break;
        }
    }
    for(int i=1;i<m;++i){
        //cout<<p[i]<<" "<<comp<<" "<<counter<<" "<<res<<endl;
        if(p[i]>comp){
            ++res;
            comp+=counter;
            while(p[i]>comp){
                comp+=k;
                if(comp>n){
                    comp=n;
                    break;
                }
            }
            counter=0;
        }
        ++counter;
    }
    cout<<res+1<<endl;
return 0;
}