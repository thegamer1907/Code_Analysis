#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int N=2e3+10;

string a[N];


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n+m;i++){
        cin>>a[i];
    }
    sort(a,a+n+m);
    int common=0;
    for(int i=0;i<n+m-1;i++){
        if(a[i]==a[i+1])
            common++;
    }
    n-=common;
    m-=common;
    for(int it=0;;it++){
        if(it%2==0){
            if(common>0) common--;
            else{
                if(n>0) n--;
                else{
                    puts("NO");
                    break;
                }
            }
        }
        else{
            if(common>0) common--;
            else{
                if(m>0) m--;
                else{
                    puts("YES");
                    break;
                }
            }
        }
    }

    return 0;
}