#include <iostream>
using namespace std;

int main(){
    int shelf_price = 5;
    int base_price = 5;

    for (int  shelf = 1; shelf <= 3; shelf ++)
    {
       cout << "Shelf" << " " << shelf << " (Shelf Price" <<shelf_price<<"$) :" <<endl;;

       int section_price =1;

       for (int sec = 1; sec <=3; sec++)
       {
         cout << "Section" << " " << sec << "(Section Price: $ " << section_price << ") :";

         for (int gift = 1; gift <= 2; gift++)
         {
            int Gp = base_price + shelf_price + sec;
            cout << "Gift" << gift << "($" <<Gp <<") " ;
         }
         cout <<endl;
         section_price++;
         
       }
       

       shelf_price += 3;
       cout <<endl;
       
    }
    
}