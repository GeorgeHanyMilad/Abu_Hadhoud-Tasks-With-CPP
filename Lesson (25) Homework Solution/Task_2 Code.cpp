#include <iostream>
using namespace std;
int main() {
    cout << "(5 > 6 and 7 = 7) OR (1 Or 0) is : " << (((5 > 6) && (7 == 7)) || (1 || 0)) << endl;
    cout << "NOT (5 > 6 and 7 = 7) OR (1 Or 0) is : " << (!((5 > 6) && (7 == 7)) || (1 || 0)) << endl;
    cout << "NOT (5 > 6 and 7 = 7) OR NOT (1 Or 0) is : " << (!((5 > 6) && (7 == 7)) || !(1 || 0)) << endl;
    cout << "NOT (5 > 6 OR 7 = 7) AND NOT (1 Or 0) is : " << (!((5 > 6) || (7 == 7)) && !(1 || 0)) << endl;
    cout << "((5 > 6 AND 7 <= 8) || (8 > 1 AND 4 <= 3)) AND True is : " << ((((5 > 6) && 7 <= 8) || ((8 > 1) && (4 <= 3))) && true) << endl;
    cout << "((5 > 6 AND NOT (7 <= 8)) AND (8 > 1 OR 4 <= 3)) OR True is : " << ((((5 > 6) && !(7 <= 8)) && ((8 > 1) || (4 <= 3))) || true) << endl;
}