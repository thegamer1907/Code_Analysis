#include <iostream>
#include <string>

int main() {
    int n, t;
    std::cin >> n >> t;
    std::string str;
    std::cin >> str;
    int size = str.size();

    for ( int i = 0; i < t; ++i ) {
        for ( int j = 0; j < size; ++j ) {
            if ( str[ j ] == 'B' && str[ j + 1 ] == 'G' ) {
                str[ j ] = 'G';
                str[ j + 1 ] = 'B';
                ++j;
            }
        }
    }
    std::cout << str;
    return 0;
}
