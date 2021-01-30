#include <iostream>

using namespace std;

int main()
{
    string string1 = "";
    string string2 = "";
    bool found =  false;

    cin >> string1;
    cin >> string2;

    for(int i=0; i<string2.size(); i++)
    {
        if(string1.find(string2) != string::npos){
            found = true;
            break;
        }

        string newString = string2.substr(1,string2.size()-1) + string2[0];
        string2 = newString;
    }

    if(found == true)
        cout << "yes";
    else
        cout << "no";

    return 0;
}
