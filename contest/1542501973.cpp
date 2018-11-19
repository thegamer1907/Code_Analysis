#include<bits/stdc++.h>
using namespace std;
#define con continue
#define bk break
#define LL long long
#define db double
#define pt cout<<'\n';
#define ms(a, b) memset((a), (b), sizeof(a))
#define mp make_pair
#define endl '\n'
LL inf=2147483647;const long long ll =9223372036854775807,ninf=1000000000;const double eps = 1e-6; const long long nll =1000000000000000000;
#define sz size()
#define len(X) strlen(X)
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ULL unsigned long long
#define de cout<<"test"<<endl;
#define st system("pause");
#define F first
#define S second
int vis[100005]={};
int main()
{
    int a,b;
    while(cin>>a>>b){
        
        for(int i=0;i<a;i++){
            
            int ans=0;
            for(int j=0;j<b;j++){
                    int x;
            cin>>x;
                ans+=(1<<j)*x;
            }
            vis[ans]=1;
        }
        for(int i=0;i<16;i++){
            for(int j=0;j<16;j++){
                if(vis[i]&&vis[j]&&!(i&j)){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        
        cout<<"NO"<<endl;
        
        
        
        
        
        
        
    }
    
    return 0;
}
