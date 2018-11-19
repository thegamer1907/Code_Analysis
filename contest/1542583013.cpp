#include<bits/stdc++.h>

using namespace std ;

struct bark
{
    char a ;
    char b ;
}arr[102];

int main()
{
    string str ;
    int n , i , j ,  flag;

    cin>>str ;
    cin>>n ;

    flag = 0 ;
    for(i=0 ; i<n ; i++ )
    {
        cin>>arr[i].a >>arr[i].b ;

        if(arr[i].a ==str[0] && arr[i].b == str[1] ||
           (arr[i].a == str[1] && arr[i].b ==str[0] ))
        {
            flag =1 ;
        }
    }

    if(flag == 1)
    {
        cout<<"YES" <<endl ;
        return 0 ;
    }


    for(i=0 ; i<n ; i++)
    {
        if(arr[i].b == str[0])
        {
            for(j=0; j<n ; j++)
            {
                if(arr[j].a == str[1] )
                {
                    flag = 1;
                    break ;
                }
            }
        }
    }

    if(flag == 1)
    {
        cout<<"YES" <<endl ;
    }
    else
    {
        cout<<"NO" <<endl ;
    }



    return 0 ;
}
