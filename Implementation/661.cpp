#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

#define tests int t;cin>>t;while(t--)

#define array(A,n) long long int A[n+1];for(int i=1;i<=n;i++)cin>>A[i]; 
#define print(A,n) for(int i=1;i<=n;i++)cout<<A[i]<<" ";cout<<endl;
#define matrix(A,n,m) long long int A[n+1][m+1];for(int i=1;i<=n;i++){for(int j=1;j<=m;j++)cin>>A[i][j];}

#define vit(a,it) vector<long long int>a ; vector<long long int>::iterator it ;  
#define sit(a,it) set<long long int>a ;set<long long int>::iterator it;

#define yes "yes"
#define no "no"
#define YES "YES"
#define NO "NO"
#define Yes "Yes"
#define No "No"
#define lint long long int 

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);


long long int  MIN(long long int a,long long int b)
{if(a>b)return b; else return a;}
 
long long int  MAX(long long int a,long long int b)
{if(a>b)return a; else return b;}

long long int  MOD(long long int x)
{if(x>=0)return x;else return-x;}
 

int main()
{      
			fast ;
     //  freopen("input.txt" , "r" , stdin); freopen("output.txt" , "w" , stdout);

       lint n, k;
       cin>>n>>k;
       lint c=0;
       array(A,n);
       for(int i=1;i<=n;i++)
       {
            if(A[i]>0 && A[i]>=A[k])
                c++;
       }
       
       cout<<c<<endl;


            
}
  

        
            

 