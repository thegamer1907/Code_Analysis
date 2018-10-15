#include<bits/stdc++.h>
using namespace std;
const int maxn = 5e5+5;
int n;
string s[maxn];
char a;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>s[i];
    }
    for(int i=n-2;i>=0;i--){
        if(s[i]<=s[i+1]) continue;
        else{
            int len1=s[i].length();
            int len2=s[i+1].length();
            for(int j=0;j<len1;j++){
                if(s[i][j]>s[i+1][j]||j>=len2){
                    s[i]=s[i].substr(0,j);
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++)    cout<<"#"<<s[i]<<endl;
        return 0;
}