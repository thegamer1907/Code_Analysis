#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int prime[10000008];
int arr[1000005];
int ans[10000008];
int pre[10000008];
int cnt[10000008];
void sieve()
{
    int i,j;
    prime[0]=1;prime[1]=1;
    for(i=2;i*i<10000005;++i){
        if(prime[i]==0){
        //   v[i].push_back(i);
            for(j=2*i;j<10000005;j+=i){
                prime[j]=1;
             //   v[j].push_back(i);
            }
        }
    }
}


int main()
{   //cout<<"n";
    sieve();
    //cout<<"m";
    int i,j,n,m;
   /* for(i=2;i<13;++i){
        for(j=0;j< v[i].size();++j)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }*/
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>n;
    for(i=0;i<n;++i){
        cin>>arr[i];
        cnt[arr[i]]++;
    }
    for(i=2;i<10000001;i++){
    	if(prime[i])
    		continue ;
    	for(j=i;j<10000001;j+=i){
    			ans[i]+=cnt[j] ;
    		}
    	}
    for(i=2;i<10000002;++i){
        pre[i]=ans[i]+pre[i-1];
    }
    cin>>m;
    int l,r;
    while(m--){
        cin>>l>>r;
        r  = min(r,10000000) ; l =min(l,10000000);
        cout<< pre[r]-pre[l-1]<<endl;
    }
return 0;}
