#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, seconds = 0;
    string s;

    cin >> n >> seconds;
    cin >> s;

    for (int i = 0; i < seconds; i++){
        for (int j = 0; j < s.size(); j++){
            if (s[j] == 66 && s[j+1] == 71){
                swap(s[j], s[j+1]);
                j++;
                continue;
            }
        }
    }

    cout << s << endl;


    return 0;
}