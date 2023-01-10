 
#include <bits/stdc++.h>
 
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if(a.second < b.second) return true;
    else return false;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, a , b;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), cmp);

    // for(auto x : v) cout << x.first << " " << x.second << endl;

    int count = 1, mn = v[0].second;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if(mn <= v[i + 1].first)
        {
            count++;
            mn = v[i + 1].second;
        } 
    }

    cout << count << endl;

    return 0;
 
}