
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;

int inf = 1e9;
 
int main()
{

    ll n, amount;

    cin >> n >> amount;

    vector<int> coins(n);
    vector<int> numberOfCoins(amount + 1, inf);

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    numberOfCoins[0] = 0;

    for (int value = 0; value <= amount; value++)
    {
        for (int i = 0; i < n; i++)
        {
            if(value - coins[i] >= 0)
            {
                numberOfCoins[value] = min(numberOfCoins[value], numberOfCoins[value - coins[i]] + 1);
            }
        }
        
    }

    cout << (numberOfCoins[amount] == inf ? -1 : numberOfCoins[amount]) << endl;
    
    return 0;
 
}