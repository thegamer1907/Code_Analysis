#include <iostream>
#include <unordered_map>
#include <set>

int main(){
    std::ios::sync_with_stdio(false);
    std::string pass;
    std::cin >> pass;
    
    int n;
    std::unordered_map<char, std::set<char> > characters;
    std::cin >> n;
    std::string words;
    while(n--){
        std::cin >> words;
        characters[words[0]].insert(words[1]);
    }

    bool yes = false;
    if(characters.count(pass[0])>0 && characters[pass[0]].count(pass[1])>0){
        yes = true;
    }
    for(std::pair<char, std::set<char> > i: characters){
        if(i.second.count(pass[0])){
            for(std::pair<char, std::set<char> > i: characters){
                if(i.first == pass[1]){
                    yes = true;
                    break;
                }
            }
        }
    }
    if(yes)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}