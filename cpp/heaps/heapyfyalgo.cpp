#include<iostream>
using namespace std;

class heap {
public:
    int arr[100];
    int size;

    heap() {
        arr[0] = -1;
        size = 0; 
    }

    void insert(int val) {
        size++;
        int i = size;
        arr[i] = val;

        while(i > 1) {
            int parent = i / 2;
            if(arr[i] > arr[parent]) {
                swap(arr[i], arr[parent]);
                i = parent;
            } else {
                return;
            }
        }
    }

    void print() {
        for(int i = 0 ; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void heapify(int arr[],int n, int i)
    {
        int large = i;
        int left = 2*i;
        int right =  2*i + 1;
        // check the largest element in the child nodes
        if(left<n && arr[large] < arr[left])
        {
            large = left;
        }
        if(right<n&&arr[large] < arr[right])
        {
            large = right;
        }
        // the largest element found we will swap it and again call the function to make our tree heap
        if(large!= i)
        {
            swap(arr[large],arr[i]);
            heapify(arr,n,large);
        }
    }

    void deletetion() {
        if(size == 0) {
            cout << "Nothing to delete" << endl;
            return;
        }

        cout << "Deleted element: " << arr[1] << endl;
        arr[1] = arr[size];
        size--;

        int i = 1;
        while(i <= size) {
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            if(left <= size && arr[left] > arr[largest]) {
                largest = left;
            }
            if(right <= size && arr[right] > arr[largest]) {
                largest = right;
            }

            if(largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                return;
            }
        }
    }
};

int main() {
    heap h;
    h.insert(20);
    h.insert(10);
    h.insert(8);
    h.insert(5);
    h.insert(7);
    h.print();

    h.insert(11);
    h.print();

    h.deletetion();
    h.print();
    int arr[] = {-1,7,8,10,15,6};
    int n = 5;
    for(int i = n/2 ; i> 0;i--)
    {
        h.heapify(arr,n,i);
    }
    for(int i = 0; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
}
