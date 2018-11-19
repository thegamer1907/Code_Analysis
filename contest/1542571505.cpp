#include <bits/stdc++.h>

using namespace std;

int h, t1, t2, w = 0, m, s;

void change(int& num)
{
    num *= 5;
    if(num == 60)
        num = 0;
}

bool checkh(int i)
{
    if(m == 0 && s == 0 && h == i)
    {
        return true;
    }
    if(h == i - 1)
    {
        return true;
    }
    return false;
}

bool checkm(int i)
{
    if(s == 0 && m == i)
    {
        return true;
    }
    if(m == i - 1)
    {
        return true;
    }
    return false;
}

int main()
{
   cin >> h >> m >> s >> t1 >> t2;
   change(h), change(t1), change(t2);
   h++;
   if(h == t2)
   {
       cout << "NO";
       return 0;
   }
   for(int i = t1 + 1;; i = (i+1)% 60)
   {
       if(checkh(i) || checkm(i) || s == i)
       {
           w++;
       }
       if(i == t2)
       {
           if(!w)
           {
               cout <<"YES";
               return 0;
           }
           w = 0;
           continue;
       }
       if(i == t1)
       {
           if(!w)
           {
               cout << "YES";
               return 0;
           }
           cout << "NO";
           return 0;
       }

   }
}
