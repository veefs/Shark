#include <iostream>
#include <windows.h> 
#include <stdlib.h>
#include <conio.h>



using namespace std;

int SendClick() {
  keybd_event(VK_LBUTTON, 0x01, KEYEVENTF_EXTENDEDKEY | 0, 0);
  Sleep(10);
  keybd_event(VK_LBUTTON,0x01,KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
  return 0;
}

int TriggerBot(std::string mode, std::string color) {

    
    


    if(mode == "true") {

        int width = GetSystemMetrics(SM_CXSCREEN) / 2;
        int height = GetSystemMetrics(SM_CYSCREEN) / 2;

        while(true) {
            HDC dc = GetDC(NULL);
            COLORREF c = GetPixel(dc, width, height);
            


            ReleaseDC(NULL, dc);

            if((int)GetRValue(c) >= 190 & (int)GetGValue(c) >= 110 & (int)GetBValue(c) >= 230) {

                if((int)GetRValue(c) >= 220 & (int)GetGValue(c) >= 220 & (int)GetBValue(c) >= 220 | (int)GetRValue(c) >= 190 & (int)GetGValue(c) >= 210 & (int)GetBValue(c) >= 230) {
                    continue;
                }

                SendClick();
            
            }
        }
    }
    return 0;
}

