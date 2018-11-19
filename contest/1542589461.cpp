#include<bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   int n;
   cin>>n;
   string a[n+1];
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        for(int k=1;k<=n;k++){
            string r;
            r=a[i]+a[j]+a[k];
            int cnt=r.find(s);
            if(cnt>=0 && cnt<=r.size()){
                cout<<"YES";
                return 0;
            }
        }
    }
   }

        cout<<"NO";
}
