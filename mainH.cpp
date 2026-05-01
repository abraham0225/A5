#include "heap.h"
#include <fstream>
#include <sstream>

int main() {
    HEAP h(100);

    ifstream file("inst.txt");

    if (!file) {
        cout << "Error opening file" << endl;
        return 1;
    }

    int command;

    while (file >> command) {
        if (command == 0) {
            cout << "Exiting program" << endl;
            break;
        }

        else if (command == 1) {
            int value;
            file >> value;
            cout << "Insert: " << value << endl;
            h.insertH(value);
        }

        else if (command == 2) {
            cout << "Delete Max" << endl;
            h.deleteMax();
        }

        else if (command == 3) {
            int value;
            file >> value;
            cout << "Delete: " << value << endl;
            h.deleteH(value);
        }

        else if (command == 4) {
            cout << "Peek: " << h.peek() << endl;
        }

        else if (command == 5) {
            int oldVal, newVal;
            file >> oldVal >> newVal;
            cout << "Replace " << oldVal << " with " << newVal << endl;
            h.replace(oldVal, newVal);
        }

        else if (command == 6) {
            cout << "Switch Min/Max Heap" << endl;
            h.switchMinMax();
        }

        else if (command == 7) {
            int arr[] = {28, 77, 48, 52, 59, 91, 28, 76};
            int n = 8;

            cout << "Heap Sort:" << endl;
            h.heapSort(arr, n);

            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }

            cout << endl;
        }

        else if (command == 8) {
            cout << "Current Heap:" << endl;
            h.printHeap(0, 0);
        }

        cout << "-------------------" << endl;
    }

    file.close();
    return 0;
}