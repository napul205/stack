#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define n 100

class stac
{
    public:
    int *arr;
    int top;
    stac()
    {
    //creating array and top when object is created
        arr=new int[n];
        top=-1;
    }

    void push(int d)
    {
    //check the array is full or not
        if(top==n-1)
        cout<<"stack is overflow :";
        else
        {
            top++;
            arr[top]=d;
        }

    }

    void pop()
    {
    //check array is empty 
        if(top==-1)
        cout<<"stack is empty"<<endl;
        else
        {
            arr[top]=0;
            top--;
        }


    }

    void print()
    {
    //check the stack is empty or not
        if(top==-1)
        cout<<"stack is empty"<<endl;
        else
        {
            for(int i=top;i>=0;--i)
            {
                cout<<arr[i]<<endl;
            }
        }
    }


    
};
int main()
{

    stac s;
    s.pop();
    s.push(2);
    s.push(4);
    s.push(54);
    s.push(65);
    
    s.print();

    return 0;
}

