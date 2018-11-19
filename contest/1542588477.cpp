
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(int argc, char* argv[])
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);


    //content
    string line;
    getline(cin, line);

    int n;
    cin >> n;
    bool pre = false, post = false, full = false;
    string current;
    getline(cin, current);
    for (int i = 0; i < n; ++i) {
        getline(cin, current);
        if(current == line)
            full = true;
        if(current[0] == line[1])
            post = true;
        if(current[1] == line[0])
            pre = true;
    }

    if(full || (pre && post))
        cout << "YES\n";
    else
        cout << "NO\n";


    return 0;
}

