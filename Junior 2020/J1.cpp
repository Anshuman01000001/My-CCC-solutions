#include <iostream>

using namespace std;

int main()
{
    int S=0, M=0, L=0;

    cin >> S >> M >> L;

    if((1*S + 2*M + 3*L) >= 10)
        cout << "happy";
    else
        cout << "sad";

    return 0;
}
