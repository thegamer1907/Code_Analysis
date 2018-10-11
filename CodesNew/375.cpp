#include <iostream>
#include <algorithm>
#include <string.h>
#include <bits/stdc++.h>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;


int main()
{
    int n,t,sum=0,books=0;
    cin >> n >> t;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int i=0,k=0,mx=0;
    while(i<n)
    {
        sum=sum+arr[i];
        books++;
        if(sum>t)
        {
            sum=sum-arr[k];
            k++;
            books--;
        }
        mx=books;
        if(mx<books)
        {
            mx=books;
        }
        i++;
    }

    cout << mx << endl;
    return 0;
}



