#include <iostream>
using namespace std;

int main() {
    string sub;
    float s1 = 0, s2 = 0, s3 = 0; 
    int test1 = 0, test2 = 0;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter Name of subject " << i << ": ";
        cin >> sub;

        cout << "Marks for " << sub << ":\n";
        cout << "Test 1 marks: ";
        cin >> test1;
        cout << "Test 2 marks: ";
        cin >> test2;

        float average = (test1 + test2) / 2.0;

      if (test1<0||test2>100){
      	cout <<"Invalid marks"<<endl;
      	continue;
	  }
      
        if (i == 1) {
            s1 = average;
        } else if (i == 2) {
            s2 = average;
        } else if (i == 3) {
            s3 = average;
        }


        cout << "Average marks for " << sub << ": " << average << endl;
    }

    cout << "\nFinal Results:\n";
    cout << "Math average: " << s1 << endl;
    cout << "Science average: " << s2 << endl;
    cout << "English average: " << s3 << endl;

    return 0;
}