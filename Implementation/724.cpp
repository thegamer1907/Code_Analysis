#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int t;
    string enteredStr;
    cin >> n >> t;
    cin >> enteredStr;
    while(t)
    {
        for(int i = 0; i < n - 1; i++)
        {
            if(enteredStr[i] == 'B' && enteredStr[i + 1] == 'G') {swap(enteredStr[i], enteredStr[i + 1]); i++;}
        }
        t--;
    }
    cout << enteredStr << endl;
    return 0;
}
