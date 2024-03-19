#include <iostream>
#include <vector>

using namespace std;

// Function to find the maximum element in a vector
int findMax(vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    // Example usage of the findMax function
    vector<int> numbers = {3, 7, 2, 8, 1, 5, 9};
    int maxNumber = findMax(numbers);
    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}
