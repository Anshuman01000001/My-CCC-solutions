#include <iostream>

using namespace std;

int main()
{
    string bidName="", largestBidName="";
    int numOfPeople=0, bidAmount=0, largestBid=0;
    cin >> numOfPeople;

    for(int i=0; i<numOfPeople; i++){
        cin >> bidName;
        cin >> bidAmount;

        if(bidAmount > largestBid){
            largestBid = bidAmount;
            largestBidName = bidName;
        }
    }
    cout << largestBidName << endl;

    return 0;
}
