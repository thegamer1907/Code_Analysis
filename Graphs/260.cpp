#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <cstdio>


using namespace std;

int main()
{
    string s;
    int n, t;
    cin >> n >> t >> s;
    int k,i,j;
    while(t--){
        for(i=0; i<s.length()-1; i++){
            j=i+1;
            if(s[i]=='B' && s[j]=='G'){
                s[i]='G';
                s[j]='B';
                i=j;
            }
        }
    }
    cout << s << endl;

    return 0;

}

