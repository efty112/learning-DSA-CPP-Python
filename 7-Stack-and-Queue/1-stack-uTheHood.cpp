#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int arr[100];

public:
    Stack() { top = -1; }

    void push(int x)
    {
        if (top >= 99) {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
        cout << "Pushed " << x << " to stack\n";
    }

    int pop()
    {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return 0;
        }
        return arr[top--];
    }

    int topp()
    {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[top];
    }

    int size(){
        return top+1;
    }

};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element is: " << s.topp() << endl;
    
    return 0;
}