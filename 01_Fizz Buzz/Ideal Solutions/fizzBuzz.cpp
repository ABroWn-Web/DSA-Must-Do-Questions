#include <bits/stdc++.h>
using namespace std;

void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        string output = "";

        if (i % 3 == 0) output += "Fizz";
        if (i % 5 == 0) output += "Buzz";

        if (output.empty()) 
            cout << i;
        else 
            cout << output;

        cout << endl;
    }
}

int main() {
    int n = 10;
    fizzBuzz(n);
    return 0;
}
