#include<bits/stdc++.h>

using namespace std;

int main()
{
    string all;
    cin >> all;
    char shamne = all[0];
    char piche = all[1];
    int n;
    cin >> n;
    char track[n][2];
    bool kp = false;
    for(int i = 0; i<n; i++)
    {
        cin >> track[i];
        if(track[i] == all)
        {
            kp = true;
        }
    }
    if(kp == true)
    {
        cout << "YES" << endl;
    }
    else{
    bool shamnecount = false;
    bool pichecount = false;
    for(int i = 0; i<n; i++)
    {
        if(track[i][1] == shamne)
        {
            shamnecount = true;
            break;
        }
    }
    for(int i = 0; i<n; i++)
    {
        if(track[i][0] == piche)
        {
            pichecount = true;
            break;
        }
    }
    if(shamnecount&& pichecount)
    {
        cout << "YES" << endl;
    }
    else if(shamnecount || pichecount) cout << "NO" << endl;
    else if(!shamnecount && !pichecount) cout << "NO" << endl;
    }
}
