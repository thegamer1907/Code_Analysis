#include <iostream>
#include <string>

using namespace std;
int main()
{
    string digits;
    cin >> digits;
    int lucky_digits = 0;

    for (int i = 0; i < digits.size(); i++)
        if ((digits[i] == '4') || (digits[i] == '7'))
            lucky_digits++;

    if (lucky_digits)
    {
        bool lucky = true;
        string ld = to_string(lucky_digits);
        for (int i = 0; i < ld.size(); i++)
            if ((ld[i] != '4') && (ld[i] != '7'))
                lucky = false;

        //if (!(lucky_digits % 7) || !(lucky_digits % 4) || !(lucky_digits % 47))
        if (lucky)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";

    return 0;
}
