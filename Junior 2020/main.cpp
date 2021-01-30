#include <iostream>

using namespace std;

int main()
{
    int spreaders = 0, nonSpreaders = 0, rateOfSpread = 0, targetPopulatioin = 0, day = 0;

    cin >> targetPopulatioin;
    cin >> spreaders;
    cin >> rateOfSpread;

    while(spreaders+nonSpreaders <= targetPopulatioin)
    {
        day++;
        nonSpreaders += spreaders;
        spreaders *= rateOfSpread;
    }

    cout << day;

    return 0;
}
