#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
main()
{
system("cls");
gotoxy(0,1);
cout<<"A "<<endl;;
gotoxy(0,2);
cout<<"W "<<endl;
gotoxy(0,3);
cout<<"A "<<endl;
gotoxy(0,4);
cout<<"I "<<endl;
gotoxy(0,5);
cout<<"S "<<endl;
gotoxy(0,6);
}