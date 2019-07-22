#include <iostream>
#include <cstdio>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;
struct ss
{
    int x;
    char y;
}s[3];

bool cmp(ss a, ss b)
{
    return a.x < b.x;
}

int main()
{
    while(1){
        int ans;
        for(int i = 0; i < 3; i++){
            cin >> s[i].x >> s[i].y;
        }
        sort(s, s + 3, cmp);
        if(s[0].y == s[1].y && s[1].y == s[2].y){
            if((s[2].x - s[0].x == 0) || (s[1].x - s[0].x == 1 && s[2].x - s[1].x == 1)){
                ans = 0;
            }
            else if(s[1].x - s[0].x == 0 || s[2].x - s[1].x == 0 || s[1].x - s[0].x == 1 || s[2].x - s[1].x == 1){
                ans = 1;
            }
            else{
                ans = 2;
            }
        }
        else if(s[0].y == s[1].y){
            if(s[1].x - s[0].x <= 2){
                ans = 1;
            }
            else{
                ans = 2;
            }
        }
         else if(s[1].y == s[2].y){
            if(s[2].x - s[1].x <= 2){
                ans = 1;
            }
            else{
                ans = 2;
            }
        }
         else if(s[0].y == s[2].y){
            if(s[2].x - s[0].x <= 2){
                ans = 1;
            }
            else{
                ans = 2;
            }
        }
        else{
            ans = 2;
        }
        printf("%d\n", ans);
    }
    return 0;
}