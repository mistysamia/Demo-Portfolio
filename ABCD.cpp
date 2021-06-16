#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <stack>
#include <cstdio>
#include <cmath>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> VI;
typedef vector<ld> VD;
typedef vector<VI> VVI;

#define MAXN 1e9

ll n;
string res;
vector<char> l = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
ll counts[10];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    ll sum = 1;
    int index = 0;
    for(int i=0;i<1000;i++)
        counts[i]=10;
    while (sum < n)
    {
        sum /= counts[index];
        counts[index]++;
        sum *= counts[index];

        index++;
        if (index == 10)
            index = 0;
    }

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < counts[i]; j++)
            cout << l[i];
    cout << endl;

    return 0;
}
