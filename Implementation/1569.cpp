#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int cnt;
string str;

int main()
{   
    cin >> str;
    cnt = 1;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == str[i - 1]){
            cnt++;
            if (cnt == 7){
                printf("YES");
                return 0;
            }
        }
        else cnt = 1;
    }
    printf("NO");
    return 0;
}