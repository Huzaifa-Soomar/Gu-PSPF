#include <iostream>
using namespace std;

int main(){

    int saving_goal = 100 ;
    int day;
    int savings = 0 ;
    cout << "Saving Goal :" <<"$" <<saving_goal << endl;

    for (day = 1; savings < saving_goal; day++)
    {
        cout << "Enter Day" << " " << day  << " "<< "savings :  $";
        int ds;
        cin >> ds ;
        

        savings +=ds;

        cout << "Progress :  $" << savings << endl;

        int rem = saving_goal - savings;
        cout << "Remaining : $" << rem <<endl; 

        cout << endl;

        if ( savings >= saving_goal)
        {
            cout << endl;
            cout << "Goal Reached 🎉" <<endl;
            cout << "Progress :  $" << savings << endl;


            cout << "Total days taken :" << day << endl;

            int TA = savings;
            cout << "Total amount saved: $" << savings << endl;

            int extra = savings -saving_goal ;
            cout << "Extra savings :  $" << extra;

            break;


        }


        
        
    }
    

}