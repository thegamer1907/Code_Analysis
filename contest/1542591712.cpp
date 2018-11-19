#include <bits/stdc++.h>
typedef long long int LL;
using namespace std;

const int N = 40000 +7;
/*****************************************/

string s[111];
int n;
int main(){
    cin >> s[0];
    cin >> n;
    for(int i=1;i<=n;i++) cin>>s[i];
    string str="";
    for(int i=1;i<=n;i++){
        str+=s[i];
        str+=s[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            str+=s[i];
            str+=s[j];
            str+=s[i];
        }
    }
    int flag=0;
    for(int i=1;i<str.size();i++){
        if(str[i]==s[0][1]&&str[i-1]==s[0][0]){
            flag = 1;
            break;
        }
    }
//    cout << str << endl;
    if(flag) puts("YES");
    else puts("NO");
    return 0;
}
