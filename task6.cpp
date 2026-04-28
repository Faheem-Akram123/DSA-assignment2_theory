#include "../DSA-headerFiles-using-Cpp/myQueue.h"

int main()
{
    myQueue<int> q(50);
    myQueue<int> q1(50);
    myQueue<int> q2(50);
    myQueue<int> q3(50);
    myQueue<int> q4(50);

    q.enqueue(12);
    q.enqueue(9);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(16);
    q.enqueue(6);
    q.enqueue(3);
    q.enqueue(10);

    while (!q.isEmpty())
    {
        if (q.peek() % 4 == 0)
        {
            q4.enqueue(q.dequeue());
        }
        else if (q.peek() % 3 == 0)
        {
            q3.enqueue(q.dequeue());
        }
        else if (q.peek() % 2 == 0)
        {
            q2.enqueue(q.dequeue());
        }
        else
        {
            q1.enqueue(q.dequeue());
        }
    }

    q1.display();
    cout << endl;
    q2.display();
    cout << endl;
    q3.display();
    cout << endl;
    q4.display();
}