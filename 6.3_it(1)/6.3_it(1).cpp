// за допомогою звичайних функцій

#include <iostream>

using namespace std;

void InputArray(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter element [" << i << "]: ";
        cin >> a[i];
    }
}

void PrintArray(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << endl;
}

int CountNegative(int* a, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            count++;
        }
    }
    return count;
}

void ModifyNegativeElements(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            a[i] = -a[i];
        }
    }
}

int main() {
    const int size = 6;
    int a[size] = { -5, 3, -1, 7, -6, 2 };

    cout << "Initial array: ";
    PrintArray(a, size);

    int negativeCount = CountNegative(a, size);
    cout << "Number of negative elements: " << negativeCount << endl;

    ModifyNegativeElements(a, size);

    cout << "Modified array: ";
    PrintArray(a, size);

    return 0;
}
