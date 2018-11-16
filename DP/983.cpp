
/*Skip to content

    Features
    Business
    Explore
    Marketplace
    Pricing

Sign in or Sign up

11
55

    46

fuwutu/CodeForces
Code
Issues 0
Pull requests 2
Projects 0
Insights
Join GitHub today

GitHub is home to over 28 million developers working together to host and review code, manage projects, and build software together.
CodeForces/327A - Flipping Game.cpp
c2a9925 on Jul 13, 2013
@fuwutu fuwutu Create 327A - Flipping Game.cpp
33 lines (30 sloc) 627 Bytes
//4057739   Jul 13, 2013 7:54:54 AM	fuwutu	 327A - Flipping Game	 GNU C++0x	Accepted	15 ms	0 KB*/
#include <iostream>

using namespace std;

int main()
{
    int n, a, count1(0), extra0(0), extra0max(-1);
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 1)
        {
            count1 += 1;
            if (extra0 > 0)
            {
                extra0 -= 1;
            }
        }
        else
        {
            extra0 += 1;
            if (extra0 > extra0max)
            {
                extra0max = extra0;
            }
        }
    }
    cout << count1 + extra0max << endl;
    return 0;
}

  /*  © 2018 GitHub, Inc.
    Terms
    Privacy
    Security
    Status
    Help

    Contact GitHub
    Pricing
    API
    Training
    Blog
    About

Press h to open a hovercard with more details.*/
