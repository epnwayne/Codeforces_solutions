#include<bits/stdc++.h>
using namespace std;

int Q;
vector<int> digit;
vector<string> num;

int main()
{
    cin >> Q;
    int i = 0;
    //data in
    while(i < Q)
    {
        int m;
        string s;
        cin >> m;
        digit.push_back(m);
        cin >> s;
        num.push_back(s);

        ++i;
    }
    i = 0;
    while(i < Q)
    {
        if(digit[i] <= 1)
            cout << "NO" << endl;
        else if(digit[i] == 2)
        {
            if(num[i][0] < num[i][1])
                cout << "YES\n2\n" << num[i][0] << " " << num[i][1] << endl;
            else
                cout << "NO\n";
        }
        else if(digit[i] >= 3)
        {
            cout << "YES" << endl;
            cout << "2" << endl;
            cout << num[i].substr(0, 1) + " " + num[i].substr(1, digit[i]-1) << endl;
        }

        ++i;
    }
    return 0;    
}
