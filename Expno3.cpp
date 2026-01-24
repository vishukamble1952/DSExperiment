#include <iostream>
using namespace std;

int main() {
    int n, choice, key;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n1. Linear Search";
    cout << "\n2. Binary Search";
    cout << "\n3. Bubble Sort";
    cout << "\n4. Insertion Sort";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {

    case 1: // Linear Search
        cout << "Enter element to search: ";
        cin >> key;
        for (int i = 0; i < n; i++) {
            if (a[i] == key) {
                cout << "Found at position " << i + 1;
                return 0;
            }
        }
        cout << "Not Found";
        break;

    case 2: // Binary Search (array must be sorted)
        cout << "Enter element to search: ";
        cin >> key;
        int beg = 0, end = n - 1, mid;
        while (beg <= end) {
            mid = (beg + end) / 2;
            if (a[mid] == key) {
                cout << "Found at position " << mid + 1;
                return 0;
            }
            else if (a[mid] > key)
                end = mid - 1;
            else
                beg = mid + 1;
        }
        cout << "Not Found";
        break;

    case 3: // Bubble Sort
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n - 1; j++)
                if (a[j] > a[j + 1])
                    swap(a[j], a[j + 1]);

        cout << "Sorted Array: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        break;

    case 4: // Insertion Sort
        for (int i = 1; i < n; i++) {
            key = a[i];
            int j = i - 1;
            while (j >= 0 && a[j] > key) {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = key;
        }

        cout << "Sorted Array: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        break;

    default:
        cout << "Invalid Choice";
    }

    return 0;
}
