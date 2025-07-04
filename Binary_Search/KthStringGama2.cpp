#include <iostream>
#include <vector>
using namespace std;

char kthCharacter(long long k, vector<int>& operations) {
    int c = 0;
    k--;          // Making it to 0-based
    for (int i = 0; k != 0; i++, k >>= 1) {
        // If the ith bit in k is set and operations[i] is 1, increment c
        c += ((k & 1) & operations[i]);
    }
    return (char)((c % 26) + 'a');
}

int main() {
    long long k = 5;
    vector<int> operations = {1, 0, 1}; 

    /*

    binary of k-1 = 4 = 100, operations = {1, 0, 1}
    Check bits from LSB to MSB:
    bit 0: 0 & 1 = 0
    bit 1: 0 & 0 = 0
    bit 2: 1 & 1 = 1 => c = 1
    result: (1 % 26) + 'a' = 'b'/

    */
   

    char result = kthCharacter(k, operations);
    cout << "The result is: " << result << endl;               // Output: b

    return 0;
}
