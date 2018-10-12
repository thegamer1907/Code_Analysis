#include<bits/stdc++.h>
    using namespace std;
    #define F first
    #define S second
    #define PB push_back
    #define REP(i,a,b) for (int i = a; i <b; i++)
    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;
    #define llp 1000000007
    
            
    int main()
    {   ios::sync_with_stdio(false);
        int n;
        int m;
        vi a;
        cin>>n>>m;
        a.resize(n);
        REP(i,0,n){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int maxans=a[n-1]+m;
        int i=0;
        while(m>0 && i!=n-1 ){
            if((m-(a[n-1]-a[i]))>=0){
            	m=m-(a[n-1]-a[i]);
                a[i]=a[n-1];
                
            }
            else{
                a[i]=a[i]+m;
                m=0;                
            }
            
            
            
            i++;
        }
        if(m>0){
            int i=0;
            while(m!=0){
                a[i]++;
                i=(i+1)%(n);
                m--;
            }
        }
        sort(a.begin(),a.end());
        int minans=a[n-1];
        cout<<minans<<" "<<maxans<<"\n";
        return 0;
    }