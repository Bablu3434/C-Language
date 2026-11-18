#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int x = 1 , y = 1;
    char grid [8][8];
    char ch;

    while (true) {
        system  ("cls");
        draw (grid, x, y);
        if (x==6 && y==6) break;

        
        ch = _getch();
        if (ch == 'w' && x > 1) x--;
        if (ch == 's' && x < 6) x++;
        if (ch == 'a' && y > 1) y--;
        if (ch == 'd' && y < 6) y++;
    }

    cout << "you  Escaped" << endl;
    return 0;
}
