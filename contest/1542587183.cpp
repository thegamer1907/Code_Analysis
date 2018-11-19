#include<bits/stdc++.h>

using namespace std;

int main(void) {
    string pass, arr[101];
    bool sub[2] = {false};
    int n;
    cin>>pass;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i][0] == pass[1] )
        {
            sub[1]=true;
        }
        if(arr[i][1] == pass[0])
        {
            sub[0] = true;
        }
        if(arr[i][0] == pass[0] && arr[i][1] == pass[1])
        {
            sub[0]=sub[1]=true;
        }
    }
    if(sub[0] ==true && sub[1] == true)
    {
        printf("YES");return 0;
    }
    printf("NO");
    return 0;
}

