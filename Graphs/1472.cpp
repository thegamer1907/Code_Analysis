#include <bits/stdc++.h>
using namespace std;


int main(){
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);


    int n,m;

    cin>>n>>m;

    vector<int>a(n);

    for(int i=0;i<n;i++){
            cin>>a[i];
    }

   // sort(a.begin(),a.end());

   // int k=0;

   int i=0;

   m--;

    while (i<m){
       i=i+a[i];
    }

    if (i==m){
    cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
    }
