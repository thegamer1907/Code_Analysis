#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(false)

using namespace std;

  int ar[500005],cnt;

    int main()
    {
        ios;
        int n,j;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);

        for(int i=0,j=n/2;i<n/2;i++){
            for( ;j<n;j++){
                if(ar[i]*2<=ar[j]){
                    cnt++;
                    j++;
                    break;

                }
            }
            if(j==n)break;
        }
        cout<<n-cnt<<endl;
    }


