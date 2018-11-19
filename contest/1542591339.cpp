#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string s, s1;
int lit1,n,lit2,ok;
int main()
{
    cin >> s;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> s1;
        if(s1 == s){
            cout << "YES";
            //ok = 1;
            return 0;
        }

        //if(lit == 0){
            if(s[0] == s1[1]){
                lit1++;
            }
        //}

        //if(lit == 1){
            if(s[1] == s1[0]){
                lit2++;
            }

            if(lit1 > 0 && lit2 > 0){
                cout << "YES";
                //ok = 1;
                return 0;
            }
       // }
    }

    cout << "NO";

    return 0;
}
