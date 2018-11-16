#include<stdio.h>
int main()
{
int n,m,i,j,temp,c=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&m);
int b[m];
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=1; i<n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
for(i=1; i<m; i++)
    {
        for(j=0; j<m-i; j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }

for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{if(b[j]!=0)
{if(a[i]==b[j])
{c=c+1;
b[j]=0;
break;
}
else if(a[i]-1==b[j])
{c=c+1;
b[j]=0;
break;
}
else if(a[i]+1==b[j])
{c=c+1;
b[j]=0;
break;

}

}



}


}
printf("%d",c);
}



