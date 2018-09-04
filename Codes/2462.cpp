#include <bits/stdc++.h>

using namespace std;


map<int,int> Hash;

const int N = 1e7+15;


int cc[N];


bool vis[N];

#define ll long long

ll prime[N];


int main(){
    int n,i,x;

    cin>>n;
    
    for(i=0;i<n;++i){
        scanf("%d",&x);
        ++cc[x];
    }

    int j,k;

    
    for(i=2;i<N;++i){

        if(!vis[i]){

            for(j= i;j<N;j+=i){

                vis[j]= 1;

                prime[i]+= cc[j];
            }
        }
    }
    int q,l,r;
    cin>>q;

    for(i=1;i<N;++i)
        prime[i]= prime[i-1] + prime[i];
    
    while(q--){
        scanf("%d%d",&l,&r);


        if(l>1e7){
            printf("0\n");continue;

        }
        else{

            r= min(r,(int)1e7);
            
            cout<<prime[r]-prime[l-1]<<endl;
        }
    }
}
