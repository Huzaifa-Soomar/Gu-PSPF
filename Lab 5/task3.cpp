#include <iostream>
using namespace std;

int main (){
    string  name;
    for (int i = 0; i <= 5; i++)
    {
        cout <<"Enter your name\t" ;
        cin >> name;
        cout << name <<endl;
        cout << "Reaming spots :" << 5-i<<endl;
    }
    
}