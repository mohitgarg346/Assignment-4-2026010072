#include <iostream>
using namespace std;
#define MAX 5
int stack[MAX];
int top = -1;
void push()
{
    int value;

    if (top == MAX - 1)
    {
        cout << "Stack Overflow! Stack is Full." << endl;
    }
    else
    {
        cout << "Enter value: ";
        cin >> value;

        top++;
        stack[top] = value;

        cout << "Element pushed successfully." << endl;
    }
}
void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow! Stack is Empty." << endl;
    }
    else
    {
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
}
void isEmpty()
{
    if (top == -1)
        cout << "Stack is Empty." << endl;
    else
        cout << "Stack is Not Empty." << endl;
}
void isFull()
{
    if (top == MAX - 1)
        cout << "Stack is Full." << endl;
    else
        cout << "Stack is Not Full." << endl;
}
void display()
{
    if (top == -1)
    {
        cout << "Stack is Empty." << endl;
    }
    else
    {
        cout << "Stack elements are: ";

        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }

        cout << endl;
    }
}
void peek()
{
    if (top == -1)
    {
        cout << "Stack is Empty." << endl;
    }
    else
    {
        cout << "Top element is: " << stack[top] << endl;
    }
}
int main()
{
    int choice;

    do
    {
        cout << "\n===== STACK MENU =====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. isEmpty" << endl;
        cout << "4. isFull" << endl;
        cout << "5. Display" << endl;
        cout << "6. Peek" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                isEmpty();
                break;

            case 4:
                isFull();
                break;

            case 5:
                display();
                break;

            case 6:
                peek();
                break;

            case 7:
                cout << "Program Ended." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } 
	while (choice != 7);
    return 0;
}
