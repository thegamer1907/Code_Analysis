#include<iostream>
#include<algorithm>
#include<string>
#include<map>

int main(){
    std::string s;
    int n;
    std::cin >> s >> n;

    bool ans = false;

    std::map<char, bool> a, b;
    for(char c = 'a'; c <= 'z'; c++){
        a[c] = false;
        b[c] = false;
    }

    std::string str;
    for(int i = 0; i < n;i++){
        std::cin >> str;
        std::string rv = str;
        std::reverse(rv.begin(), rv.end());
        if(str == s || rv == s)ans = true;

        a[str[0]] = true;
        b[str[1]] = true;
    }

    for(char c = 'a'; c <= 'z'; c++){
        if(b[c]){
            for(char cc = 'a'; cc <= 'z'; cc++){
                if(a[cc]){
                    if(c == s[0] && cc == s[1])ans = true;
                }
            }
        }
    }

    std::cout << (ans ? "YES" : "NO") << std::endl;

}
