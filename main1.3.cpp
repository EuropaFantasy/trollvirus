#include <windows.h>
#include <iostream>
#pragma comment( lib, "winmm.lib" ) 
#include "resource.h"

using namespace std;
void messageset();
void pornpopup();
void payload();
void beep();
void rickroll();
void poweroff();
void samsungboosted();

int main() {
    //RECT taskbarRect;
    //cout << GetTaskbarPosition(taskbarRect);

    /*APPBARDATA abd;
    abd.cbSize = sizeof(abd);
    SHAppBarMessage(ABM_GETTASKBARPOS, &abd);
    int taskbarLeft = abd.rc.left;
    std::cout << abd.rc.left;*/
    /*while(true) {
    
        messageset();
        Sleep(30000);
        pornpopup();
        Sleep(30000);
        payload();
        Sleep(30000);
        beep();
        Sleep(30000);
        rickroll();
        Sleep(30000);
        poweroff();
        Sleep(30000);
        samsungboosted();
        Sleep(30000);
    }*/
    return EXIT_SUCCESS;
}

void messageset() {

    if (MessageBox(
        NULL,
        L"O_O",
        L"^_^",
        MB_OKCANCEL) == IDCANCEL) {
        MessageBox(
            NULL,
            L"BOUH",
                L"BANG",
            MB_OK);
    }
}

void pornpopup() { // cornhub est une parodie d'un site pornographique avec du mais qui cuit
    ShellExecute(NULL, TEXT("open"), TEXT("https://cornhub.website"), NULL, NULL, SW_SHOW);
    Sleep(1);
    MessageBox(
        NULL,
        L"tu fais quoi encore",
        L"re !",
        MB_OK);
}



void payload() {
    int a = 1;

    while (a < 100) {
        SetCursorPos(500, 500);
        Sleep(3000);
        a++;
    }
}

void beep() {
    int freq = 100;
    int loop = 1;
    while (loop < 200) {
        Beep(freq, 100);
        Sleep(50);
        freq = freq + 10;
        loop++;
    }
}

void rickroll() {
    PlaySound(MAKEINTRESOURCE(RICKROLL), GetModuleHandle(NULL), SND_RESOURCE);
    Sleep(1);
    MessageBox(
        NULL,
        L"GET WRECKED NOOB !",
        L"hihihiha",
        MB_OK);
}

void poweroff() {
    SetCursorPos(32, 845);
    Sleep(50);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    Sleep(400);
    SetCursorPos(579, 767);
    Sleep(50);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    Sleep(400);
    SetCursorPos(571, 696);
}

void samsungboosted() {
    PlaySound(MAKEINTRESOURCE(SAMSUNG), GetModuleHandle(NULL), SND_RESOURCE);
}