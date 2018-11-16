#include <fstream>
#include <iostream>
#include <vector>
#include <cmath>
#include <functional>
#include <algorithm>
#include <set>


int main()
{
    /*std::ifstream ifs ("input.txt", std::ifstream::in);
    std::ios_base::sync_with_stdio(false);
    ifs.tie(nullptr);*/
    std::istream &input = std::cin;
    //std::istream &input = ifs;

    int n;
    input >> n;
    int result = 0;
    result += n / 100;
    n = n % 100;
    result += n / 20;
    n = n % 20;
    result += n / 10;
    n = n % 10;
    result += n / 5;
    n = n % 5;
    result += n;
    std::cout << result;
}
