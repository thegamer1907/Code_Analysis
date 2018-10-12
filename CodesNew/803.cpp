#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 int p,e,sum=0; cin>>p>>e; string arr[p],arr2[e];
 for(int i=0;i<p;i++)cin>>arr[i];
 for(int i=0;i<e;i++)cin>>arr2[i];
 if(p>e)cout<<"YES"<<endl;
 else if(e>p)cout<<"NO"<<endl;
 else
 {for(int i=0;i<p;i++)
   {if(binary_search(arr2,arr2+e,arr[i]))sum++; }
    if(sum==0){cout<<"NO"<<endl; }
    else if(sum==p){if(p%2==0)cout<<"NO"<<endl; else cout<<"YES"<<endl;  }
    else if(sum%2==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

 }

return 0 ;
}
