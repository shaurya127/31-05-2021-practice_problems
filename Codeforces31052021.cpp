#include <bits/stdc++.h>
using namespace std;

void Beta22A()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[0])
        {
            cout << arr[i];
            return;
        }
    }
    cout << "NO";
}

void Beta23A()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<string> res;
    string temp;
    for (int i = 0; i < n; i++)
    {
        temp = "";
        for (int j = i; j < n; j++)
        {
            temp += s[j];
            res.push_back(temp);
        }
    }
    int result = 0;
    sort(res.begin(), res.end());
    reverse(res.begin(), res.end());
    for (int i = 1; i < res.size(); i++)
    {
        if (res[i] == res[i - 1])
        {
            result = max(result, (int)res[i].length());
        }
    }
    cout << result;
}

void Beta25A()
{
    int n;
    cin >> n;
    int arr[n];
    int even = 0, odd = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    // cout << even << " " << odd;
    if (even == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                cout << i;
                return;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] % 2 == 1)
            {
                cout << i;
                return;
            }
        }
    }
}

void Beta26A()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int t = i;
        int c = 0;
        for (int j = 2; j <= t; j++)
        {
            if (t % j == 0)
            {
                c++;
                while (t % j == 0)
                {
                    t /= j;
                }
            }
        }
        if (c == 2)
        {
            count++;
        }
    }
    cout << count;
}

void Beta27A()
{
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (int i = 1; i <= 3001; i++)
    {
        if (mp.find(i) == mp.end())
        {
            cout << i;
            return;
        }
    }
}

void Beta30A()
{
    int a, b, n;
    cin >> a >> b >> n;
    for (int x = 0; x <= 1100; x++)
    {
        if (a * pow(x, n) == b)
        {
            cout << x;
            return;
        }
    }
    for (int x = -1; x >= -50; x--)
    {
        if (a * pow(x, n) == b)
        {
            cout << x;
            return;
        }
    }
    cout << "No solution";
}

void Beta31A()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            for (int k = 0; k < n; k++)
            {
                if (i == k || j == k)
                    continue;
                if (arr[i] == arr[k] + arr[j])
                {
                    cout << i + 1 << " " << j + 1 << " " << k + 1;
                    return;
                }
            }
        }
    }
    cout << -1;
}

int main()
{
    // Beta22A();
    // Beta23A();
    // Beta25A();
    // Beta26A();
    // Beta27A();
    // Beta30A();
    Beta31A();
}