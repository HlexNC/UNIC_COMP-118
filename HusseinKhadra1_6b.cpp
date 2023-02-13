#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int balance,winnings = 0,countPlay = 0;
    int desiredWin;

    cout << "Enter the amount you want to bet with: ";
    cin >> balance;

    cout << "Enter the amount you wish to win: ";
    cin >> desiredWin;

    while(balance != 0)
    {
        int coin = rand() % 2;
        if(coin == 1)
        {
            winnings++;
            balance++;
        }else if(coin == 0)
        {
            balance--;
        }
        countPlay++;
        if(winnings == desiredWin)
            break;
    }
    cout << "You won $"<< winnings;
    return 0;
}