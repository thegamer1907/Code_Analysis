#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

using ll=long long;
using VL=vector<ll>;
using VC=vector<char>;

/**
 * @brief main
 * @return
 */
int main()
{
    string password;
    cin >> password;

    ll n; 
    cin >> n;

    vector<string> tries;
    for(ll i = 0; i<n; ++i)
    {
        string curr;
        cin >> curr;
        tries.push_back(curr);
    }

    for(ll i = 0; i<n; ++i)
    {
        if(!tries[i].compare(password))
        {
            cout << "YES" << endl; // direct match
            return 0;
        }
    }
    for(ll i = 0; i<n; ++i)
    {
        for(ll j = 0; j<n; ++j)
        {
            string curr = tries[i]+tries[j];
            // cout << curr << endl;
            if (curr.at(1) == password.at(0) && curr.at(2) == password.at(1)) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}
