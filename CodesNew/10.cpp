#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <bits/stdc++.h>
#include <stdlib.h>
 
#define tests int t;cin>>t;while(t--)
#define array(A,n) long long int A[n];for(int i=0;i<n;i++)cin>>A[i];
#define array2(A,B,n,m) long long int A[n] , B[m];for(int i=0;i<n;i++)cin>>A[i]; for(int i=0;i<m;i++)cin>>B[i];
#define print(A,n) for(int i=0;i<n;i++)cout<<A[i]<<" ";cout<<endl;
#define matrix(A,n,m) long long int A[n][m];for(int i=0;i<n;i++){for(int j=0;j<m;j++)cin>>A[i][j];}
#define vit(a) vector<long long int>::iterator a
#define vrit(a) vector<long long int>::reverse_iterator a
#define sit(a) set<long long int>::iterator a
#define vec(a) vector<long long int > a
#define set(a) set<long long int > a 

#define yes "yes"
#define no "no"
#define YES "YES"
#define NO "NO"
#define Yes "Yes"
#define No "No"
long long int  MIN(long long int a,long long int b)
{if(a>b)return b; else return a;}
 
long long int  MAX(long long int a,long long int b)
{if(a>b)return a; else return b;}
long long int  MOD(long long int x)
{if(x>=0)return x;else return-x;}

 
 
using namespace std;
int main() {long long int l , n ;
            cin>>n>>l;
            long double A[n];
            for(int i=0;i<n;i++)
            {
                cin>>A[i];
            }
            
            long double ll , rr , mm , max = 0 ;
            
            sort(A,A+n);
            
            for(int i=0;i<n;i++)
            {
                if(i==0)
                {
                    long double dd = A[i]-0;
                    if(dd>max)
                        max=dd;
                }
                else { long double dd = A[i]-A[i-1];
                        dd/=2.0;
                      if(dd>max)
                          max=dd;
                       
                     }
                
            }
            long double dd = l-A[n-1];
            if(dd>max)
                max=dd;
            cout<<setprecision(20)<<max<<endl;
            
    return 0 ;
}
    
 