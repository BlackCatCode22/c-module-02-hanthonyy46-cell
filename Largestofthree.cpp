   #include <iostream>
using namespace std;

int main() {
    int A, B, C, Largest;

    cout << "Enter three numbers: ";
    cin >> A >> B >> C;

    if (A > B) {
        if (A > C) {
            Largest = A;
        } else {
            Largest = C;
        }
    } else {
        if (B > C) {
            Largest = B;
        } else {
            Largest = C;
        }
    }

    cout << "Largest number is: " << Largest << endl;
    return 0;
}
