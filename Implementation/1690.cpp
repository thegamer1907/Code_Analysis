#include<bits/stdc++.h>
using namespace std;
    char a[150][150];
    bool used[150][150];
    int cnt[300];
    void nolbilan()
    {
        for(int i = 0 ; i < 200 ;i++)
        {
            cnt[i] = 0;
        }
    }
    main()
    {
        string s;
        cin >> s;
        int cnt = 0;
        for(int i = 0 ; i < s.size();i ++)
        {
            if(s[i] == '0')
            {
                cnt = 1;
                for(int j = i + 1 ;  j < s.size();j ++)
                {

                    if(s[j] == '0')
                    cnt++;
                     if(cnt == 7){
                        return cout <<"YES",0;
                    }
                    else if(s[j] == '1')
                        break;
                }
            }
            if(s[i]=='1')
            {
                cnt = 1;
            for(int j = i + 1 ; j < s.size();j ++)
            {
                if(s[j] == '1')
                    cnt++;
                if(cnt == 7){
                    return cout <<"YES",0;
                }
                else if(s[j] == '0')
                    break;
            }

            }

        }
        puts("NO");
    }
