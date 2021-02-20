#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>num;
    int n=0, num1, num2;
    int i=0;
    while(n!=99999)
    {
        cin>>n;
        num.push_back(n);
        i++;
    }
    for (int j=0; j<i-1; j++)
    {
        if(((num[j]/10000)+(num[j]/1000))==0)
        {
            if(((num[j-1]/10000)+(num[j-1]/1000))%2==1)
            {
                cout<<"left "<<(num[j]%1000)<<endl;
            }
            else if(((num[j-1]/10000)+(num[j-1]/1000))%2==0)
            {
                cout<<"right "<<(num[j]%1000)<<endl;
            }
        }
        else if(((num[j]/10000)+(num[j]/1000))%2==1)
        {
            cout<<"left "<<(num[j]%1000)<<endl;
        }
        else if(((num[j]/10000)+(num[j]/1000))%2==0)
        {
            cout<<"right "<<(num[j]%1000)<<endl;
        }
    }

    return 0;
}
