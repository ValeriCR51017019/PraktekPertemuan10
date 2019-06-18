#include <iostream.h>
#include <conio.h>
void main ()
{ int A [5]={20,9,1986,200,13};//dgn inisialisasi
int a ;
clrscr();
cout<<"Data yang lama\n";
for (a=0;a<5;a++)
{ cout<<" "<<A[a];}
cout<<"\nData yang baru : \n";
A[0]=4; A[1]=2; A[2]=1; A[3]=3; A[4]=5;
for (a=0;a<5;a++)
{ cout<<" "<<A[a]; }
getch();}
