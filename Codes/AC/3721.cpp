/* *******************************
    -----------------------------
   | copyrights with l0gic_b0mb  |
    -----------------------------
   ******************************* */

#include<bits/stdc++.h>
#define MOD 1000000007
#define llint long long int
#define max(a,b) (a>=b?a:b)
#define min(a,b) (a<=b?a:b)
using namespace std;

string formula;
llint initialB,initialC,initialS,costB,costC,costS,amount,requiredB,requiredC,requiredS;

void preprocess()
{
    for(int i=0;i<formula.size();i++)
    {
        if(formula[i]=='B') requiredB++;
        else if(formula[i]=='C') requiredC++;
        else requiredS++;
    }
    return;
}


bool can_make(llint mid)
{
    llint B,S,C;
    B=max(0,requiredB*mid-initialB);
    C=max(0,requiredC*mid-initialC);
    S=max(0,requiredS*mid-initialS);
    if(B*costB+C*costC+S*costS<=amount)
        return true;
    return false;
}

int main()
{
    cin>>formula;
    preprocess();
    cin>>initialB>>initialS>>initialC;
    cin>>costB>>costS>>costC;
    cin>>amount;
    llint low=0,high=10e12,mid,sure=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(can_make(mid))
        {
            sure=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<sure<<endl;
    return 0;
}

/* Hidden within the kernel is a l0gic_b0mb; malicious code designed to execute under circumstances I've programmed. */
