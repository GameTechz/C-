#include<iostream>
#include<stdio.h>
#include<iomanip>
#define MAX 100
struct book
{
    int bookno;
    char title[MAX];
};
book stack[MAX];
int size;
using namespace std;
void readbook(book &bk)
{
    char ch;
    cout<<"\nEnter book number:";
    cin>>bk.bookno;
    cin.get(ch);
    cout<<"\nEnter book title:";
    gets(bk.title);
}
void displaybook(book bk)
{
    cout.setf(ios::left);
    cout<<endl<<setw(10)<<bk.bookno
        <<setw(30)<<bk.title
        <<"\n-----------------------------------------------------------------------";
}
void showheader()
{
    cout.setf(ios::left);
    cout<<endl<<setw(10)<<"Book no."
        <<setw(30)<<"Book title"
        <<"\n-----------------------------------------------------------------------";
}
void push(book bk,int &top)
{
    if(top==size-1)
        cout<<"\nStack overflow!";
    else
        stack[++top]=bk;
}
book pop(int &top)
{
    book item;
    if(top==-1)
        cout<<"\nStack underflow!";
    else
        item=stack[top--];
    return item;
}
void traverse(int top)
{
    int i;
    cout<<"\n-----------------------STACK STATUS--------------------------------:\n";
    showheader();
    for(i=0;i<=top;i++)
        displaybook(stack[i]);
}
int main()
{
    cout<<"\nEnter stack size:";
    cin>>size;
    do
    {
        int choice,Top=-1;
        book item;
        cout<<"\nCHOICE MENU:"<<"\n\t1: push"<<"\n\t2: pop"<<"\n\t3: traverse"<<"\n\t4: exit";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                cout<<"\nEnter book information:\n";
                readbook(item);
                push(item,Top);
                traverse(Top);
                break;
            }
        case 2:
            {
                item=pop(Top);
                cout<<"\nElement removed:\n";
                showheader();
                displaybook(item);
                traverse(Top);
                break;
            }
        case 3:
            {
                traverse(Top);
                break;
            }
        case 4:
            {
                return 0;
                break;
            }
        default:
            {
                cout<<"\nInvalid choice:";
                break;
            }
        }
    }
    while(1);
}
