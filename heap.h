#ifndef HEAP_H
#define HEAP_H

#include <iostream>
using namespace std;

class HEAP 
{
    private:
        int* array;
        int capacity;
        int heapSize;

        int leftChild(int index);
        int rightChild(int index);
        int parent(int index);

        void heapifyUp(int index);
        void heapifyDown(int index);
        void heapifyDownMin(int index);

    public:
        HEAP(int size);
        ~HEAP();

        void buildH(int arr[], int n);
        void insertH(int data);
        void deleteMax();
        void deleteH(int data);
        int peek();

        void replace(int oldData, int newData);
        void heapSort(int arr[], int n);

        void switchMinMax();
        void printHeap(int index, int depth);
};

#endif