// Problem :
// shreyx


//Difficulty:
//Concept:

#include<bits/stdc++.h>

using namespace std;

#define nos std::ios::sync_with_stdio(false)              //;cin.tie(0);
#define pf printf
#define sf scanf
#define eps 1e-9
#define mnm(x,y) ((x<y)?x:y)
#define mxm(x,y) ((x<y)?y:x)
#define sgn(x,y)  ((x)+eps<{y}?-1:((x)>eps+{y}?1:0))
#define ins insert
#define clr clear()
#define itt iterator
#define F first
#define S second
#define tfl(typ, it)  for(__typeof(typ.begin()) it = typ.begin(); it != typ.end(); it++)
#define trl(typ, it)  for(__typeof(typ.rbegin()) it = typ.rbegin(); it != typ.rend(); it++)
#define floop(i,val,n) for(i=val;i<n;i++)								// Forward Loop
#define rloop(i,val,n) for(i=val;i>n;i--)								// Reverse Loop
#define mem(x,y) memset(x,(y),sizeof(a))
#define pl(x) printf("%ld\n",x)         // S			        1
#define ps(x) printf("%s\n",x)          //     H                    #
#define sd(x) scanf("%d",&x)            //          R           X
#define pb push_back                    //              E   Y
#define mp make_pair                    //              E   Y
#define MOD 1000000007                  //          R           X
#define INF 1000000000000000000         //     H                    #
#define PI acos(-1.0)                   // S                            1
#define EO(x) (X & 1 ? 0 : 1)

// shreyx#1

int main()
{
    int n,i,flag1=0,flag2=0;

    char pass[3];
    char c[100][3];
    sf("%s",pass);
    sf("%d",&n);
    for(i=0;i<n;i++)
        sf("%s",c[i]);
    for(i=0;i<n;i++)
    {
        if(c[i][0]==pass[0] && c[i][1]==pass[1])
        {
            printf("YES\n");
            return 0;
        }

        else if(c[i][1]==pass[0])
        {
            if(c[i][0]==pass[1])
            {
                printf("YES\n");
                return 0;
            }
            else if(!flag1)
                flag1=1;
        }
        else if(!flag2 && c[i][0]==pass[1])
        {
            flag2=1;
        }
        if(flag1 && flag2)
        {
            printf("YES\n");
            return 0;
        }
    }
        printf("NO\n");
            return 0;
    return 0;
}
                                                                                    // shreyx#1
                                                                                            //112358
                                                                            //CYGNUS_X1
                                                                                            //2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 91 97
                                                                                    //SUPERPRIME
