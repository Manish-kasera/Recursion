#include <iostream>
#include <vector>
using namespace std;
#define llint long long int

vector<int> put(vector<int> v, int key)
{
    int size = v.size();

    if (size == 0 || v[size - 1] <= key)
    {
        v.push_back(key);
        return v;
    }
    int val = v[size - 1];
    v.pop_back();
    v = put(v, key);
    v.push_back(val);
    return v;
}

vector<int> sort(vector<int> v)
{
    int size = v.size();

    if (size == 1)
    {
        return v;
    }

    int lastNum = v[size - 1];
    v.pop_back();

    v = sort(v);

    return v = put(v, lastNum);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;

    int size;
    cin >> size;

    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }

    v = sort(v);

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}