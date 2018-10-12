#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;
const int N = 300009;
typedef long long int ll;

int main(){
    int n;
    cin>>n;
    string s[n+1];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=n-1;i>0;i--){
        if(s[i]<s[i-1]){
            for(int j=0;j<s[i-1].length();j++){
                if(s[i][j]<s[i-1][j])
                s[i-1].resize(j);
            }

        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }


    return 0;
}
