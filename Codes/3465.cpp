#include<bits/stdc++.h>
#define li long long
#define MOD 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    li nn;
    cin>>nn;
    li low=1,high=nn;
    li ans;
    while(low<=high){
        li mid=(low+high)/2;
        li co=0;
        li n=nn;
        while(1){
            if(n-mid>=0)
            {
                co+=mid;
                n-=mid;
            }
            else{
                co+=n;
                break;
            }
    //        cout<<n<<endl;
            n-=(n/10);
    
        }
        n=nn;

        if(n%2==1){
            if(co>=n/2+1){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        else{
            if(co>=n/2){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
    }
    cout<<ans<<endl;

}
