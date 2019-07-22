#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>
#define pb push_back
#define fi first
#define se second
#define mp make_pair
using namespace std;

typedef long long ll;
 
int funz(int a, int b){
    if(a%b==0)return a/b-1;
    else return a/b;
}
int main(){
    ll n,m,k;
    ll v[100100];
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)cin>>v[i];
    ll ind=0;
    ll cont=0;
    while(ind<m-1){
        int j=cont;
        for(int i=ind+1;i<m;i++){
            if(funz(v[i]-ind,k)!=funz(v[ind]-ind,k)){
                ind=i;
                cont++;
                break;
            }
        }
        
    }
    cont++;
    cout<<cont;
    
	
}