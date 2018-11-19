#include<bits/stdc++.h>
using namespace std;
long long int const mod=1000000007;
int main()
 {int i,j;
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool team[4];
    bool combinations[6];
    for(i=0;i<4;i++)
        team[i]=false;
        for(i=0;i<6;i++)
            combinations[i]=false;
   int matrix[100001][5],n,k,count_zero=0,max_count_zero=0;
   cin>>n>>k;
   for(i=0;i<n;i++)
    {count_zero=0;
    for(j=0;j<k;j++)
   {cin>>matrix[i][j];
   if(matrix[i][j]==0)
   {team[j]=true;
   count_zero++;}

   }
   max_count_zero=max(max_count_zero,count_zero);
    }
for(i=0;i<k;i++)
if(team[i]==false)
{cout<<"NO";
    return 0;
}
if(k!=4)
{if(max_count_zero>= (k+1)/2)
    cout<<"YES";
    else
    cout<<"NO";
}
else
{if(max_count_zero>2)
{cout<<"YES";
return 0;}
    if(max_count_zero==2)
{for(i=0;i<n;i++)
    for(j=0;j<4;j++)
{if(matrix[i][0]==0&&matrix[i][1]==0)
    combinations[0]=true;
if(matrix[i][2]==0&&matrix[i][3]==0)
    combinations[1]=true;
    if(matrix[i][0]==0&&matrix[i][2]==0)
    combinations[2]=true;
    if(matrix[i][1]==0&&matrix[i][3]==0)
    combinations[3]=true;
    if(matrix[i][0]==0&&matrix[i][3]==0)
    combinations[4]=true;
    if(matrix[i][1]==0&&matrix[i][2]==0)
    combinations[5]=true;
}
for(i=0;i<=4;i+=2)
    if(combinations[i]&&combinations[i+1])
{cout<<"YES";
    return 0;
}

}

 cout<<"NO";

}


}



