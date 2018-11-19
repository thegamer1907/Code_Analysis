#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr[100],word;
    int i,j,k,l,n;

        cin>>word;
        scanf("%d",&n);
        k=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==word)
                k=1;
        }
        if(k==1)
        {
            printf("YES\n");
        }
        else
        {
            j=0;
            for(i=0;i<n;i++)
            {
                if(arr[i][1]==word[0])
                {
                    j=1;
                    break;
                }

            }
            l=0;
            if(j==1)
            {
                for(i=0;i<n;i++)
                {
                    if(arr[i][0]==word[1])
                    {
                        l=1;
                        break;
                    }

                }
                if(l==1)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else
            {
                printf("NO\n");
            }
        }


    return 0;
}
