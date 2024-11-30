#include <iostream>
using namespace std;
int main() {
    float PIN =2004;
    float balance=1560;
    float EP;
    for (int i = 0; i < 3; i++)
    {
        float WA;
        cout<<"enter 4 digits pin: "<<endl;
        cin>>EP;
        if (EP == PIN)
        {
            cout<<"welcome back!";
            cout<<"enter withdrawal amount: ";
            cin>>WA;
            if (WA < balance)
            {
                cout<<WA<<" withdrawed!"<<"Balace left:"<<balance-WA << endl;
                EP=2004;
                break;
                
            }
        }        
    }
        if (EP != PIN)
        {
            cout<<"card blocked!";
        }    
}