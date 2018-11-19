#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    int n;


    string s;

    cin >> s >> n;

    vector <string> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            string sub = v[i] + v[j];
            if (sub.find(s) != std::string::npos) {
                std::cout << "YES" << '\n';
                return 0;
            }
        }
    }

    cout << "NO" << endl;


    return 0;
}
