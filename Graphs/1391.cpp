#include <bits/stdc++.h>

int main() {
    int count, expected;

    std::cin >> count >> expected;

    int counter = 1;

    for(int index = 0; index < count - 1; index++){
        int temp;
        std::cin >> temp;
        if(counter == index + 1){
            counter += temp;
            if(counter == expected){
                std::cout << "YES";
                std::exit(0);
            }
        }
    }
    std::cout << "NO";

    return 0;
}
