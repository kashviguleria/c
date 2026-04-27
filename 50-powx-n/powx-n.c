double myPow(double x, int n) {
    long long power = n;  // handle INT_MIN safely
    
    if (power < 0) {
        x = 1 / x;
        power = -power;
    }

    double result = 1;

    while (power > 0) {
        if (power % 2 == 1) {   // if odd
            result *= x;
        }
        x *= x;        // square the base
        power /= 2;    // reduce exponent
    }

    return result;
    
}