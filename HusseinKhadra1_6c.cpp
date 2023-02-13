#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int balance = 50,winnings = 0,countPlay = 0,play = 1000;

    while(play != 0)
    {
        int coin = rand() % 2;
        if(coin == 1)
        {
            winnings++;
            countPlay++;
        }
        
        play--;
    }
    cout << "\n You won: " << countPlay << " times out of 1000, i.e. " << countPlay/100.0 << "%, of the time.";
    return 0;
}