#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

string s[123];
string str;

int main()
{
    cin>>str;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==str){
            puts("YES");
            return 0;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i][1]==str[0]){
            for(int j=0;j<n;j++){
                if(s[j][0]==str[1]){
                    puts("YES");
                    return 0;
                }
            }
        }
    }
    puts("NO");
    return 0;
}
