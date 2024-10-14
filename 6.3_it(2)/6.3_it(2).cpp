// використовуючи шаблони функцій для реалізації універсального алгоритму

#include <iostream>

using namespace std;

template <typename T>
void InputArray(T* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter element [" << i << "]: ";
        cin >> a[i];
    }
}

template <typename T>
void PrintArray(T* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i];
        if (i < size - 1)
            cout << ", ";
    }
    cout << endl;
}

template <typename T>
int CountNegativeTemplate(T* a, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            count++;
        }
    }
    return count;
}

template <typename T>
void ModifyNegativeElementsTemplate(T* a, const int size) {
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

    int negativeCount = CountNegativeTemplate(a, size);
    cout << "Number of negative elements: " << negativeCount << endl;

    ModifyNegativeElementsTemplate(a, size);

    cout << "Modified array: ";
    PrintArray(a, size);

    return 0;
}
