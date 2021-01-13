#include <iostream>
using namespace std;
#define llint long long int

void print_1_n(int num)
{
    if (num == 1)  //Base Condition
    {
        cout << "1" << " ";
    }
    else
    {
        print_1_n(num - 1); //Induction
        cout << num << " ";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        print_1_n(n);
        cout<<endl;
    }

    return 0;
}