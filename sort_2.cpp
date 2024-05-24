#include <bits/stdc++.h>
using namespace std;
int *sort_it(int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{

    int n;
    cin >> n;
    int *a = sort_it(n);
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}