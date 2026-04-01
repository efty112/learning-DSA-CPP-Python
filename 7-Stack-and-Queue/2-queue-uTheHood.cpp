#include <iostream>
using namespace std;

#define MAX_SIZE 4

class Queue {
public:
    int start;
    int end;
    int arr[MAX_SIZE];
    int currentSize;

    Queue(): start(-1), end(-1), currentSize(0) {}

    int topp()
    {
        if (currentSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[start];
    }

    void push(int val)
    {
        if (currentSize == MAX_SIZE) {
            cout << "Queue is full | Can't be pushed" << endl;
            return;
        }

        if (currentSize == 0){
            start=0;
            end=0;
        } else{
            end = (end+1)%MAX_SIZE;
        }

        arr[end] = val;
        currentSize++;
    }

    int pop()
    {
        if (currentSize == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int element = arr[start];

        if(currentSize == 1){
            start = end = -1;
        } else{
            start = (start+1) % MAX_SIZE;
        }
        currentSize--;
        return element;
    }

    int size(){
        return currentSize;
    }
};

int main()
{
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Top element: " << q.topp() << endl;

    cout << "Pop element: " << q.pop() << endl;
    cout << "Pop element: " << q.pop() << endl;

    q.push(4);
    cout << "Top element: " << q.topp() << endl;
    
    cout << "Pop element: " << q.pop() << endl;

    cout << "Top element: " << q.topp() << endl;

    return 0;
}