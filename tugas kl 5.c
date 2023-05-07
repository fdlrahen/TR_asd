#include <stdio.h>
#include <windows.h>
#include <conio.h>


COORD coord={0,0};
void gotoxy(int x,int y){
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void main()
{
    system("color 0B");
    char a = 178, b = 219;
    gotoxy(48,11);printf("Selamat datang raja meksiko");
    gotoxy(58,12);printf("loading...");
    gotoxy(36,14);
    for (int bar = 0; bar < 50; bar++)
        printf("%c", a);
    gotoxy(36,14);
    for (int bar= 0; bar < 50; bar++) {
        printf("%c", b);
        Sleep(100);
    }
}


