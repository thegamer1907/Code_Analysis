#include <iostream>
#include <string>

int main(){
    int n, t;
    std::cin >> n >> t;
    std::string str;

    std::cin>>str;

    for(int j=0; j<t; ++j){
        auto prev = 0;
        for(int i=1; i<n; ++i) {
            if(str[prev] == 'B' && str[i] == 'G'){
                 auto tmp = str[prev];
                 str[prev] = str[i];
                 str[i] = tmp;
                  ++i;
            }
            prev = i;
        }
    }

    std::cout << str << std::endl;

    return EXIT_SUCCESS;

}
