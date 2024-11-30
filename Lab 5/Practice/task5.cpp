#include <iostream>
using namespace std;
int main(){
    int PIN = 2004;
    int Balance = 2000;
    int pin;
    float withdrawl_amount;

    for (int i = 0; i < 3; i++)
    {
        cout << "enter 4 digits pin" << endl;
        cin >> pin;

        if (PIN == pin)
        {
             
            cout << "welcome back "<<endl;
            cout << "enter withdrawl amount" << endl;
            cin >> withdrawl_amount;

            if (Balance > withdrawl_amount)
            {
               cout <<"cash withrawl successfully"<<endl << "balance left :" << Balance-withdrawl_amount;
               break;
            }
            
        }

          if (pin != PIN)
        {
            cout << "card blocked";
        }

    }

    
}