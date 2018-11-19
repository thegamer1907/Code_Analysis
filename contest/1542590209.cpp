
#include <map>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
long long n,k;
long long MOD = 1000000007;
string a[200];
int main() {
    string s;
    cin >> s >> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==s){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            string x="";
            x+=a[i][1];
            x+=a[j][0];
            if(x==s){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }

    cout<<"NO";
    return 0;
}