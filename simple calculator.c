#include<iostream.h>
#include<conio.h>
double a,b,c;
int choice;
void add()
{
c=a+b;
cout<<c;
}
void subtract()
{
c=a-b;
cout<<c;
}
void multiply()
{
c=a*b;
cout<<c;
}
void divide()
{
c=a/b;
cout<<c;
}
void main()
{
clrscr();
cout<<"enter 'a' value:";
cin>>a;
cout<<"enter b value:";
cin>>b;
cout<<"1.addition";
cout<<"2.subtraction";
cout<<"3.multiplication";
cout<<"4.division";
cout<<"enter your choice:"
cin>>choice;
  switch(choice)
  {
    case 1:
    {
    add();
    break;
    }
    case 2:
    {
    subtract();
    break;
    }
    case 3:
    {
    multiply();
    break;
    }
    case 4:
    {
    divide();
    break;
    }
  }
getch();
}
