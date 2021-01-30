#include <iostream>

using namespace std;

int main()
{
    string input="";

    int numOfInputs=0, smallestX=100, largestX=0, smallestY=100, largestY=0;
    cin >> numOfInputs;

    for(int i=0; i<numOfInputs; i++)
    {
        cin >> input;
        int stringLength = input.size();

        int commaIndex=0;
        for(int i=0; i<stringLength; i++)
        {
            if(input[i] == 44)
            {
                commaIndex = i;
                break;
            }
        }

        int firstNum=0;
        if(commaIndex == 1)
            firstNum = input[0]-48;
        else
            firstNum = (input[0]-48)*10 + (input[1]-48);

        int secondNum=0;
        if(stringLength-1-commaIndex == 2)
            secondNum = (input[commaIndex+1]-48)*10 + (input[commaIndex+2]-48);
        else
            secondNum = (input[commaIndex+1]-48);

        if(firstNum < smallestX)
            smallestX = firstNum;
        if(firstNum > largestX)
            largestX = firstNum;
        if(secondNum < smallestY)
            smallestY = secondNum;
        if(secondNum > largestY)
            largestY = secondNum;
    }

    cout << smallestX-1 << "," << smallestY-1 << endl;
    cout << largestX+1 << "," << largestY+1 << endl;


    return 0;
}
