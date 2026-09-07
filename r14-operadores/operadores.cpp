#include <iostream>
#include <numeric>

class Fraccion {
public:
    Fraccion(int n = 0, int d = 1) {
        num_ = n;
        den_ = d;
        reducir();
    }

    Fraccion operator+(const Fraccion& o) const {
        return Fraccion(num_ * o.den_ + o.num_ * den_, den_ * o.den_);
    }

    Fraccion operator*(const Fraccion& o) const {
        return Fraccion(num_ * o.num_, den_ * o.den_);
    }

    bool operator==(const Fraccion& o) const {
        return num_ * o.den_ == o.num_ * den_;
    }

    bool operator<(const Fraccion& o) const {
        return num_ * o.den_ < o.num_ * den_;
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraccion& f);

private:
    int num_, den_;

    void reducir() {
        if (den_ < 0) {
            num_ = -num_;
            den_ = -den_;
        }
        int divisor = std::gcd(num_, den_);
        if (divisor != 0) {
            num_ = num_ / divisor;
            den_ = den_ / divisor;
        }
    }
};

std::ostream& operator<<(std::ostream& os, const Fraccion& f) {
    os << f.num_ << "/" << f.den_;
    return os;
}

int main() {
    Fraccion a(1, 2);
    Fraccion b(1, 3);
    std::cout << (a + b) << '\n';

    Fraccion c(6, -8);
    std::cout << c << '\n';

    return 0;
}