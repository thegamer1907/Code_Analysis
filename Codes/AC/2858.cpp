#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
#include <vector>
#include <cstdio>
#include <cctype>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
const int N=1e6+10;
int len,i,L,R,mx,pos=-1,ans=-1,z[N];
char s[N];
int main(){
    scanf("%s",s);
    int len=strlen(s);
    for (i=1;i<len;i++){
        if (i>R){
            L=R=i;
            while (R<len&&s[R-L]==s[R]) R++;
            z[i]=R-L;R--;
        }
        else{
            int k=i-L;
            if (z[k]<R-i+1) z[i]=z[k];
            else{
                L=i;
                while (R<len && s[R-L]==s[R]) R++;
                z[i]=R-L;R--;
            }
        }
    }
    for (i=1;i<len;i++){
        if (i+z[i]==len&&mx>=z[i]){
            ans=z[i],pos=i;
            break;
        }
        mx=max(z[i],mx);
    }
    if (ans==-1||pos==-1) puts("Just a legend");
    else{
        for (i=pos;i<pos+ans;i++) putchar(s[i]);
    }
    return 0;
}
