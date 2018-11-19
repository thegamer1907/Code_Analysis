#include <bits/stdc++.h>

using namespace std;




int main()
{
    string pass;
    int n;



    cin >> pass;
    cin >> n;

    vector <string> words(n);
    char first = pass[0], second = pass[1];

    int i, flag = 0, firstAtBegin = 0, firstAtEnd = 0, secondAtBegin = 0, secondAtEnd = 0 ;

    for( i = 0; i < n; i++)
    {
        cin >> words[i];

        if(  (words[i][0] == first && words[i][1] == second) || (words[i][0] == second && words[i][1] == first)  )
        {
            flag = 1;
        }


    }

    if( flag  )
    {
        cout << "YES";
        return 0;
    }


    for(i = 0; i < n; i++)
    {

        if(words[i][0] == first)
        {
            firstAtBegin = 1;
        }

        if(words[i][1] == first)
        {
            firstAtEnd = 1;
        }


        if(words[i][0] == second)
        {
            secondAtBegin = 1;
        }

        if(words[i][1] == second)
        {
           secondAtEnd = 1;
        }



    }



    if((firstAtEnd == 1 && secondAtBegin == 1) )
    {
        cout <<"YES";

        return 0;

    }



        cout << "NO";



    return 0;
}
