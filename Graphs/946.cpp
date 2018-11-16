#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    n--;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];        
    }
    int flag = 0;
    for(int i=1;i<=m;i = i+a[i-1]){
        if(i == m){
            cout << "YES";
            flag = 1;            
        }
    }
    if(flag == 0)
        cout << "NO";
}