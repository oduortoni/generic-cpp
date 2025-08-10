#include <iostream>

using namespace std;

struct converter {
    int rate;

    converter(double x): rate(x) {
        cout << "Converter created with rate: " << x << endl;
    }

    double convert(double x) {
        return x * rate;
    }

    double operator()(double amount) {
        return amount * rate;
    }
    
    ~converter() {
        cout << "Converter destroyed" << endl;
    }
};

int main() {
    converter crate = converter(9.18);

    cout << "Using converter method: " <<crate.convert(100) << endl;

    cout << "Using converter object: " << crate(100) << endl;

    return 0;
}
