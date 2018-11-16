#include<bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cin>>input;
    if(input.find("1111111")==std::string::npos&&input.find("0000000")==std::string::npos)
    {
        cout<<"\nNO";
    }
    else
    {
        cout<<"\nYES";
    }
    return 0;
}