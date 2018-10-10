#include<bits/stdc++.h>



using namespace std;
typedef long long ll;


int main()
{
    int k;
    while(cin>>k){
        k--;
        ll tot=19;
        while(k){
            tot+=9;
            ll tmp=tot;
            int g=0;
            while(tmp){
                g+=tmp%10;
                tmp/=10;
            }
            if(g==10) k--;
        }
        cout<<tot<<endl;
    }

    return 0;
}
