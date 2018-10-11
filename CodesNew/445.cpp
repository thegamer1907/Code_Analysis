#include <iostream>
#include "string"
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int n,z;
unsigned long long int sum(int s,int e,vector <unsigned long long int>x)
{
    if(s==0)
        return x[e];
    if(e> n-1)
        return 0;
    return x[e]-x[s-1];
}
int main()
{
    unsigned long long int t;
    cin>>n>>t;
    vector <int> a;
    unsigned long long int num=0;
    for (int i=0;i<n;i++)
    {
        cin>>z;
        a.push_back(z);
    }
    if(n==1){
        if( a[0]<= t )
            t=1;
        else
            t=0;
        cout<<t;
        return 0;
    }
    vector <unsigned long long int> s(a.size(),0);
    for (int i=0;i<n;i++){
          s[i]+=(i==0)?a[i]:a[i]+s[i-1];
     }
    unsigned int x;
    unsigned long long int su;
    std::vector<unsigned long long int>::iterator low;
    low=upper_bound ( s.begin() , s.end() , t);
    x=((low- s.begin()));
    if(x>num){
            num=x;
        }
     for (int i=1;i<n-1;i++){
        low=upper_bound ( s.begin()+i , s.end() , t+s[i-1]);
        x=((low- s.begin())-i);
        if(x>num){
            num=x;
        }
     }
     cout<<num;
}
