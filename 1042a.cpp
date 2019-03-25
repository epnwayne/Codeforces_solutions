#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int>  sit(n);
    int maxp = 0;//max people
    for(int i = 0; i < sit.size(); ++i)
    {
        cin >> sit[i];
        maxp = max(maxp, sit[i]);
    }
    int d = 0;
    for(auto a: sit)
    {
        if(a != maxp)
        {
            d += (maxp-a);
        }
    }
    int maxpp = maxp;
    int addi = m;//additional people
    addi -= d;
    while(addi > 0)
    {
        ++maxpp;
        addi -= n;
    }
    
    cout << maxpp << " " << m+maxp << endl;
    return 0;
}