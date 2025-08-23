#include <bits/stdc++.h>
using namespace std;

void fun(int  *&v)
{
    cout << &v << endl;
    v = NULL;
    cout << &v << endl;
}

int main()
{
    int val = 10;
    int *ptr = &val;
    cout << ptr << endl;
    fun(ptr);
    cout << ptr << endl;
    cout << ptr << endl;
    return 0;
}