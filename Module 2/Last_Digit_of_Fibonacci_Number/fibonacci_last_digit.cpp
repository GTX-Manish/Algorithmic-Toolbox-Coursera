#include <iostream>

int get_fibonacci_last_digit_fast(int n){
    long long a = 0, i = 0;
    long long b = 1;
    long long nTerm = 0;

    while(i < n){
        nTerm = a+b;
        a = b;
        b = nTerm;
        i++;
        nTerm %= 10;
        a %= 10;
        b %= 10;
    }

    return (a%10);
}

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
    }
