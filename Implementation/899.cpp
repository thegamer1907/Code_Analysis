#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    int n, t, i;
    char s[100];
    scanf("%d%d%s", &n, &t, &s);
    
    while(t--)
    {
        for(i=0; i<strlen(s)-1; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    
    printf("%s\n", s);
    
    return 0;
}