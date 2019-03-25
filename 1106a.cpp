#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> matrix(n*n);
    
    for(int i = 0; i < n*n; i++)
        cin >> matrix[i];

    int sum = 0;
    for(int i = 1; i < n-1; i++)
        for(int j = 1; j < n-1; j++)
        {
            if(matrix[n*i+j] == 'X')
                if(matrix[n*(i-1) + (j-1)] == 'X' &&
                   matrix[n*(i-1) + (j+1)] == 'X' &&
                   matrix[n*(i+1) + (j-1)] == 'X' &&
                   matrix[n*(i+1) + (j+1)] == 'X')
                        sum += 1;
        }

    cout << sum << endl;
    return 0;
}

