#include <iostream>
using namespace std;
#define llint long long int

size_t factorial(int num)
{
    if (num == 1) // Base Condition
    {
        return 1;
    }
    else{
        return (num*factorial(num-1));  // Induction
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  //testCase
    cin >> t;

    while (t--)
    {
        int num; //any number
        cin >> num;
        size_t fact = factorial(num);  //function for calculating factorial
        cout << fact << endl;
    }

    return 0;
}