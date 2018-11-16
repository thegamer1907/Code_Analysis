#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    int n,t;
    while(cin>>n>>t){
        int a[30010];
        int ans = 1;
        for(int i = 1;i < n;i++) cin>>a[i];
        for(int i = 1;i < n;){
            ans += a[i];
            i = ans;
            if(i > t){
                cout<<"NO"<<endl;
                return 0;
            }
            if(i==t){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    return 0;
}
