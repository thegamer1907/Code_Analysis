    #include <cstdlib>
    #include <iostream>
    #include <math.h>
    #include <algorithm>
    using namespace std;
    int main()
       {
        int a;
        int b;
        int d;
        int e;
        int f;
        int g;
        cin>>a;
        cin>>b;
        int aa[a];
        for(d=0;d<a;++d)
        {
          cin>>aa[d];
          if(d==0)
          {
            e=aa[d];
          }
          else
          {
            if(aa[d]>e)
              e=aa[d];
          }
        }
        f=b+e;
        for(d=0;d<a;++d)
          {
            b=b-e+aa[d];

          }
          if(b<=0)
          g=e;
        else
        {
          if(b%a==0)
          g=e+b/a;
        else
          g=e+b/a+1;
        }
        cout<<g<<" "<<f<<endl;
      return 0;
    }  