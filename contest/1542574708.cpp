# include <bits/stdc++.h>
using namespace std;
vector < string > se ;
int main()
{
    string s , t , conc ;
    cin >> s ;
    int i , j , k , n ;
    cin >> n ;
    for ( i = 0 ; i < n; i++)
        cin >> t , se.push_back(t) ;// cout << se[i] << endl ;
    
    bool check = false ;

    for ( i = 0 ; i < n ; i++)
    {
        for ( j = 0 ; j < n ; j++)
        {
            conc = se[i] + se[j];
            //cout << conc<< endl ;
            for ( k = 0 ; k < 3 ; k++)
            {
                if( s == conc.substr(k,2) )
                    check = true ;
            }
        }
    }

    if(check)
        cout << "YES";
    else
        cout << "NO";

    return 0 ;
}

