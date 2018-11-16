#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=1;
   string a;
   cin>>a;
   for(int i=0;i<a.size();i++){
    if(a[i]==a[i+1] ) k++;
    else {
            if(k>=7) {cout<<"YES"; return 0;}
             else k=1;
     }
   }
   cout<<"NO";
}

