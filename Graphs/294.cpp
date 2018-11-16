#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n,t;
    string s;
    cin >>n >>t;
    cin >>s;
    for(int i=1;i<=t;i++){
        for(int j=0;j<n;j++)
        if(s[j]=='B'&&s[j+1]=='G'){
            swap(s[j],s[j+1]);
            j = j+1;
        }
        else{
            continue;
        }
    }
    cout << s;
    return 0;
}
