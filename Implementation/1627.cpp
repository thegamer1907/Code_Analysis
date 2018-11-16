#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin>>str;
    
    int count = str.length();
    int fnum = 1; 
    int tnum = 1;

    for(int i = 0; i < count; i++) {
        if(str[i] == '0') {
            if(str[i+1] == '0')
                fnum++;
            else
                if(fnum < 7)
                    fnum = 1;

        } else if(str[i] == '1') {
            if(str[i+1] == '1')
                tnum++;  
            else
                if(tnum < 7)
                    tnum = 1;
        }
    }

    if(fnum >= 7 || tnum >= 7)
        cout<<"YES";
    else
        cout<<"NO";

}