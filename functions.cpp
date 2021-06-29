#include <iostream>
using namespace std;

bool check(int a);

int main() 
{
    int a, i;
    bool x = false;
    cout << "Enter a positive  integer: ";
    cin >> a;
    for(i = 2; i <= a/2; ++i) 
    {
        if (check(i)) 
        {
            if (check(a - i)) 
            {
                cout << a << " = " << i << " + " << a-i << endl;
                x = true;
            }
        }
    }
    if (!x)
      cout << a << " can't be expressed";
    return 0;
}

bool check(int n)
{
    int i;
    bool prime = true;
    if (n == 0 || n == 1) 
    {
        prime = false;
    }
    else 
    {
        for(i = 2; i <= n/2; ++i) 
        {
            if(n % i == 0) 
            {
                prime = false;
                break;
            }
        }
    }

    return prime;
}
