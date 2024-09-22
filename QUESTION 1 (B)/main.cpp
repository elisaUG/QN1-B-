#include <iostream>
using namespace std;

int main() {
    float sum = 0;

    // Loop through the series and calculate the sum
    for (int numerator = 1, denominator = 3; numerator <= 95; numerator += 2, denominator += 2) {
        sum += static_cast<float>(numerator) / denominator;
    }

    // Output the result
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}

