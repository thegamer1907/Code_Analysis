#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;

    int f1=a.find("AB");
    int f2=a.find("BA");
    if(f1!=string::npos && a.find("BA",f1+2)!=-1 ||  f2!=string::npos && a.find("AB",f2+2)!=-1  )
    cout<<"YES";
    else cout<<"NO";
}