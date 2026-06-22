#include <iostream>
using namespace std; // Eliminates the need for std:: prefixes

class Solution {
public:
    int mirrorReflection(int p, int q) {
        while (p % 2 == 0 && q % 2 == 0) {
            p /= 2;
            q /= 2;
        }
        if (p % 2 == 0) return 2;
        if (q % 2 == 0) return 0;
        return 1;
    }
};

int main() {
    Solution solver;
    int p, q;

    // Direct use of cout and cin without std::
    cout << "Enter the room dimension (p): ";
    cin >> p;

    cout << "Enter the laser height (q): ";
    cin >> q;

    int result = solver.mirrorReflection(p, q);
    cout << "The ray meets receptor: " << result << endl;

    return 0;
}
