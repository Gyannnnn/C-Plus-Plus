#include <iostream>
using namespace std;

int main() {
    // Initialize a pair of integers
    pair<int, int> p = {1, 3};
    
    // Read input values into the pair
    cin >> p.first >> p.second;
    
    // Output the values of the pair
    cout << p.first << " " << p.second;
    
    return 0;
}
