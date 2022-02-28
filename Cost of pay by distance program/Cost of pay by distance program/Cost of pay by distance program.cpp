/* TODO: 
2. Assign a value to double variable cost depending on the value of integer variable distance as follows:
Distance Cost
-------------------------------------------------
0 through 100                               		5.00
More than 100 but not more than 500                 8.00
More than 500 but less than 1,000                   10.00
1,000 or more                                       12.00
*/


#include <iostream>
#include <string>

using namespace std;

int main() {
    int Distance;
    int Payment = 0;

    cout << "What is the distance? ";
    cin >> Distance;

    /** If distance = cost **/
    if (Distance >= 0 && Distance <= 100) {
        Payment = 5.00;
    }
    else if (Distance > 100 && Distance <= 500) {
        Payment = 8.00;
    }
    else if (Distance > 500 && Distance < 1000) {
        Payment = 10.00;
    }
    else if (Distance >= 1000) {
        Payment = 12.00;
    }

    cout << "You'll have to pay: $" << Payment;

    return Payment;
}