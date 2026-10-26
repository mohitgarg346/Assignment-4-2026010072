#include <iostream>
using namespace std;
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
bool isEmpty()
{
    return front == -1;
}

bool isFull()
{
    return rear == SIZE - 1;
}

void enqueue()
{
    int value;

    if (isFull())
    {
        cout << "Queue is Full!" << endl;
    }
    else
    {
        cout << "Enter value: ";
        cin >> value;

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << "Element inserted successfully." << endl;
    }
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Deleted element: " << queue[front] << endl;

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}

void peek()
{
    if (isEmpty())
        cout << "Queue is Empty!" << endl;
    else
        cout << "Front element: " << queue[front] << endl;
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!" << endl;
    }
    else
    {
        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- QUEUE MENU ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
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
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                if (isEmpty())
                    cout << "Queue is Empty." << endl;
                else
                    cout << "Queue is Not Empty." << endl;
                break;

            case 4:
                if (isFull())
                    cout << "Queue is Full." << endl;
                else
                    cout << "Queue is Not Full." << endl;
                break;

            case 5:
                display();
                break;

            case 6:
                peek();
                break;

            case 7:
                cout << "Program Exited." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 7);

    return 0;
}
