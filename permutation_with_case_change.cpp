#include <iostream>
using namespace std;
#define llint long long int

/*

i/p   "ab"   ---> o/p     "ab"   "AB"   "Ab"   "aB"


*/

void permutatuion_with_case_change(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << " ";
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(ip[0]);


    //op2.push_back(ip[0] - 32);
    op2.push_back(toupper(ip[0]));

    ip.erase(ip.begin() + 0);

    permutatuion_with_case_change(ip, op1);
    permutatuion_with_case_change(ip, op2);
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

        permutatuion_with_case_change(ip, op);
        cout << endl;
    }

    return 0;
}