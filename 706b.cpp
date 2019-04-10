#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; ++i)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
  
    int q;
    cin >> q;
    while(q > 0)
    {
        long long money;
        cin >> money;
        int h = 0, t = vec.size()-1;//head, tail
        if(money < vec[h])
        {
            cout << 0 << endl;
        }
        else if(money >= vec[t])
        {
            cout << n << endl;
        }
        else
        {
            while(1)
            {
                int m = (h + t)/2;
                if(vec[m] == money)
                {
                    int temp = t;
                    while(1)
                    {
                        ++m;
                        --temp;
                        if(vec[m] != money)
                        {
                            cout << m << endl;
                            break;
                        }
                        if(vec[temp] == money)
                        {
                            cout << temp+1 << endl;
                            break;
                        }
                    }
                    break;
                }
                else if(vec[m] < money)
                {
                    h = m;
                }
                else if(vec[m] > money)
                {
                    t = m;
                }
                if(t-h == 1)
                {
                    cout << t << endl;
                    break;
                }
            }

        }

        --q;
    }
    return 0;
}
