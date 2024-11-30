#include <iostream>
using namespace std;
int main (){
    int n;
    float over_days;
    float total_fine = 0.0;
    cout <<"enter number of books "<<endl;
    cin >> n;

    for (int i = 1; i <=n; i++)
    {
        cout << "enter number of overdue days for " << i << ":";
        cin >>over_days;

        double fine = over_days * 0.50;
        cout << "fine for book" << "$" << " " <<fine << endl;

        total_fine+=fine;
    }
     
     cout << "\n The total fine for all book " << "$" <<total_fine;

    
}