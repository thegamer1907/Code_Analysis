#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL)

const int N = 4007;
const int inf = 1e18+7;
const int mod = 1e9+7;
void pa(int a[],int n){
    for (int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

signed main() {
    fio;
    int n,m; cin>>n;
    int a[n];
    for (int i=0; i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for (int i=0; i<m; i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    
    int i=0,j=0,ans=0;
    while (i<n and j<m)
    {
        if (abs(a[i]-b[j])<=1)
        {
            ans++;
            i++;j++;
            //cout<<i<<j<<endl;
        }
        else 
        {
            
            if (a[i]>b[j])
            {
                j++;
              //              cout<<"@"<<i<<j<<endl;

            }
            else if (b[j]>a[i])
            {
                i++;
                //            cout<<"#"<<i<<j<<endl;

            }
        }
    }
    cout<<ans;   
    return 0;
}