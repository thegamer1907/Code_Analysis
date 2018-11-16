#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long ul;

int main(){
    ll N,t;
    string s;

    cin >> N >> t >> s;


    while(t--){
        for(int i=0;i<N;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                s.replace(i,1,"G");
                s.replace(i+1,1,"B");
                i++;
            }
        }
    }

    cout << s;



    return 0;


}