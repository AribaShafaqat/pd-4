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
gotoxy(30,12);
cout<<"   *   *     *****  ";
gotoxy(29,13);
cout<<"  * *  *       *    ";
gotoxy(30,14);
cout<<" ***** *       *    ";
gotoxy(29,15);
cout<<" *   * *       *    ";
gotoxy(29,16);
cout<<" *   * ***** *****  ";
}


















