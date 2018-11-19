#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string pas;
    cin >> pas;

    char pas1 = pas[0], pas2 = pas[1];

    int n;
    cin >> n;
    vector<string> a(n);

    for (auto& i : a)
        cin >> i;

    bool b = true;

    if (n >= 1){
        for (int i = 0; i < n; i++){
            if (a[i][1] == pas1){
                for (int j = 0; j < n; j++){
                    if (a[j][0] == pas2){
                        cout << "YES";
                        b = false;
                        break;
                    }
                }
            }

            if (b == false)
                break;

            if (a[i] == pas){
                cout << "YES";
                b = false;
            }

            if (b == false)
                break;
        }
    }

    if (b || n == 0)
        cout << "NO";

}
