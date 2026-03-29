// Complete the following program.
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // TODO: declare variable n for the exponent input
    double n, num;
    cin >> n; 
    num = 1.0;
    
    if (n >= 0){
        for (int i = 0; i < n; i++){
            num = num * 2;
        }
    }
    else{
        for (int i = n; i < 0; i++){
            num = num * 2;
        }
        num = 1 / num;
    }
    cout << setprecision(5) << fixed; 
    cout << "2 to Power " << n << " is " << num << endl;
    // TODO: read n from standard input

    // TODO: compute 2 to the power of n using a loop (no cmath pow)
    // For positive n: multiply result by 2, n times
    // For negative n: divide result by 2, |n| times

}
