#include <iostream>

using namespace std;

int main()
{
    int n,k,a[110];
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(a[1]==0)
        cout<<"0"<<endl;
    else{
        int ans;
        if(a[k]==0){
            for(int i=1;i<=k;i++){
                if(a[i]==0&&a[i-1]!=0){
                    cout<<i-1<<endl;
                    break;
                }
            }
        }
        else{
            if(a[n]==a[k])
                cout<<n<<endl;
            else{
                for(int i=k+1;i<=n;i++){
                    if(a[k]>a[i]){
                        ans=i-1;
                        break;
                    }
                }
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
