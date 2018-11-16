#include "bits/stdc++.h"
#include<sstream>
#include<string>
#define pi 3.141592653589793238462
#define limit 100005
#define mod 1000000007
typedef unsigned long long ulli;
typedef long long int lli;
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli i,j,k,n,m,q,e,count=0;
    map<lli,lli>mp1;
    map<lli,lli>mp2;

    cin>>n;
     lli arr1[n];

    for(i=0;i<n;i++){
        cin>>arr1[i];
        mp1[arr1[i]]++;}

    cin>>m;
     lli arr2[m];

    for(i=0;i<m;i++){
        cin>>arr2[i];
        mp2[arr2[i]]++;}

        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
        

    for(i=0;i<n;i++)
    {
        if(mp2[arr1[i]-1]>0)
        {
            count++;
            mp2[arr1[i]-1]--;
        }

        else if(mp2[arr1[i]]>0)
        {
            count++;
            mp2[arr1[i]]--;
        }

        else if(mp2[arr1[i]+1]>0)
        {
            count++;
            mp2[arr1[i]+1]--;
        }
    }
    cout<<count<<endl;

}
