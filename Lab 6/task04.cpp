#include <iostream>
using namespace std;

int main() {
    int price_per_cupcake = 3; 
    int total_orders_processed = 0;
    int valid_orders = 0;
    int cancelled_orders = 0;
    int total_sales = 0;

    cout << "Welcome to the Bakery!" << endl;
    cout << "Price per cupcake: $" << price_per_cupcake << endl;

    for (int i = 1; i <= 5; i++) { 
        cout << "\nOrder #" << i << endl;

        int no_of_cupcakes;
        cout << "Number of cupcakes: ";
        cin >> no_of_cupcakes;

        char order_status;
        cout << "Order status (V=valid / C=cancelled): ";
        cin >> order_status;

        total_orders_processed++;

        if (order_status == 'c') {
            cout << "Order cancelled! Skipping..." << endl;
            cancelled_orders++;
            continue; 
        }

        if ( order_status == 'v') {
            valid_orders++;
            int order_total = price_per_cupcake * no_of_cupcakes;
            total_sales += order_total;
            cout << "Order total: $" << order_total << endl;
        } else {
            cout << "Invalid order status entered! Skipping..." << endl;
            cancelled_orders++;
        }

        cout << endl;
    }

    
    cout << "Sales Summary:" << endl;
    cout << "Total orders processed: " << total_orders_processed << endl;
    cout << "Valid orders: " << valid_orders << endl;
    cout << "Cancelled orders: " << cancelled_orders << endl;
    cout << "Total sales: $" << total_sales << endl;

    return 0;
}
