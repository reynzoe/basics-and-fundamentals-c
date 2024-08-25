#include <iostream>
using namespace std;

int main() {
    int firstArray[10], secondArray[10], combinedArray[20];
    int countFirst, countSecond, totalCount;

    cout << "Enter the number of elements for the first array (max 10): ";
    cin >> countFirst;

    if (countFirst > 10) {
        cout << "Number of elements exceeds the maximum size of 10.\n";
        return 1;
    }

    cout << "Enter the elements for the first array: ";
    for (int i = 0; i < countFirst; i++) {
        cin >> firstArray[i];
    }

    cout << "Enter the number of elements for the second array (max 10): ";
    cin >> countSecond;

    if (countSecond > 10) {
        cout << "Number of elements exceeds the maximum size of 10.\n";
        return 1;
    }

    cout << "Enter the elements for the second array: ";
    for (int i = 0; i < countSecond; i++) {
        cin >> secondArray[i];
    }

    totalCount = countFirst + countSecond;
    for (int i = 0; i < countFirst; i++) {
        combinedArray[i] = firstArray[i];
    }
    for (int i = 0; i < countSecond; i++) {
        combinedArray[countFirst + i] = secondArray[i];
    }

    for (int i = 0; i < totalCount - 1; i++) {
        for (int j = i + 1; j < totalCount; j++) {
            if (combinedArray[i] < combinedArray[j]) {
                int temp = combinedArray[i];
                combinedArray[i] = combinedArray[j];
                combinedArray[j] = temp;
            }
        }
    }

    cout << "The combined array in descending order is: ";
    for (int i = 0; i < totalCount; i++) {
        cout << combinedArray[i] << " ";
    }
    cout << endl;

    return 0;
}
