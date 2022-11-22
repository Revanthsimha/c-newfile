//snake game program 

#include<iostream>
#include<iomanip>

#define WIDTH 10
#define HEIGHT 0

using namespace std;
int x = 10, y = 10;

void board()
{
    for(int i = 0; i < HEIGHT; i++)
    {
        cout << "#";
        for(int j = 0;  j < WIDTH-2; j++)
        {
            if(i == 0 || i == HEIGHT-1) cout << '#';
            else if(i == y && j == x) cout << '0';
            else cout << ' ';
        }
    }   cout << "#\n";
}

int main()
{
    board();


    return 0;
}