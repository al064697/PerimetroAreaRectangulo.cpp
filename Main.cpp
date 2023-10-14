#include <iostream>;

using namespace std;

//declarando variables
int a = 10;
int b = 5;

int Perimetro(int a, int b) {
    return 2 * (a + b);
}

int Area(int a, int b) {
    return a * b;
}

int main() {
    cout << "Perimetro = " << Perimetro(a, b) << '\n' << "Area = " << Area(a, b) << endl;
}
