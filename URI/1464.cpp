#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e3+10;

struct point
{
    int x,y;

    bool operator< (point b)const
    {
        if(x!=b.x)return x<b.x;
        return y<b.y;
    }

    point operator- (point b)const
    {
        point ans;
        ans.x = x - b.x;
        ans.y = y - b.y;
        return ans;
    }
};

bool flag = true;
int n,cont;
int mark[maxn];
vector<point> v;
vector<int> up,down;

long long cross(point a , point b , point c)
{
    point p1 = b-a;
    point p2 = c-a;

    return (p1.x*p2.y)-(p1.y*p2.x);
}

int main()
{
    while(true)
    {
        cin >> n;
        if(n == 0)break;

        for(int i = 0 ; i < n ; ++i)
        {
            int a,b;
            cin >> a >> b;
            v.push_back({a,b});
        }

        sort(v.begin(),v.end());

        while(flag)
        {
            for(int i = 0 ; i < n ;++i)
            {
                if(mark[i])continue;

                while(up.size() > 1 && cross(v[up[up.size()-2]] , v[up[up.size()-1]] , v[i]) > 0)up.pop_back();

                up.push_back(i);

                while(down.size() > 1 && cross(v[down[down.size()-2]] , v[down[down.size()-1]] , v[i]) < 0)down.pop_back();

                down.push_back(i);
            }

            for(int i = 0 ; i < (int)up.size() ; ++i)mark[up[i]] = 1;

            for(int i = 0 ; i < (int)down.size() ; ++i)mark[down[i]] = 1;

            cont++;

            flag = false;

            for(int i = 0 ; i < n ; ++i) if(!mark[i])flag = true;

            down.clear();
            up.clear();
        }

        if(cont%2 == 1)cout << "Take this onion to the lab!\n";
        else if(cont%2 == 0)cout << "Do not take this onion to the lab!\n";

        memset(mark,0,sizeof(mark));
        cont = 0;
        v.clear();
        up.clear();
        down.clear();
        flag = true;
    }

    return 0;
}
