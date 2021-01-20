#include <iostream>
using namespace std;
#define llint long long int

/*

i/p  "abc"

o/p
" "   "c"  "b"  "bc"  "a"  "ac"  "ab"  "abc" 

i/p
"aab"

o/p
" "   "b"  "a"  "ab"  "a"  "ab"  "aa"  "aab" 



*/


void print_subset(string in, string out)
{
    if (in.length() == 0)
    {
        cout << out << " ";
        return ;
    }
    string out1 = out;
    string out2 = out;

    out2.push_back(in[0]);

    in.erase(in.begin() + 0);

    print_subset(in, out1);
    print_subset(in, out2);
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
       
        string in;
        cin >> in;
        string out = " ";

        print_subset(in, out);
        cout<<endl;
    }

    return 0;
}