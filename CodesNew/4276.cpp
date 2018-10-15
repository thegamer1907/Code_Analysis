#include<bits/stdc++.h>
using namespace std;
const int maxn =5e5+5;
string s[maxn];
int n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=n-2;i>=0;i--){
        if(s[i+1] >=  s[i]) continue;
        int len1 = s[i+1].length(),len2 = s[i].length();
        int index = -1;
        for(int j=0;j<len2;j++){
            if(s[i][j] <= s[i+1][j]) continue;
            else{
                index = j;
                break;
            }
        }
        if(index == -1)s[i] = "#";
        else s[i] = s[i+1].substr(0,index);

//        cout<<s[i]<<" "<<i<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
