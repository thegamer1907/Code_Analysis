#include <bits/stdc++.h>

using namespace std;

bool moveClk (int hand, int t1, int t2)
{
    if(t1 == hand)
    {
        return 0;
    }


   while(1)
   {
       if(t1 == t2)
       {
           return 1;
       }

       if(t1 == hand)
       {
           return 0;
       }

       if(t1 == 12)
       {
           t1 = 0;
       }

       t1++;
   }


}

bool moveAntiClk(int hand, int t2, int t1)
{


    if(t1 == hand)
    {
        return 0;
    }


   while(1)
   {
       if(t1 == t2)
       {
           return 1;
       }

       if(t1 == hand)
       {
           return 0;
       }

       if(t1 == 12)
       {
           t1 = 0;
       }

       t1++;
   }

}

int main()
{
    int h,m,s,t1,t2;

    cin >> h >> m >> s >> t1 >> t2;

   int mpos = m / 5;
   int spos = s/5;

   if(mpos == 0)
   {
       mpos = 12;
   }

   if(spos == 0)
   {
       spos = 12;
   }


    if( moveClk(h,t1,t2) && moveClk(mpos, t1,t2) && moveClk(spos,t1,t2))
    {
        cout <<"YES";
        return 0;
    }

    if( moveAntiClk(h,t1,t2) && moveAntiClk(mpos, t1,t2) && moveAntiClk(spos,t1,t2))
    {
        cout <<"YES";
        return 0;
    }






    cout <<"NO";

    return 0;
}
