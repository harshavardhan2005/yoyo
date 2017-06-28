#include<iostream.h>
#include<conio.h>
void fib();
int i, f,s,t;
void main()
{ clrscr();
f=0;
s=1;
t=f+s;
cout<<f<<"\n"<<s<<"\n"<<t<<"\n";
for(i=1;i<10;i++)
fib();
getch();
}
void fib()
{f=s;
s=t;
t=f+s;
cout<<t<<"\n";
}