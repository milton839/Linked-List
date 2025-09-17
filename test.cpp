#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
    int arr[5] = {10, 20, 20, 40, 10};

    unordered_set<int> seen;
    int duplicate = 0;
    for (int i = 0; i < 5; i++)
    {
        
        if (seen.count(arr[i]))
        {
            duplicate++;
        }
        seen.insert(arr[i]);
    }
    cout<<duplicate<<endl;

    return 0;
}