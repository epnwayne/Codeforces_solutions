#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int t = 0;
    int cur = 1, test = 0;
    while(t < k)
    {
        test = 0;
        int curr = cur;
        while(1)
        {
            test += curr % 10;
            if(curr / 10 == 0)
                break;
            else
                curr /= 10;
        }
        if(test <= 10)
            ++t;
        ++cur;
    }
    cout << (cur-1)*10+10-test << endl;

    return 0;
}
