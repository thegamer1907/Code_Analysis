#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0), cout.precision(15);
    string pass;
    cin >> pass;
    int n; // 1 100
    cin >> n;
    vector<string> words(n);
    bool yes = false;
    for(int i = 0; i < n; i++){
        cin >> words[i];
        if(words[i] == pass){
            yes = true;
        }
    }
    if(yes){
        cout << "YES" << endl;
        return 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            /* We can dupliate the same word. */
            /*if(j == i){ 
                continue;
            }*/
            string tmp;
            tmp += words[i][1];
            tmp += words[j][0];
            if(tmp == pass){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
