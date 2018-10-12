// vectors and queue
#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
using namespace std;

int main(){

    ll n;
    cin>>n;
    ll array[n];
    ll max = LONG_MIN;
    for(ll i=0;i<n;i++){
        cin>>array[i];
        if(max < array[i])
        max = array[i];
    }
    ll mid;
    ll l = 1,r = (max+1);
    while(l < r){
        //cout<<"hi"<<endl;
        mid = (l + r)/2;
        ll ans = mid;
        bool flag = false;
        ll l1;
        ll nc = (ans - 1)/n;
        ll temp;
        //cout<<ans<<" Checking..."<<nc<<" Cycles.."<<endl;
        for(ll i=0;i<n;i++){
            l1 = ans;
            temp = array[i];

            temp = temp - (nc*n);
            l1 = l1 - (nc*n) ;
            if(i < l1){
                temp = temp - i;
                if(temp <= 0){
                    flag = true;
                }
            }
            if(nc >= 1){
                temp += n;
                temp = temp - i;
                if(temp <= 0){
                    flag = true;
                }
            }


            /*if(nc >= 1){
                temp = temp - (nc*n);
                l1 = l1 - (nc*n) ;
            if(i < (l1)){
                //cout<<"hey1"<<endl;
                temp = temp - i;
                //if(i==(l1-1))
                //temp++;
                if(temp <= 0){
                    flag = true;
                    //break;
                }
            }
            else{
                if(temp<=0){
                    flag = true;
                    //break;
                }
            }
            }
            else{
                if(i < (l1)){
                //cout<<temp<<"--";
                //cout<<"hey2"<<endl;
                temp = temp - i;
                //if(i==(l1-1))
                //temp++;
                //cout<<temp<<endl;
                if(temp <= 0){
                    flag = true;
                    //break;
                }
            }
        }*/
        }

        //cout<<flag<<endl;
        if(flag){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    //cout<<r<<endl;
    if(l % n==0){
        cout<<n<<endl;
    }
    else{
        cout<<(l%n)<<endl;
    }

    return 0;
}
