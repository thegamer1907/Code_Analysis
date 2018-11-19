/**OOO**/
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;

    float ss=(float)s/5;
    float mm=(float)m/5;
    //cout<<mm<<" "<<ss<<endl;

    h=h*30;
    m=ceil(mm*30);//(m/5)*30;
    s=ceil(ss*30);//(s/5)*30;
    t1=t1*30;
    t2=t2*30;


//    printf("h = %d\n",h);
//    printf("m= %d\n",m);
//    printf("s= %d\n",s);
//    printf("t1= %d\n",t1);
//    printf("t2= %d\n",t2);
//    cout<<endl;


    int temp1=t1;
    int temp2=t2;

    //here both are forwarding way
    int f=0;
    if(h==360)h=0;
    if(m==360)m=0;
    if(s==360)s=0;
    while(1)
    {
        if(t1!=t2 && t1==360)t1=0;
        if((t1==h || t1==m || t1==s) && (t1==t2)){
            cout<<"yes"<<endl;//yes 1
            break;
        }
        else if((t1==h || t1==m || t1==s) && (t1!=t2))
        {
            f=1;
            break;
        }
        else if(t1==t2)
        {
            cout<<"yes"<<endl;//yes2
            break;
        }
        else{
            t1=t1+2;
        }
        //printf("t1= %d\n",t1);

    }


    if(f==1)
    {
        //as temp1 = t1;
        t2=temp1;
        t1=temp2;
        //cout<<t1<<" "<<t2<<endl;

        if(h==360)h=0;
        if(m==360)m=0;
        if(s==360)s=0;
        while(1)
        {
            if(t1!=t2 && t1==360)t1=0;
            if((t1==h || t1==m || t1==s) && (t1==t2)){
                cout<<"yes"<<endl;//yes3
                break;
            }
            else if((t1==h || t1==m || t1==s) && (t1!=t2))
            {
                cout<<"no"<<endl;
                break;
            }
            else if(t1==t2)
            {
                cout<<"yes"<<endl;//yes4
                break;
            }
            else{
                t1=t1+2;
            }

            //printf("t1= %d\n",t1);
        }
    }


return 0;
}


