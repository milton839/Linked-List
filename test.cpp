#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 10};

    unordered_set<int> seen;

    for (int i = 0; i < 5; i++)
    {
        seen.insert(arr[i]);
    }

    cout << seen.count(arr[0]);

    return 0;
}