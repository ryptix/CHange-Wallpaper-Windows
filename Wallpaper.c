#include <Windows.h>
#pragma comment(lib, "user32.lib")

int main() {
    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, "C:\\Users\\bapti\\Pictures\\Test.bmp", SPIF_UPDATEINIFILE | SPIF_SENDWININICHANGE);
    return 0;
}
