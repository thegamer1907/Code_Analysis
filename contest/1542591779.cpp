#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int b1,b2,b3;



int main()
{
    char c[1000][2];
    cin >> c[0][0] >> c[0][1];
    int n ;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> c[i][0] >> c[i][1];

    }
    for(int i = 1; i <= n; i++)
    {
        if(c[i][0] == c[0][0] && c[i][1] == c[0][1]){
            cout << "YES";
            return 0;
        }
        for(int j = 1; j <= n; j++)
        {

                if(c[i][1] == c[0][0] && c[j][0] == c[0][1]){
                    cout << "YES";
                    return 0;
                }

        }
    }
    cout << "NO";

}
