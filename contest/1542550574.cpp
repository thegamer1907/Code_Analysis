#include <iostream>

using namespace std;

string password, word;
int n;
bool l1, l2;

int main()
{
    l1=false;
    l2=false;
    cin >> password;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> word;
        if(word[1]==password[0])l1=true;
        if(word[0]==password[1])l2=true;
        if(word==password)l1=true,l2=true;
    }
    if(l1==true && l2==true)cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
