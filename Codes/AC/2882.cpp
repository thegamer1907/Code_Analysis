#include <cstdio>
#include <cstring>

const int MAXN = 1000006;

int n;
char str[MAXN];
int lps[MAXN];

void f_lps(){
    int len=0;
    int i=1;
    while(str[i]){
        if(str[len]==str[i]){
            lps[i++]=++len;
        }else{
            if(len!=0){
                len=lps[len-1];
            }else{
                i++;
            }
        }
    }
}

bool kmp(int l){
    int m=1;
    int i=0;
    while(m<n-l){
        if(str[i]==str[m+i]){
            i++;
            if(i==l) return true;
        }else{
            if(i==0){
                m++;
            }else{
                m=m+i-lps[i-1];
                i=lps[i-1];
            }
        }
    }
    return false;
}

int main(){
    scanf("%s", str);
    n=strlen(str);
    f_lps();
    if(lps[n-1]==0){
        puts("Just a legend");
        return 0;
    }
    if(kmp(lps[n-1])){
        str[lps[n-1]]=0;
        puts(str);
    }else{
        if(lps[lps[n-1]-1]){
            str[lps[lps[n-1]-1]]=0;
            puts(str);
        }else{
            puts("Just a legend");
        }
    }

}
