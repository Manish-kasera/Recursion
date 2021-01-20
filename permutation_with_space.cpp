#include <iostream>
using namespace std;
#define llint long long int

/*

i/p   "ABC"  -->   o/p   "A_B_C"   "A_BC"    "AB_C"    "ABC"
 
*/

void permutation_with_space(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << " ";
        return;
    }

    // string op1 = op + "_" + ip[0];
    // string op2 = op + ip[0];

    string op1 = op;
    string op2 = op;

    op1.push_back('_');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);

    ip.erase(ip.begin() + 0);

    permutation_with_space(ip, op1);
    permutation_with_space(ip, op2);
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        string ip;
        cin >> ip;
        string op = " ";

        op.push_back(ip[0]);
        ip.erase(ip.begin() + 0);

        permutation_with_space(ip, op);
        cout << endl;
    }
    return 0;
}