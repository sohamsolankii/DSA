#include<bits/stdc++.h> // max heap using array
using namespace std;

class heap{
    public:
    int arr[100];
    int size = 0;

    void insert(int val){

        size++;
        int idx = size;
        arr[idx] = val;

        while (idx > 1){
            int parent = idx / 2;
            if(arr[parent] < arr[idx]){
                swap(arr[idx] , arr[parent]);
                idx = parent;
            }
            else return;
        }
    }

    void deletee(){
        if(size == 0){
            cout << "nothing to delete" << endl;
            return;
        }


        arr[1] = arr[size];
        size--;

        // take root node to it correct possion
        int i = 1;
        while(i < size){
            int leftIdx = 2 * i;
            int rightIdx = 2 * i + 1;

            if(leftIdx < size and arr[i] < arr[leftIdx]){
                swap(arr[i] , arr[leftIdx]);
                i = leftIdx;
            }
            else if(rightIdx < size and arr[i] < arr[rightIdx]){
                swap(arr[i] , arr[rightIdx]);
                i = rightIdx;
            }
            else return;
            
        }
    }

    void print(){
        for(int i = 1; i <= size ; i++){
            cout << arr[i] << " ";
        }cout << endl;
    }

};

// convert array into max heap (log n)  --- min heap mate only less than ne greater than ma convert krva nu
void heapify(int arr[], int n ,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left <= n and arr[i] < arr[left]){
        largest = left;
    }
    if(right <= n and arr[i] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest] , arr[i]);
        heapify(arr, n , largest);
    }
}

// TC (nlogn)
void heapsort(int arr[], int n){
    int size = n;

    while(size > 1){
        swap(arr[size], arr[1]);
        size--;

        heapify(arr,size,1);
    }
}
    
signed main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    // h.print();

    // h.deletee();
    // h.print();

    // hepify algorithum
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    // for(int i = n/2; i > 0 ;i--){
    //     heapify(arr, n , i);
    // }

    // for(auto i = 1; i <= n ; i++) cout << arr[i] << " ";
    // cout << endl;
 
    heapsort(arr,n);
    for(auto i = 1; i <= n ; i++) cout << arr[i] << " ";


    priority_queue<int, vector<int>, greater<int>> pq;

    
    return 0;
}


/*
            55                                                           50
        54        53                                            55                  53
    50      52                                               52         54

    55 54 53 50 52


      54 
     52  53
    50
*/