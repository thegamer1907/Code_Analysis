#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <string>
#include <algorithm>
#include <iomanip>
#include <stdio.h>
#include <cmath>
#include <cstring>
using namespace std;

#define pi acos(-1)

int to_int(string s){
    int number = 0;
    for(int i=0;i<s.size();i++){
        number *= 10;
        number += s[i] - '0';
    }
    return number;
}

string to_str(int n){
    string s;
    while(n!=0){
        s += n % 10 + 48;
        n /= 10;
    }
    reverse(s.begin(),s.end());
    return s;
}

bool isLeapYear(int year)
{
    if(((year % 4 == 0 ) && (year % 100 != 0)) || (year % 400 == 0))
        return true;
    else
        return false;
}

bool isPrime(int n)
{
    if(n ==1)
        return false;
    if (n == 2)
        return true;
    if ((n & 1)==0)
        return false;
    for (int i = 3; i*i <= n;i+=2) {
        if (n%i == 0)
            return false;
    }

    return true;
}

bool isPalindrome(string s)
{
    for(int i=0,j=s.size()-1 ; i< s.size()/2 && j >= s.size()/2;i++,j--){
            if(s[i] == s[j])
                continue;
            else{
                return false;
            }
        }
    return true;
}

bitset <1000001> primeArr;
void sieve()
{
    int num_sqrt = sqrt(1000000);
    primeArr[1] = 1;
    for(int i=4;i<=1000000;i+=2)
        primeArr[i] = 1;

    for(int i=3;i<=num_sqrt;i+=2){
        for(int j=2;i*j<=1000000;j++)
            primeArr[i*j] = 1;
    }
}

long long fibo(vector <int> &arr, int n)
{
    if(n == 1 || n == 0){
        arr[n] = 1;
        return 1;
    }
    if(arr[n] != 0)
        return arr[n];

    long long memo = fibo(arr, n-1) + fibo(arr, n-2);
    arr[n] = memo;
    return memo;
}

bool comp(pair <int, int> a, pair <int, int> b)
{
    if( a.first > b.first)

        return true;
    return false;
}


int main() {
    int n, t;
    cin >> n >> t;
    vector <int> arr(n);
    for(int i=1;i<n;i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    int i=1;
    for(;i<=t;){
        i+=arr[i];
        if(i == t){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
