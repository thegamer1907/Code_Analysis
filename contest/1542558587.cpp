#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,m, counter = 0, i = 0, k = 0, l = 0;
    string str1, str2;
    cin >> str1;
    cin >> n;
    m = n;

    while(n--)
    {
        cin >> str2;
        if(m == 1)
        {

        if(str1[0] == str2[0] && str1[1] == str2[1])
        {
        cout << "YES" << endl;
        i++;
        if(i == 1)goto start;
        }
        }
        if(str1[0] == str2[0] && str1[1] == str2[1])
        {
        cout << "YES" << endl;
        counter = 2;
       if(counter == 2)goto start;
        }


        if(str1[0] == str2[1] && k == 0)
        {
            k++;
            counter++;
        }
        if(str1[1] == str2[0] && l == 0)
        {
            l++;
            counter++;
        }

    }
//cout << counter << endl
ends:
if(counter >= 2)
cout << "YES" << endl;
else
    cout << "NO" << endl;
      start:
          return 0;

}

