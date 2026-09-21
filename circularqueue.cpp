#include <iostream>
using namespace std;
#define SIZE 5
int cq[SIZE];
int front = -1, rear = -1;
bool isEmpty()
{
    return front == -1;
}
bool isFull()
{
    return (rear + 1) % SIZE == front;
}
void enqueue(int value)
{
    if (isFull())
    {
        cout << "Queue is Full\n";
        return;
    }

    if (front == -1)
        front = 0;

    rear = (rear + 1) % SIZE;
    cq[rear] = value;

    cout << "Element inserted\n";
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is Empty\n";
        return;
    }

    cout << "Deleted element: " << cq[front] << endl;

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}

void peek()
{
    if (isEmpty())
        cout << "Queue is Empty\n";
    else
        cout << "Front element: " << cq[front] << endl;
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue is Empty\n";
        return;
    }

    int i = front;

    cout << "Queue: ";

    while (true)
    {
        cout << cq[i] << " ";

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    cout << endl;
}

int main()
{
    int choice, value;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. isEmpty";
        cout << "\n4. isFull";
        cout << "\n5. Display";
        cout << "\n6. Peek";
        cout << "\n7. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            if (isEmpty())
                cout << "Queue is Empty\n";
            else
                cout << "Queue is Not Empty\n";
            break;

        case 4:
            if (isFull())
                cout << "Queue is Full\n";
            else
                cout << "Queue is Not Full\n";
            break;

        case 5:
            display();
            break;

        case 6:
            peek();
            break;

        case 7:
            cout << "Exit";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 7);

    return 0;
}
