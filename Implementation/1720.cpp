#include <iostream>
typedef long long ll;
using namespace std;

void compute(){
    string s;
    cin>>s;
    int t = 0, co_z = 0, co_o = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '0'){
            ++co_z;
            co_o = 0;
        }
        if(co_z >= 7){
            cout<<"YES\n";
            return;
        }
        if(s[i] == '1'){
            ++co_o;
            co_z = 0;
        }
        if(co_o >= 7){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    compute();
    return 0;
}
