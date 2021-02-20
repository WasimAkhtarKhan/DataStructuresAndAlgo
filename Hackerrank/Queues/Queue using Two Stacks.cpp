//https://www.hackerrank.com/challenges/queue-using-two-stacks/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class queue
{
    int front=-1,rear=-1;
    int stack[100000];
    public:
    void enqueue(int data)
    {
        if(front==-1&&rear==-1)
        {
            front++;
            rear++;
            stack[0]=data;
        }
        else
        {
            rear++;
            stack[rear]=data;
        }
    }
    void dequeue()
    {
        if(front==0&&rear==0)
        {
            front--;
            rear--;
        }
        else if(front<rear)
        {
            front++;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
    }
    void print()
    {
        cout<<stack[front]<<endl;
    }
    queue()
    {
        front=-1;
        rear=-1;
    }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    queue q;
    int query,qt;
    cin>>query;
    while(query)
    {
        cin>>qt;
        switch(qt)
        {
            case 1:int num;
                    cin>>num;
                    q.enqueue(num);
                    break;
            case 2:q.dequeue();
                    break;
            case 3: q.print();
                    break;
        }
        query--;
    }

    return 0;
}
