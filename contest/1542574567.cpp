#include <iostream>
#include <string>
using namespace std;

int r[100000+4];

int cnt[64];
/*
   1 2 3 4
   12 13 14 23 24 34
   123 124 134 234
   1234
*/
int k,n;


bool with_bit(int bit)
{
   int i;
   for(i = 0 ; i < 16 ; i ++)
   {
       if(cnt[i]) if((i&bit)==bit) return true;
   }
   return false;
}

int main() {

    int v,i,j,t=0;
    cin >> n >>k;

    for(i = 0 ; i < n ; i ++)
    {
        t=0;
        for(j = 0 ; j < k ; j ++)
        {
            cin >> v;
            t += ((v==0)? 1:0)<<j;
            r[i]=t;
        }
        cnt[t] ++;
    }

//    for(i = 0 ; i < n ;i++)
//      cout << "  i   t "<<i <<" "<<r[i]<<endl;


//    cout <<"------"<<cnt[0] << " "<<cnt[1] << " " <<cnt[2]<<" "<<cnt[3]<<endl;
    if(k==1)
    {
        if(cnt[1]) cout << "YES\n";
        else  cout <<"NO\n";
    }
    if(k==2)
    {
        if(cnt[3] || (cnt[1] && cnt[2])) cout << "YES\n";
        else  cout <<"NO\n";
    }
    if(k==3)
    {
        /* 123: 7
           12 : 3   &  3:4 || 13:5 || 23:6
           13 : 5   &  2:2 || 12:3 || 23:6
           23 : 6   &  1:1 || 12:3 || 13:5
         */
        if( cnt[7] ||
           (cnt[3]&& with_bit(4)) ||
           (cnt[5]&& with_bit(2)) ||
           (cnt[6]&& with_bit(1)) )  cout <<"YES\n";
        else cout <<"NO\n";
    }
    if(k==4)
    {
        /* 1111:15
           0111:
        */
        if(cnt[15] ||
           (cnt[14] && with_bit(1)) ||
           (cnt[13] && with_bit(2)) ||
           (cnt[11] && with_bit(4)) ||
           (cnt[7]  && with_bit(8)) ||
           (cnt[3]  && with_bit(12)) ||
           (cnt[5]  && with_bit(10)) ||
           (cnt[6]  && with_bit(9))  )  cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
