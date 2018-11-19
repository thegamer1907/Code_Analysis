#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    getline(cin ,s1);
    int flag1 = 0, flag2 = 0, flag3 = 0;
    int num;
    scanf("%d", &num);
    getchar();
    for(int i = 0; i < num; i++){
        getline(cin, s2);
        if(s1 == s2)
            flag1 = 1;
        if(s1[0] == s2[1])
            flag2 = 1;
        if(s1[1] == s2[0])
            flag3 = 1;
    }
    if(flag1 == 1 || (flag2 == 1 && flag3 == 1)){
        printf("YES\n");
    }
    else printf("NO\n");
    return 0;
}
