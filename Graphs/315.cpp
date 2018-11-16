#include <iostream>
#include <cmath>
#include <set>
#include <map>
#include <algorithm>
#define ll long long

using namespace std;

ll n, amount, a[111], ans, b[111];
string s;

void fun1();
bool fun2();
void fun3();
void fun4();
void fun5();

int main()
{
    fun1();
    return 0;
}

void fun1(){
    ll x, y;
    cin >> n >> x;
    cin >> s;
    for (int j = 0; j < x; j++){
        for (int i = 0; i < n - 1; i++){
            if (s[i] == 'B' && s[i + 1] == 'G'){
                swap(s[i],s[i + 1]);
                i++;
            }
        }
    }
    cout << s;
}

bool fun2(){
    int x = 0;
    while (n){
        x = n % 10;
        if ( !(x == 4 || x == 7))
            return 0;
        n /= 10;
    }
    return 1;
}

void fun3(){
    fun4();
    if (n == amount || (s[0] >= 'a' && s[0] <= 'z' && amount == n - 1) ){
        for (ll i = 0; i < n; i++){
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 'a' - 'A';
            else
                s[i] += 'A' - 'a';
        }
    }
}

void fun4(){
    n = s.length();
    for (int i = 0; i < n; i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            amount++;
    }
}

void fun5(){
    ll sum = 0, sumans = 0;
    for (ll i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    ll o = n - 1;
    sort(a, a + n);
    while (sumans <= sum){
        sumans += a[o];
        sum -= a[o];
        o--;
        ans++;
    }
}
