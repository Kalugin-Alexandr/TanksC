#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

enum TANK_DIRECTION{
    SOUTH = 80,
    NORTH = 72,
    EAST = 75,
    WEST = 77
};

//const int LEFT = 75;
//const int RIGHT = 77;
//const int UP = 72;
//const int DOWN = 80;

HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

void drawEnTankHor(COORD drawPos){
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c%c%c%c%c%c%c%c%c%c%c\n",255,255,255,255,255,255,255,255,255,255,255);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c%c%c%c%c%c%c%c%c%c%c\n",255,255,255,255,255,255,255,255,255,255,255);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c%c%c%c%c%c%c%c%c%c%c\n",255,255,255,255,255,255,255,255,255,255,255);
}

void drawEnTankVert(COORD drawPos){
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c%c%c%c%c\n",255,255,255,255,255);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c%c%c%c%c\n",255,255,255,255,255);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c%c%c%c%c\n",255,255,255,255,255);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c%c%c%c%c\n",255,255,255,255,255);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c%c%c%c%c\n",255,255,255,255,255);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c%c%c%c%c\n",255,255,255,255,255);
}

int drawTankLeft(COORD drawPos){
    //system("CLS");
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.X % 2 == 0)
    {
        printf("   %c%c%c%c%c%c\n",178,176,178,176,178,176);
    }else{
        printf("   %c%c%c%c%c%c\n",176,178,176,178,176,178);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c%c%c%c    %c\n",254,205,205,185,186);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.X % 2 == 0)
    {
        printf("   %c%c%c%c%c%c\n",178,176,178,176,178,176);
    }else{
        printf("   %c%c%c%c%c%c\n",176,178,176,178,176,178);
    }
    return 2;
}

int drawTankRight(COORD drawPos){
    //system("CLS");
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.X % 2 == 0)
    {
        printf("%c%c%c%c%c%c   \n",178,176,178,176,178,176);
    }else{
        printf("%c%c%c%c%c%c   \n",176,178,176,178,176,178);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("%c    %c%c%c%c\n",186,204,205,205,254);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.X % 2 == 0)
    {
        printf("%c%c%c%c%c%c   \n",178,176,178,176,178,176);
    }else{
        printf("%c%c%c%c%c%c   \n",176,178,176,178,176,178);
    }
    return 2;
}

int drawTankDown(COORD drawPos){
    //system("CLS");
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c%c%c%c\n",178,178,205,178,178);
    }else{
        printf("%c%c%c%c%c\n",176,176,205,176,176);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c %c%c\n",178,178,178,178);
    }else{
        printf("%c%c %c%c\n",176,176,176,176);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c %c%c\n",178,178,178,178);
    }else{
        printf("%c%c %c%c\n",176,176,176,176);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c%c%c%c\n",178,178,203,178,178);
    }else{
        printf("%c%c%c%c%c\n",176,176,203,176,176);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("  %c  \n",186);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("  %c  \n",223);
    return 1;
}

int drawTankUp(COORD drawPos){
    //system("CLS");
    SetConsoleCursorPosition(hCon,drawPos);
    printf("  %c  \n",220);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    printf("  %c  \n",186);
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c%c%c%c\n",178,178,202,178,178);
    }else{
        printf("%c%c%c%c%c\n",176,176,202,176,176);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c %c%c\n",178,178,178,178);
    }else{
        printf("%c%c %c%c\n",176,176,176,176);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c %c%c\n",178,178,178,178);
    }else{
        printf("%c%c %c%c\n",176,176,176,176);
    }
    drawPos.Y++;
    SetConsoleCursorPosition(hCon,drawPos);
    if(drawPos.Y % 2 == 0)
    {
        printf("%c%c%c%c%c\n",178,178,205,178,178);
    }else{
        printf("%c%c%c%c%c\n",176,176,205,176,176);
    }
    return 1;
}



int main()
{
    system("mode con cols=127 lines=46");
    CONSOLE_CURSOR_INFO CURSORINFO;
    CURSORINFO.bVisible = false;
    CURSORINFO.dwSize = 1;
    SHORT N = 0,M = 0;

    SetConsoleCursorInfo(hCon, &CURSORINFO);

    drawTankUp({N,M});

    int ch,flag = 1;
    while(TRUE){
        ch = getch();
        if(flag == 1) drawEnTankVert({N,M});
        if(flag == 2) drawEnTankHor({N,M});


        switch(ch){
            case EAST:  //left
                N--;
                if(N < 0 || N > 116){
                    N++;
                }
                flag = drawTankLeft({N,M});
            break;
            case WEST:  //right
                N++;
                if(N < 0 || N > 116){
                    N--;
                }
                flag = drawTankRight({N,M});
            break;
            case NORTH: //up
                M--;
                if(M < 0 || M > 39){
                    M++;
                }
                flag = drawTankUp({N,M});
            break;
            case SOUTH: //down
                M++;
                if(M < 0 || M > 39){
                    M--;
                }
                flag = drawTankDown({N,M});
            break;
        default:break;
        }
    }

    return 0;
}

