/*
Been rusting in rubble
Running to a faint
Need a brand new coat of paint
I found myself in trouble
Thinking 'bout what ain't
Never gonna be a saint
Saying float like an eagle
Fall like the rain
Pouring to put out the pain
Oh again and again

Now I'm hyp, hypnotised
Yeah I trip, when I look in your eyes
Oh I'm hyp, hypnotised
Yeah I slip and I'm mesmerized
*/
#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
typedef long long ll;
typedef vector<ll> vll;

int main()
{
    ios::sync_with_stdio(false);
    bool flag = false;
    ll t, n, k, i, j, ans=0, sum, index, index2, index3, m, p;
    cin>>n>>k;
    ll a[n][k];
    for(i=0; i<n; i++)
        for(j=0; j<k; j++)
            cin>>a[i][j];
    

    vll one(40,0), two(120, 0), three(500,0);

    for(i=0; i<n; i++)
    {
        for(j=0; j<k; j++)
            if(a[i][j] == 0)
                one[j]++;
        for(j=0; j<k; j++)
            for(m=j+1; m<k; m++)
                if(a[i][j] == 0 and a[i][m]==0)
                    two[j*k+m]++;
        for(j=0; j<k; j++)
            for(m=j+1; m<k; m++)
                for(p=m+1; p<k; p++)
                    if(a[i][j]+a[i][m]+a[i][p] == 0)
                    {
                        //cout<<"j = "<<j<<"  m = "<<m<<"  p = "<<p<<endl;
                        three[j*k*k + m*k + p]++;
                    }
    }

    /*cout<<"one"<<endl;
    for(i=0; i<4; i++)
        cout<<one[i]<<"   ";
    cout<<endl;

    cout<<"two"<<endl;
    for(i=0; i<12; i++)
        cout<<two[i]<<"   ";
    cout<<endl;

    cout<<"three"<<endl;
    for(i=0; i<50; i++)
        cout<<three[i]<<"   ";
    cout<<endl;*/



    /*cout<<"chalo yaha toh pahuche"<<endl;*/
    for(i=0; i<n; i++)
    {
        //cout<<"i = "<<i<<endl;
        sum = 0;
        for(j=0; j<k; j++)
            sum+=a[i][j];
        //cout<<"sum = "<<sum<<endl;
        if(sum==0)
        {
            flag = true;
            break;
        }
        if(sum==1)
        {
            for(j=0; j<k; j++)
                if(a[i][j] == 1)
                    index = j;
            if(one[index])
            {
                flag = true;
                break;
            }
        }
        if(sum==2)
        {
            for(j=0; j<k; j++)
                if(a[i][j] == 1)
                {
                    index = j;
                    break;
                }
            for(++j; j<k; j++)
                if(a[i][j] == 1)
                    index2 = j;
            //cout<<"index = "<<index<<"   index2 = "<<index2<<endl;
            if(two[index*k+index2])
            {
                flag = true;
                break;
            }
        }
        if(sum==3)
        {
            for(j=0; j<k; j++)
                if(a[i][j] == 1)
                {
                    index = j;
                    break;
                }
            for(++j; j<k; j++)
                if(a[i][j] == 1)
                {
                    index2 = j; 
                    break;  
                }
            for(++j; j<k; j++)
                if(a[i][j] == 1)
                {
                    index3 = j; 
                    break;  
                }
            if(three[k*k*index+index2*k+index3])
            {
                flag = true;
                break;
            }
        }
    }

    if(flag)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}