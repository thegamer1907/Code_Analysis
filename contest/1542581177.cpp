#include<bits/stdc++.h>
using namespace std;
#define vi vector < long long >
#define pii pair < int , int >
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long
#define llu unsigned long long
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define all(x) x.begin(),x.end()
#define mset(x,v) memset(x, v, sizeof(x))
#define sz(x) (int)x.size()


int main()
{
      ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int n;
    cin>>n;
    //int a[26]={0},b[26]={0};
    int a=0,b=0;
    
     int flag=1;
    
    for(int i=0;i<n;i++)
    {
      string s1;
        cin>>s1;
        if(s==s1)
        {
          flag=0;
        }
       if(s[0]==s1[1])
        {
            a=1;
            //flag=1;
           
        }
            
         if(s[1]==s1[0])
        {
           
            b=1;
           
            
        }
        
    }
   if((a==1 && b==1) || flag==0)
   cout<<"YES";
   else
   cout<<"NO";
   
   
 
    return 0;
}
