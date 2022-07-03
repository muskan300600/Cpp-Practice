#include <algorithm>
#include <iostream>
using namespace std;
#define SIZE 5;
int A[5];
int front = -1;
int rear = -1;

bool isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
        return false;
}

void enqueue(int data)
{
    if ((rear + 1) % 5 == front)
    {
        cout << "Queue is full\n";
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % SIZE;
        A[rear] = data;
    }
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
    }
}

void getFront()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << A[front];
    }
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
    }
    else
    {
        if (front <= rear)
        {
            for (int i = front; i <= rear; i++)
                cout << A[i] << " ";
        }
        else
        {
            int i = front;
            while (i < 5)
            {
                cout << A[i] << " ";
                i++;
            }
            i = 0;
            while (i <= rear)
            {
                cout << A[i] << " ";
                i++;
            }
        }
    }
}

int main()
{
    int choice, flag = 1, value;
    while (flag == 1)
    {
        cout << "\n1.enqueue 2.dequeue 3.showfront 4.displayQueue 5.exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Value:\n";
            cin >> value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            getFront();
            break;
        case 4:
            display();
            break;
        case 5:
            flag = 0;
            break;
        }
    }

    return 0;
}
