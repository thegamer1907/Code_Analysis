#include <cstdlib>
#include <bits/stdc++.h>

int n = 0;
int t = 0;
char *str = NULL;

int main(int argc, char** argv) {
    std::cin >> n >> t;
    str = new char[n];
    int flag = 0;
    int init = 0;
    
    for(int a = 0; a < n; a++){
        std::cin >> str[a];
    }
    
    for(int b = 0; b < t; b++){
        flag = 0;
        for(int a = 0; a < n; a++){
            if(str[a] == 'B' && a+1 < n && str[a+1] == 'G'){
                str[a] = 'G';
                str[a+1] = 'B';
                a++;
                if(!flag){
                    flag = 1;
                    init = a;
                }
            }
        }
    }
    
    for(int a = 0; a < n; a++){
        std::cout << str[a];
    }
    
    return 0;
}

