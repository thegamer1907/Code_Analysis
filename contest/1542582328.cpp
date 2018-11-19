#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
    
int main()
{
    vector<string> array;
    int n;
    bool a = 0, b = 0;
    string p, q;
    cin >> p >> n;    

    for(int i = 0; i < n; i++)
    {
        cin >> q;
        array.push_back(q);
    }

    if(find(array.begin(), array.end(), p) != array.end())
    cout <<"YES";
    
    else
    {
        for(int i = 0; i < n; i++)
    {
        if(array[i][0] == p[1]) a++;
        if(array[i][1] == p[0]) b++;
    }

    if (a && b)
        cout << "YES";
    else
        cout << "NO";
    }
}