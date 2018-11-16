#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    long long int n;
    short int t;

    cin >> n >> t;
    cin >> str;

    while(t--){
        for(long long int i = 0; i < n; i++){
            if(str[i] == 'B' && str[i+1] == 'G'){
                char temp = str[i];
                str[i] = str[i+1];
                str[i+1] = temp;
                i++;
            }
        }
    }

    cout << str << endl;

    return 0;
}
