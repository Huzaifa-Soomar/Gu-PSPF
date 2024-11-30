#include <iostream>
using namespace std;
int main(){
    int TF =0.0;
    int OD ;
    int n;
    // double fine  = OD *0.50;
    cout <<"Enter number of books" << endl;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
        cout << "enter number of overdue days for book " << i<< " :";
        cin >> OD;
         
         double fine  = OD *0.50;
        cout <<"Fine for book " << i << " : $" <<fine<<endl;
        TF += fine;

    }

    cout <<"\nTotal fine for all books " <<"$" <<TF << endl;
    
}