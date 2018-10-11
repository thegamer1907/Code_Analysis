#include <bits/stdc++.h>
using namespace std;
long long int ceater(long long int n,long long int z){
    long long int h=0,o,l=n;
    while (n>0){
   //     cout << min(n,z) << endl;
        h+=min(n,z);
        n-=min(n,z);
        o=n/10;
        n-=o;

    }
   // cout << h << "fghnj" << endl;
    if (h>=(l+1)/2){
        return 1;
    }
    return 0;
}
int main(){
    long long int n;
    cin >> n;
    long long int mid,l=0,r;
    r=1000000LL *1000000*1000000;

    while(r-l>1){
        mid=(r+l)/2;
        ////cout << mid << endl;
        if (ceater(n,mid)==1){
            r=mid;
        }
        else{
            l=mid;
            //cout << mid << endl;
        }
    }
    //cout << ceater(n,3) << endl;
    cout << r;


}

