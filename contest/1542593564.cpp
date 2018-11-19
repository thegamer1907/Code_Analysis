#include <cstdio>
int main(){
    char str[4];
    scanf("%s",str);
    int n;
    char in[4];
    scanf("%d",&n);
    bool b0 = false;
    bool b1 = false;
    for(int i = 0; i < n; i++){
        scanf("%s",in);
        if(in[1] == str[0])
            b0 = true;
        if(in[0] == str[1])
            b1 = true;
        if(in[0] == str[0] && in[1] == str[1]) b0 = b1 = true;
    }
    if(b0 && b1) printf("YES");
    else printf("NO");
    return 0;
}
