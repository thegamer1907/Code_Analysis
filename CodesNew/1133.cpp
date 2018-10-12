/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPos(long long int n, long long int val)
{
    long long int num = n, vasya = 0;
    while(num!=0)
    {
        vasya = vasya + min(num,val);
        num = num - min(num,val);
        num = num - num/10;
    }
    return 2*vasya >= n;
}

int main()
{
    long long int n,start =1, end;
    cin >> n;
    end = n;
    while(start < end)
    {
        long long int mid = (start+end)/2;
        if(isPos(n,mid))end = mid;
        else start = mid+1; 
    }
    cout << start << endl;
}
