#include <cstdio>
#include <cstring>
#include<iostream>
#include<string>
using namespace std;
int main(int n)
 {
    char str[3], s[107][7], tmp[7];
    cin>>str;
    cin>>n;
    for(int i=1 ; i<=n ; i++) cin>> s[i];
    for(int i=1 ; i<=n ; i++)
        for(int j=1 ; j<=n ; j++) 
        {
            strcpy(tmp, s[i]), strcat(tmp, s[j]);
            if(strstr(tmp, str)) return 0*printf("YES\n");
         }
    return 0*printf("NO\n");
}