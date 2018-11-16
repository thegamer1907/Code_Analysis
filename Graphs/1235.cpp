#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cells, index;
    cin >> cells >> index;

    vector<int> V;

    for (int i = 0; i < cells - 1; i++){
        int x;
        cin >> x;
        V.push_back(x);
    }

    int pos = 0;

    for (int i = pos; i < V.size(); i++){
        pos = pos + V[pos];

        if (pos == index - 1){
            cout << "YES" << endl;
            return 0;
        }else if (pos > index - 1){
            cout << "NO" << endl;
            return 0;
        }
    }

    return 0;
}