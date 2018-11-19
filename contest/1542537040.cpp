#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <cstring>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<string>key;
    string pw;
    cin>>pw;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        key.push_back(str);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            string n = key[i]+key[j];
            if(n.find(pw) !=string::npos)
            {
                cout<<"YES";
                return 0   ;
            }
        }
    }
    cout<<"NO";
    return 0;
}
