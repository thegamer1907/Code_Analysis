#include <iostream>

using namespace std;

int main()
{
    string s,b;
    int n;
    cin >> s;
    cin >> n;
    char bs=0,bf=0;
    for (int i=0; i<n; i++)
    {
        cin >> b;
        if(b==s){
            cout << "YES";
            return 0;
        }
        if(bs==0 and b[1]==s[0]){
            bs=1;
        }
        if(bf==0 and b[0]==s[1]){
            bf=1;
        }

    }
    if(bf!=0 and bs!=0){
            cout << "YES";
            return 0;
        }
    cout << "NO";
}
