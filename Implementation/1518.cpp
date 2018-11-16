#include<bits/stdc++.h>

using namespace std;

int main()
{
    string team ;
    int i;
    int a=0, b=0;
    int length;
    cin >> team;
    length = team.size();
    for(i=0; i< length; i++){
        if(team[i]== '1'){
            a++;
            b=0;
        }
        else if(team[i]== '0'){
            b++;
            a=0;
        }
        if(a >= 7 || b >= 7)
            break;
    }

    if(a >= 7 || b >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
