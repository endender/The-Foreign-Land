// 仅仅是一个1v1战斗的测试，功能还得随着c++的学习慢慢完善
#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include "struct.h"
using namespace std;

int story_mode(int storypoint);
int freefight();

int main()
{
    cout << "欢迎来到《异域》" << endl << endl;
    cout << "1.剧情模式\n2.自由模式\n3.退出游戏\n";
    int game_choice1_1 = _getch();
    while (game_choice1_1 != 49 && game_choice1_1 != 50 && game_choice1_1 != 51)
        game_choice1_1 = _getch();
    if (game_choice1_1 == 49)
    {
        int game_choice2_1 = 0;
        cout << "\n1.继续游戏\n2.新游戏\n3.返回（功能未实现）\n";
        while (game_choice2_1 != 49 && game_choice2_1 != 50 && game_choice2_1 != 51)
            game_choice2_1 = _getch();
        if (game_choice2_1 == 49)
        {
            int savepoint = 0;
            ifstream in("./saves\\save.txt");
            in >> savepoint;
            story_mode(savepoint);
        }
        if (game_choice2_1 == 50)
            story_mode(0);
        return 0;
    }
    if (game_choice1_1 == 50)
        freefight();
}
