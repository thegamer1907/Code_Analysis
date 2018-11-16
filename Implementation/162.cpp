#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n, a, b, x, num = 1;
    cin >> n >> a >> b;
    x = n;
    if (a > b)
        swap(a, b);
    vector<int> nv;
    for (int i = 0; i < n; ++i)
        nv.push_back(i + 1);
    while (x != 2)
    {
        vector<int> ak;
        for (int i = 0; i + 1 < x; i += 2)
        {
            if (nv[i] == a && nv[i + 1] == b){
                cout << num;
                return 0;
            }
            else
            {
                if (nv[i] == a || nv[i + 1] == a)
                    ak.push_back(a);
                else if (nv[i] == b || nv[i + 1] == b)
                    ak.push_back(b);
                else
                    ak.push_back(nv[i]);
            }
        }
        nv = ak;
        x = nv.size();
        ++num;
    }
    cout << "Final!";
    return 0;
}
