#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define pii pair<int,int>
#define pcc pair<char,char>
#define repp(i,s,f) for(int i=(s);i<=(f);i++)
#define repn(i,s,f) for(int i=(s);i>=(f);i--)
#define MAX 100000+5
#define fi first
#define se second
#define mod 1
#define MIN 1
ll del[MAX],num[MAX];
ll n,k,ls,e,x;
int m;
int main(){
    cin>>n>>m>>x;
    repp(i,0,m-1)
        cin>>num[i];
    ls=x;
    k=0,e=1;
    repp(i,0,m-1){
        if(num[i]-del[k]<=ls){
            del[e]++;
        }else if( del[e] == del[k] ){
            ls=num[i]-del[k]+(x-((num[i]-del[k])%x))%x;
            i--;
        }else{
            k++;
            e++;
            i--;
            del[e]+=del[k];
        }

    }
    cout<<e<<endl;
    return 0;
}