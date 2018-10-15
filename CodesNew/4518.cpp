#include <bits/stdc++.h>
/*
 **
 *** Your best is not enough
 **
 */
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define finish(x) return cout << x << endl, 0;
#define pb push_back
#define Compiler_Beso ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)        memset(v, d, sizeof(v))
#define endl '\n'
#define pi pair<int,int>
typedef long long ll;
typedef unsigned long long ull;

void fre(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
}



ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


int FixMod(int s,int k){return (s%k+k)%k;}
double dic(pair<int,int>a,pair<int,int>b)
{return (sqrt( (a.first-b.first)*(a.first-b.first) +  (a.second-b.second)* (a.second-b.second) ));}

enum dir       { DOWN = 0, UP, RIGHT, LEFT, DOWN_RIGHT, DOWN_LEFT, UP_RIGHT, UP_LEFT };
int  dir_r[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
int  dir_c[] = { 0, 0, 1, -1, 1, -1, 1, -1 };

//Posibles moves for the Knight
int recorrerA[8]= {-2,-1,1,2,2,1,-1,-2};
int recorrerB[8]= {1,2,2,1,-1,-2,-2,-1};


int main(){
    
    Compiler_Beso
    
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(all(v));
    int r=n-1,ans=0;
    for(int i=n/2-1;i>=0;i--){
        if(v[r]>=v[i]*2){
            r--;
            ++ans;
        }
    }
    cout<<n-ans;
  
    return 0;
    
}





