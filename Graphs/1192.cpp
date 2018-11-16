#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

#define lol long long int

int main(int argc, char const *argv[])
{
#ifdef DEBUG
    freopen("in.txt", "rt", stdin);
    freopen("out.txt", "wt", stdout);
#endif // DEBUG

    int n,t;

    cin >> n >> t;

    t = t - 1;

    vector<int> v;

    for(int i = 0; i < n-1; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    int index = 0;
    int end_index = t;
    bool status = false;

    while(index <= t){
        if(index == end_index){
            status = true;
            break;
        }
        else{
            index += v[index];
        }
    };

    cout << (status ? "YES" : "NO");
};
