#include<bits/stdc++.h>

using namespace std;

long long int a[100000],b[100000];

int main()
{
    long long int n,m,i=0,x,j=0,c=0;
    cin>>n;
    int u = n;

    while(u--){
        cin>>a[i];
      i++;
    }
   cin>>m;
   int v = m;
  // m=0;
    while(v--){
        cin>>b[j];
       j++;
    }
    sort(a,a+n);
    sort(b,b+m);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if((abs(a[i]-b[j])==0) || (abs(a[i]-b[j])==1)){
                c++;

                 //cout<<a[i]<<" "<<b[j]<<endl;
                b[j]=-1;
                break;
            }
        }
        a[i]=-1;
    }
    cout<<c<<endl;
    return 0;

}
