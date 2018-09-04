#include <bits/stdc++.h>
using namespace std;
bool ok(int x){
    int cur=0;
    while(x){
        cur+=x%10;
        x/=10;
    }
    if(cur==10) return true;
    return false;
}
int main()
{
        int n;
        cin>>n;
        for(int i=0;;i++){
            if(ok(i)){
                n--;
                if(n==0){
                    cout<<i<<endl;
                    return 0;
                }
            }
        }

        return 0;
}