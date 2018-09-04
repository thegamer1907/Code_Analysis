/* *******************************
    -----------------------------
   | copyrights with l0gic_b0mb  |
    -----------------------------
   ******************************* */

#include<bits/stdc++.h>
#define MOD 1000000007
#define llint long long int
#define max(a,b) (a>=b?a:b)
#define min(a,b) (a<=b?a:b)
using namespace std;

llint N,M,K;

llint count_smaller(llint num)
{
    llint ans=0;
    for(int i=1;i<=N;i++)
    {
        llint to_find=num;
        if(to_find%i==0)
            to_find--;
        ans+=min(M,(to_find/i));
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>N>>M>>K;
    llint low=1,high=N*M,mid,sure=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        //cout<<mid<<" "<<count_smaller(mid)<<endl;
        if(count_smaller(mid)<K)
        {
            sure=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<sure<<endl;
    return 0;
}
