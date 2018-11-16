#include <iostream>

using std::cin;
using std::cout;

const int limit = 100000;

char s[limit];

bool findAB(char a, char b)
{
    return (a == 'A' && b == 'B');
}

bool findBA(char a, char b)
{
    return (a == 'B' && b == 'A');   
}

int main()
{
    cin >> s;
    
    int i = 0;
    bool gotab = false;
    bool gotba = false;
    
    while(s[i] != 0)
    {
        if (i+1 != limit)
        {
            if (!gotab && findAB(s[i], s[i+1]))
            {
                gotab = true;
                i+=2;
                continue;
            }
            
            if(gotab && !gotba && findBA(s[i], s[i+1]))
            {
                gotba = true;
                i+=2;
                continue;
            }
        }
        
        i++;
    }
    
    if (gotab && gotba)
    {
        cout << "YES";
        return 0;
    }
    
    gotab = gotba = i = 0;
   
    while(s[i] != 0)
    {
        if (i+1 != limit)
        {
            
            if(!gotba && findBA(s[i], s[i+1]))
            {
                gotba = true;
                i+=2;
                continue;
            }
            
            if (gotba && !gotab && findAB(s[i], s[i+1]))
            {
                gotab = true;
                i+=2;
                continue;
            }
            
        }
        
        i++;
    }
        
    if (gotab && gotba)
    {
        cout << "YES";
        return 0;
    }
   
   cout << "NO";
    
    return 0; 
}