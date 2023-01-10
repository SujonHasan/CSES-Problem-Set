/*
    ***Bismillahir Rahmanir Rahim***
    date---: "26-07-2022"
    time---: "11-06-11"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, x;
    cin >> n >> x;

    vector<int> v(n);

    for(auto &x : v) cin >> x;

    sort(v.begin(), v.end());

    int count = 0, i = 0, j = n - 1;

    while (i <= j)
    {
        if(v[i] + v[j] <= x)
        {
            j--;
            i++;
            count++;
        }
        else
        {
            j--;
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
 
}