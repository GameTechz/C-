#include<iostream>
#include<iomanip>
#include<stdio.h>
#define MAX 100
using namespace std;
struct customer
{
    int custid;
    char cname[MAX];
};
customer queue[MAX];
int front=-1,rear=-1,size;
void readcust()
{
    char ch;
    cout<<"\nEnter customer details:\n";
    cout<<"\nEnter customer id:";
    cin>>queue[++rear].custid;
    cin.get(ch);
    cout<<"\nEnter customer name:";
    gets(queue[rear].cname);
}
void showHeader()
{
    cout.setf(ios::left);
    cout<<endl<<setw(8)<<"Custno"
        <<setw(35)<<"Customer name";
    cout<<"\n------------------------------------------------------------------------------";
}
void showCust(customer item)
{
    cout.setf(ios::left);
    cout<<endl<<setw(8)<<item.custid
        <<setw(35)<<item.cname;
    cout<<"\n-------------------------------------------------------------------------------";
}
void traverse()
{
    int i;
    showHeader();
    for(i=front;i<=rear;i++)
        showCust(queue[i]);
}
void enqueue()
{
    if(rear==size-1)
        cout<<"\nQueue is full!";
    else if(front==-1&&rear==-1)
    {
        readcust();
        front++;
        traverse();
    }
    else
    {
        readcust();
        traverse();
    }
}
void dequeue()
{
    if(rear==-1&&front==-1)
        cout<<"\nQueue is empty!";
    else if(rear==front)
    {
        cout<<"\nItem removed is:\n";
        showHeader();
        showCust(queue[rear]);
        rear=-1;front=-1;
        traverse();
    }
    else
    {
        cout<<"\nItem removed is:\n";
        showHeader();
        showCust(queue[front++]);
        traverse();
    }
}
int main()
{
    cout<<"\nEnter size of queue:";
    cin>>size;
    do
    {
        int choice;
        cout<<"\nCHOICE MENU:\n"<<"\n\t1: Enqueue"<<"\n\t2: Dequeue"<<"\n\t3: Traverse"
            <<"\n\t4: Exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                enqueue();
                break;
            }
        case 2:
            {
                dequeue();
                break;
            }
        case 3:
            {
                traverse();
                break;
            }
        case 4:
            {
                return 0;
                break;
            }
        default:
            {
                cout<<"\nInvalid choice";
                break;
            }
        }
    }
    while(1);
}
