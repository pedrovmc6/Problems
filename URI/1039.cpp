#include <bits/stdc++.h>

using namespace std;

struct point
{
    double x,y;
};

double r1,r2,d,a,b,z,res;
point p1,p2;

int main()
{
    while(cin >> r1 >> p1.x >> p1.y >> r2 >> p2.x >> p2.y)
    {
        int x,y;

        if(p1.x >= p2.x)a = p1.x - p2.x;
        else a = p2.x - p1.x;

        if(p1.y >= p2.y)b = p1.y - p2.y;
        else b = p2.y - p1.y;
        
        z = (a*a)+(b*b);

        d = sqrt(z);
        res = d+r2;
        
        if(res <= r1)cout << "RICO\n";
        else cout << "MORTO\n";
    }

    return 0;
}
