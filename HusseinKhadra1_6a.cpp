#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int balance = 50,winnings = 0,countPlay = 0;

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
        if(winnings == 250)
            break;
    }
    cout << "You won $"<< winnings;
    cout << "\n" << countPlay;
    return 0;
}