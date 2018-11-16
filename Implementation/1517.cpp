#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <algorithm>
#include <string>
#include <ctime>
#include <chrono>
#include <random>
#include <queue>
#include <iomanip>
using namespace std;
long long n, k, x, c;
string s;
int main()
{
    cin >> s;
    if (s.length()>=7){
    for (int i = 0; i < s.length()-6; i++){
        for (int j = i; j < i+7; j++){
            if (s[j]=='0'){
                k++;
            }
            if (s[j]=='1'){
                x++;
            }
        }
        if ((k>=7) || (x>=7)){
            cout << "YES";
            c=1;
            break;
        }
        k=0;
        x=0;
    }
    if (c!=1){
    cout << "NO";
    }
    } else cout << "NO";
}