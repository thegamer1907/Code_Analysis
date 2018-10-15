#include <bits/stdc++.h>
#define maxn 500005
using namespace std;
int n;
string str[maxn];

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            cin>>str[i];
    }
    for(int i=n-1;i>0;i--){
        if(str[i] < str[i-1]){
            int len = str[i-1].length();
            for(int j=1;j<len;j++){
                if(str[i-1][j] > str[i][j]){
                    str[i-1].erase(j);
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    }
    return 0;
}
