#include <iostream>
using namespace std;
int main (){
   int n;
   cout << "Enter rows of stars" << endl;
   cin >> n;

    // for (int i = 1; i <=n; i++)
    // {
    //     for(int j = 1 ; j<=n-i; j++){
    //         cout <<" ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout  << "*";
    //     }
        
    //     cout << endl;
    // }

    
    







//  => Arrow pattern

  for (int i = 1; i <=n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
        cout <<" * ";
    }
    cout << endl;
    
  }
    for (int i = 1; i <=n; i++)
  {
    for (int j = i; j <= n; j++)
    {
        cout <<" * ";
    }
    cout << endl;
    
  }
  
    
   
    


    // PYRAMID 

    // int n=5;
      
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n-i; j++)
    //     {
    //         cout << " ";
    //     }

    //    for (int k = 1; k <= 2 * i-1; k++)
    //    {
    //       cout << "*";
    //    }
    //     cout <<endl;
    // }
    

}