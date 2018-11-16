#include<bits/stdc++.h>
using namespace std;
    int a[150];
    int b[150];
    int n;
    int ans;
    void filldata()
    {
        for(int i = 1 ; i <= n;i++){
            b[i] = a[i];
        }

    }
    void get_answert()
    {
        int cnt = 0;

        for(int i = 1 ; i <= n;i++)
        {
            b[i] == 1 ? cnt++ : cnt;
        }
        ans = max(ans,cnt);
    }
    main()
    {
      ans = 0;
      cin >> n;
      for(int i = 1 ; i <= n;i++)
      {
        cin >> a[i];
        b[i] = a[i];
      }
      if(n == 1 and a[1] == 1)return cout <<0,0;
      if(n == 1 and a[1] == 0)return cout <<1,0;


      for(int i = 1 ;  i <= n;i++)
      {

        for(int j = i ; j <= n ; j++)
        {

            filldata();
            int left = i;
            int right = j;
            for(int k = left; k <= right;k++)
            {
                b[k] = 1 - b[k];

            }
            get_answert();

        }
      }
      cout << ans;




    }
