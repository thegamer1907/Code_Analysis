#include<bits/stdc++.h>
#define int long long  
using namespace std;
int n,c;
 
 
set<int> divisors(int n)
{
    set <int> x;
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
              x.insert(i);  //printf("%d ", i);
 
            else // Otherwise print both
            { x.insert(i); x.insert(n/i);      }// printf("%d %d ", i, n/i);
        }
    }
    x.insert(n);
    return x;
}
vector<int> ans;
 
bool fff(int c,int dn, int i)
{
    int y = dn - i;
    
    //cout<< i <<endl;
    
    set<int> x = divisors(c);
    set<int> :: iterator itr;
    itr = x.lower_bound(y);
    //cout<< *itr <<endl;
    
    if( itr == x.end() ) --itr;
    else  if(x.size() == 1)
    {
     if(*itr != y) return false;   
    }
    else if(itr == x.begin())
    {
     if(*itr != y) return false;
    }
    else if(*itr != y) --itr;
    int e = c/ *itr;
    int z = *itr + i;
    ans.push_back(z);
    //cout<<1111<<endl;
    if(i == 0) 
    {
        //cout<<i<<endl;
        if(e==1) return true; else return false;
    }
    return  fff( e, z, i-1 );
    
    
}
 
 
 
#undef int 
int main()
{
#define int long long 
	int t=1;
   // cin>>t;
    while(t--)
    {
       string p; cin>>p;
        int n;
        cin>>n;
        int i; string a="",b;    int f=0,h=0,g=0;
        for(i=0;i<n;i++) 
        {
            cin>>b;  a=a+b+b; if(b==p) h=1;
        }
     
        for(i=0;i<a.size()-1;i+=2) 
        {
            if( a[i+1] == p[0] ) f=1;
            if( a[i] == p[1] ) g=1;
        }
        
        if(f*g + h) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
        
return 0;
    
} 