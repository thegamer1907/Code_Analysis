//
//  main.cpp
//  A
//
//  Created by vincent alek on 6/7/17.
//  Copyright © 2017 vincent alek. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int arr[1003], tes[10003];
int main()
{
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= m; i++) cin >> tes[i];
    if(m >= 2)
    {
        cout << "YES\n";
        return 0;
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] == 0)
            arr[i] = tes[1];
    }
    for(int i = 1; i <= n; i++)
    {
        if(arr[i] && arr[i] <= arr[i-1])
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
