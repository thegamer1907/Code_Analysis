#include<bits/stdc++.h>

using namespace std;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair

int main(){
    int n;
    char s[105];
    scanf("%s",s);
    scanf("%d",&n);
    char c[105];
    int q1 = 0; 
    int q2 = 0; 
    int qq1 = 0; 
    int qq2 = 0; 
    for(int i = 0; i < n; i++){
        scanf("%s",c);
        if(c[0] == s[0] && c[1] == s[1]){
            printf("YES\n");
            return 0;
        }
        if(c[1]== s[0]) qq1 = 1;
        if(c[0]== s[1]) qq2 = 1;
    }
    if((q1 && q2) || (qq1 && qq2))  printf("YES\n");
    else 
        printf("NO\n");
    return 0;
}