#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int ms = 1e5+10;
ll ele[ms];

ll getNextPage(ll curPage, ll k, int i){
    ll dif = ele[i] - curPage;
    ll qtPul = (dif+k-1)/k;
    return curPage + k*qtPul;
}

int main(){
    ll n, m, k;
    cin>>n>>m>>k;
    for(int i=0; i<m; i++) cin>>ele[i];
    ll maxPage = k, i = 0, qtEle = 0, resp = 0;
    while(i<m){
        if(ele[i]>maxPage){
            if(qtEle==0){
                maxPage = getNextPage(maxPage, k, i); 
            }else{
                maxPage = maxPage+qtEle;
                resp++;
            }
            qtEle = 0;
        }else{
            qtEle++;
            i++;
        }
    }
    if(qtEle>0) resp++;
    cout<<resp<<endl;
    
    return 0;
}