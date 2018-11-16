#include<bits/stdc++.h>
using namespace std;
    int a[1234567];
    main()
    {
        int n , m;
        cin >> n >> m;
        map<int,int> mp;
        for(int i = 1 ; i < n;i++)
        {
            cin >> a[i];
        }
        int start = 1;
        /*
        8 4
        1 2 1 2 1 2 1

        */
        for(int i = 1 ;  i< n;i++)
        {
            start += a[start];
            if(start == m)return cout <<"YES",0;
        }
        puts("NO");

    }
