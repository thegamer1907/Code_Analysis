#include <iostream>

using namespace std;

int main()
{
    string a,c;
    int b,d,e,f;
    d = 0;
    e = 0;
    cin >> a;
    b = a.length();
    for (int i=0;i<b;i++){
        c = a[i];
        if(c == "0"){
            d++;
            e = 0;
            if (d>=7){
                cout << "YES";
                break;
            }
        }
        if(c == "1"){
            e++;
            d = 0;
            if (e>=7){
                cout << "YES";
                break;
                }
            }

    }
    if (e<7 && d<7){
        cout << "NO";

    }



    return 0;

}
