#include <iostream>
#include<vector>
#include<map>
#include<string>
#include<set>
#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<fstream>
using namespace std;

int main()
{
int x;
cin>>x;
int arr[x];
int ma=0;
int one=0;
int two=0;

for(int i=0;i<x;i++)
{
    cin>>arr[i];
}
if(x==1&&arr[0]==0){
    cout<<1;
    return 0;
}

bool b=false;
for(int i=0;i<x;i++)
{
    if(arr[i]==1){
        one++;
    }
    for(int j=i;j<x;j++){
        int three=0;
        if(arr[j]==0){
        two++;
        b=true;
        }
     for(int k=j+1;k<x;k++)
     {
         if(arr[k]==1){
            three++;
         }
     }
     ma=max(ma,one+two+three);
    }
two=0;
}
if(!b){
    cout<<ma-1;
}
else
cout<<ma;
return 0;
}
