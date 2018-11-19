#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define FIN freopen("in.txt","r",stdin)
#define fuck(x) cout<<'['<<x<<']'<<endl
using namespace std;
typedef long long LL;
typedef pair<int,int>pii;
const int MX = 100 + 10;

int n;
char ch[2],str[MX][2];

int main(){
    while(cin >> ch){
        cin >> n;
        for(int i = 0;i < n;i++){
            cin >> str[i];
        }
        int flag = 0,flag1 = 0,flag2 = 0;
        for(int i = 0;i < n;i++){
            if(str[i][0] == ch[0] && str[i][1] == ch[1]){
                flag = 1;
                break;
            } 
            if(str[i][0] == ch[1]){
                flag1 = 1;
            } 
            if(str[i][1] == ch[0]){
                flag2 = 1;
            }
        }
        if(flag || (flag1 && flag2))
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}