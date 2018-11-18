
#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i>=b;i--)
#define loopm(i,a,b,step) for(int i=a;i<b;i+=step)
#define loopbm(i,a,b,step) for(int i=a;i>=b;i-=step)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define INF 1000000007
#define MOD 1000000007
#define BINF 1000000000000000001
#define int long long int
#define double long double

using namespace std;


#undef int
int main()
{
#define int long long int
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int grid[n][k];
        loop(i,0,n)
        {
            loop(j,0,k) cin>>grid[i][j];
        }
        
       map<vector<int>,bool>x;
       loop(i,0,n)
       {
           vector<int>y;
           loop(j,0,k) y.push_back(grid[i][j]);
           
           x[y]=true;
       }
       
       vector<vector<int> >possibilities;
       for(auto it=x.begin();it!=x.end();it++) possibilities.push_back(it->first);
       
       int N=possibilities.size();
       bool flag=false;
       for(int mask=0;mask<(1<<N);mask++)
       {
           if(mask==0) continue;
           int cnt[k];
           fill(cnt,cnt+k,0);
           int selected=0;
           loop(i,0,N)
           {
               if(mask&(1<<i))
               {
                   selected++;
                   loop(j,0,possibilities[i].size())
                   {
                       cnt[j]+=possibilities[i][j];
                   }
               }
           }
           bool flag1=true;
           loop(i,0,k)
           {
               if(2*cnt[i]>selected) flag1=false;
           }
           if(flag1) flag=true;
       }
       
       if(flag) cout<<"YES";
       else cout<<"NO";
    }
    return 0;
}