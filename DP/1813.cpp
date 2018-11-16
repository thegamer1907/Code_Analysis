#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string palabra;
    cin>>palabra;
    bool ab=false;
    bool ba=false;
    int posAB,posBA;


    posAB=palabra.find("AB",0);
    if(posAB>=0)
    {
        posBA=palabra.find("BA",posAB+2);
        if(posBA>0)
        {
            cout<<"YES";
            ab=true;
        }
    }
    if(ab==false)
    {
        posBA=palabra.find("BA",0);
        if(posBA>=0)
        {
            posAB=palabra.find("AB",posBA+2);
            if(posAB>0)
            {
                cout<<"YES";
                ba=true;
            }
        }

    }
    if(ab!=true && ba!=true)
        cout<<"NO";


    return 0;
}
