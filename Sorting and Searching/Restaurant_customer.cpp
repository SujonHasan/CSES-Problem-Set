/*
    ***Bismillahir Rahmanir Rahim***
    date---: "01-08-2022"
    time---: "12-36-40"
    Author-: Sujon Hasan
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, a , b;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }

    sort(v.begin(), v.end());
    int mx = 0, count = 0;

    for (int i = 0; i < v.size(); i++)
    {
        count += v[i].second;

        mx = max(mx, count);
    }
    
    cout << mx << endl;

    return 0;
 
}