#include <iostream>
#include <exception>
#include <string>
using namespace std;

class Santa
{
    int doll, car, candy, brick, game, cd;

public:
    Santa()
    {
        doll = 0;
        car = 0;
        brick = 0;
        game = 0;
        cd = 0;
        candy = 0;
    }
    Santa(int d, int cr, int cn, int b, int g, int c)
    {
        doll = d;
        car = cr;
        candy = cn;
        brick = b;
        game = g;
        cd = c;
    }
    void returnSanta()
    {
        cout << "ZAWARTOSC TWOJEGO PREZENTU\n";
        cout << "lalki: " << doll << "szt.\nsamochody: " << car << "szt.\ncukierki: " << candy << "szt.\nklocki: " << brick << "szt.\ngry: " << game << "szt.\nplyty cd: " << cd;
    }
    int returnDoll()
    {
        return doll;
    }
    void changeDoll(int a)
    {
        doll += a;
    }
    int returnCar()
    {
        return car;
    }
    void changeCar(int a)
    {
        car += a;
    }
    int returnBrick()
    {
        return brick;
    }
    void changeBrick(int a)
    {
        brick += a;
    }
    int returnCandy()
    {
        return candy;
    }
    void changeCandy(int a)
    {
        candy += a;
    }
    int returnGame()
    {
        return game;
    }
    void changeGame(int a)
    {
        game += a;
    }
    int returnCd()
    {
        return cd;
    }
    void changeCd(int a)
    {
        cd += a;
    }





~Santa()
{
    cout << "\nDostajesz rozge!\n";
}
};

int main()
{
    bool app = true;
    Santa santa1;
    do
    {

        string c1;
        cout << "TWORZENIE PREZENTU\n";

        try
        {
            cout << "Co chcesz zrobic:\n 1 - spakuj caly prezent\n 2 - pokaz zawartoœæ prezentu\n 3 - zmien liczbe lalek\n 4 - zmien liczbe samochodow\n 5 - zmien liczbe kolckow\n 6 - zmien liczbe cukierkow\n 7 - zmien liczbe gier planszowych\n 8 - zmien liczbe plyt cd\n 9 - konczy program\ntwoj wybor: ";
            getline(cin, c1);
            throw 1;
        }catch(int exception)
        {
            switch(c1)
            {
            case 2:
                {
                    santa1.returnSanta();
                }
                break;
            }
        }catch(char exception)
        {
            cout << "liczba";
        }

    }while(app);

    return 0;
}

