#include <iostream>
using namespace std;
#include <set>
#define llint long long int


/*

 ip   "aab" ---->  " "   "a"  "aa"   "aab"    "ab"    "b"
*/

set<string> s;

set<string> unique_subset(string ip, string op)
{


    if (ip.length() == 0)
    {
        // cout << op << " ";
        s.insert(op);
        return s;
    }

    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);

    ip.erase(ip.begin() + 0);

    unique_subset(ip, op1);
    unique_subset(ip, op2);
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string ip = "aab";

    string op = " ";

    set<string> s1;
    s1 = unique_subset(ip, op);
    for (auto x : s1)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}