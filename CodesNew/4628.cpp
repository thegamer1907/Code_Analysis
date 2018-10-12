/*
    By Milind Lalwani - BahuMajaNu
       NIT - Tiruchirappalli
    Interned at Morgan Stanley
        "These Violent Delights Have Violent Ends"
                - Dolores Abernathy, WestWorld
 
*/
#include <bits/stdc++.h>
#define ll long long
#define ull long long
#define p 1000000007
#define test int t; cin >> t; while(t--)
#define For(i,l,n) for(i=l;i<n;i++)
#define Rof(i,l,n) for(i=l;i>n;i--)
#define pb push_back
#define vi vector <int>
#define mp make_pair
#define vp vector < pair <int,int> > 
#define um unordered_map
#define vb vector <bool>
#define di deque <int>
#define dp deque < pair <int,int> >
//                    BFS
/* 
vb vis(n+1,true);
    For(i,1,n+1){
        if(vis[i]){
            queue <int> q;
            q.push(i);
            int s;
            while(!q.empty()){
                s=q.front();
                q.pop();
                if(vis[s]){
                    vis[s]=false;        
                    for(auto j:g[s]){
                        if(vis[j])
                            q.push(j);
                    }
                }
            }
        }
    }
*/
using namespace std;
ll i,j,k,l,m,n,a,b,ans=0;


/*void dfs(vector < vi > &g,vector <bool> &vis,stack <int> &st,int s){
    if(vis[s]){
        //cout << s << " ";
        vis[s]=false;
        for(auto i:g[s])
            if(vis[i])
                dfs(g,vis,st,i);
        st.push(s);
    }   
}*/

# define MAX 5003 
vector  < vector <ll> >  triangle(MAX + 1,vector <ll> (MAX + 1,0));
 
void makeTriangle() {
    ll i, j;
 
    // initialize the first row
    triangle[0][0] = 1; // C(0, 0) = 1
 
    for(i = 1; i < MAX; i++) {
        triangle[i][0] = 1; // C(i, 0) = 1
        for(j = 1; j <= i; j++) {
            triangle[i][j] = (triangle[i - 1][j - 1] + triangle[i - 1][j])%p;
        }
    }
}
 
ll C(ll n, ll r) {
    return triangle[n][r];
}

int gcd(int a, int b)
{
    if (a == 0 || b == 0)
       return 0;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

vector < vi > seq(2005,vi(2005,-1));

int fun(int a,int b){
    if(seq[a][b]==-1){
        if(b==1){
            seq[a][b]=1;
            return 1;
        }
        seq[a][b]=0;
        for(int i=a;i<=n;i+=a){
            seq[a][b]+=fun(i,b-1);
            seq[a][b]%=p;
        }
    }
    return seq[a][b];
}

int main(){
    std::ios_base::sync_with_stdio(0);
    cin >> n ;
    vi s(n);
    For(i,0,n){
        cin >> s[i];
    }
    sort(s.begin(),s.end());
    //for(int i=0;i<n;i++)
    //    cout << s[i] << " ";
    //cout << endl;
    for(i=n/2-((n+1)&1),j=n-1;i>=0 && j>n/2-((n+1)&1);j--,i--){
        while(s[i]*2>s[j])
            i--;
        if(i<0)
            break;
        //cout << i << " ";
    }
    //cout << j;
    cout << n-(n-1-j);
    return 0; 
}