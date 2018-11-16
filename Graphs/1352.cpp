#include <bits/stdc++.h>
#define ll     long long int
#define ull   unsigned long long int
#define mod 1000000007
using namespace std;
 
 ll btod(string v){
     ll sum=0;
     for(int i=0;i<v.size();i++){
         sum+=pow(2,i)*v[i];
     }
     return sum;
 }
  string dtob(ll a){
     string v;
     while(a){
         v.push_back(a%2+'0');
         a/=2;
     }
     return v;
 }
ll findone(string a){
    ll c=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='1')c++;
    }
    return c;
}
ll maxi(ll a,ll b){
    return b>a?b:a;
}
ll mini(ll a,ll b){
    return b<a?b:a;
}
 
 ll find(ll a,vector<ll> &parent){
 //    cout<<parent[a];
 vector<ll> parenti = parent;
     while(parenti[a]!=a){
         parenti[a]=parenti[parenti[a]];
         a=parenti[a];
     }
     return a;
 }
 ll findi(ll a,vector<ll>&parenti){
    // ll c=0; vector<ll> parenti = parent;
     while(parenti[a]!=a){
          a=parenti[a];//c++;
         parenti[a]=parenti[parenti[a]];
        
     }
    // c++;
     return (a);
 }
void unioni(ll x,ll y,vector<ll>&parent){
    ll x1=find(x,parent);
    ll y1=find(y,parent);
  // cout<<x<<" "<<y<<" "<<x1<<" "<<y<<endl;  
 
    
    if(x1<y1){
        parent[y1]=x1;
    }
    else{
        parent[x1]=y1;
    }
    
    
    
}
 void f(vector<vector<ll>> &v,vector<bool>&visited,ll s){
     queue<ll> q;
     q.push(s);
     while(!q.empty()){
         ll top=q.front();
         q.pop();
         for(int i=0;i<v[top].size();i++){
             if(!visited[v[top][i]]){
                 visited[v[top][i]]=true;
                 q.push(v[top][i]);
             }
         }
         visited[top]=true;
        // cout<<top<<" ";
     }
 }

 void f1(vector<vector<ll>> &v,vector<bool>&visited,ll s){
     queue<ll> q;
     q.push(s);
     while(!q.empty()){
         ll top=q.front();
         q.pop();
         for(int i=0;i<v[top].size();i++){
             if(!visited[v[top][i]]){
                 visited[v[top][i]]=true;
                 q.push(v[top][i]);
             }
         }
          //visited[top]=true;
         
     }
     visited[s]=false;
 }
 bool isblocked(ll a,vector<ll>&parent,vector<bool>&flag){
     vector<ll> parenti = parent;
     while(parenti[a]!=a){
         parenti[a]=parenti[parenti[a]];
         a=parenti[a];
     }
     if(flag[a])return true;
     return false;
 }
 
long long int power(long long int x,   long long int y,   long long int m)
{
    if (y == 0)
        return 1;
    long long int p = power(x, y/2, m) % m;
    p = (p * p) % m;
 
    return (y%2 == 0)? p : (x * p) % m;
}
 
 
long long int gcd(long long int a, long long int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
ll modInverse(long long int a, long long int m)
{
     
         
             long long int t =  (power(a, m-2, m))%1000000009;
           
            return t;
    
}
int main(){
/* ll n,m;cin>>n>>m;
 ll s;cin>>s;vector<vector<ll>> v(n);s--;
 while(m--){
     ll a,b;cin>>a>>b;
     v[a-1].push_back(b-1);
 }
 vector<bool> visited(n,false);
 vector<ll> node; 
 
       
         
             f(v,visited,s);
             
         
    
     
 
 for(int i=0;i<n;i++)
 if(!visited[i])node.push_back(i);
    
 vector<bool> visited2(node.size(),false);
// for(int i=0;i<node.size();i++)cout<<node[i]<<" ";


 for(int i=0;i<node.size();i++){
    
     ll q =  f1(v,visited2,node[i]);
     
 }
 //for(int i=0;i<n;i++)cout<<visited[i]<<" ";
 ll ans=0;
 for(int i=0;i<node.size();i++){
     cout<<visited[node[i]]<<" "<<node[i]+1<<endl;
 }
 for(int i=0;i<node.size();i++){
     if(!visited[node[i]])ans++;
 }
 
 cout<<ans;*/

int n;cin>>n;
int t;cin>>t;
vector<int>v(n-1);
for(int i=0;i<n-1;i++){
    cin>>v[i];
}
 
for(int i=0;i<t;i+=v[i]){
    if(i+v[i]==t-1){
         cout<<"YES"<<endl;
         return 0;
    }
}
  
 cout<<"NO"<<endl;




 
}