#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int n, cFirst = 0, cLast = 0, flag = 0;;
    char str[200], pass[10];

    cin>>pass;

    cin>>n;

    if(n == 1){
        cin>>str;
        if((str[0] == pass[0] && str[1] == pass[1]) || (str[0] == pass[1] && str[1] == pass[0]))
            printf("YES\n");
        else
            printf("NO\n");
    }
    else{
        for(int i = 0; i < n; i++){
            cin>>str;
            if((str[0] == pass[0] && str[1] == pass[1]) || (str[0] == pass[1] && str[1] == pass[0])){
                flag = 1;
                break;
            }
            if(str[0] == pass[1])
                cLast++;
            if(str[1] == pass[0])
                cFirst++;
        }

        if(flag || (cFirst && cLast))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
