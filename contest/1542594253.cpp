#include <iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<queue>
#include<map>
#include<set>
#include <cstdio>
using namespace std;

char a[5];

char s[105][5];

int main(){
    scanf("%s",a);
    int n;
    cin >> n;
    bool flag = false;
    for(int i = 1;i <= n;i++){
        scanf("%s",s[i]);
        if(s[i][0] == a[0] && s[i][1] == a[1]) flag = true;
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            if(s[i][1] == a[0] && s[j][0] == a[1]) flag = true;
        }
    }
    if(flag) puts("YES");
    else puts("NO");
    return 0;
}
