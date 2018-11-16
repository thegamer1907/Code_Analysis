#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,t;
    string str;
    char LastPerson=' ';

    cin>>n>>t;
    cin>>str;
    for(int i=0;i<t;i++){
        for(int j=0;j<str.length();j++){
            if (LastPerson=='B' && str[j]=='G'){
                swap(str[j],str[j-1]);
                LastPerson=' ';
            }
            else LastPerson=str[j];
        }
        LastPerson=' ';
    }
    cout<<str;
    return 0;
}

