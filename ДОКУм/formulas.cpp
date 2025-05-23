// formulas.cpp
#include "formulas.h"

int Formulas::F9_loop(int n) {
    if (n == 1) return 1;
    int* dp = new int[n + 1];
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = (i % 2 == 0) ? i + 2 * dp[i - 1] : 1 + 3 * dp[i - 2];
    }
    int res = dp[n];
    delete[] dp;
    return res;
}

int Formulas::F2_loop(int n) {
    if (n < 3) return n;
    int* dp = new int[n + 1];
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; ++i) {
        dp[i] = (i % 2 == 0) ? 3 * (i - 1) + dp[i - 1] + 5 : 3 * (i + 1) + dp[i - 2] - 2;
    }
    int res = dp[n];
    delete[] dp;
    return res;
}

int Formulas::F9_recursion(int& counter, int n) {
    counter++;
    if (n == 1) return 1;
    return (n % 2 == 0) ? n + 2 * F9_recursion(counter, n - 1)
        : 1 + 3 * F9_recursion(counter, n - 2);
}

int Formulas::F2_recursion(int& counter, int n) {
    counter++;
    if (n < 3) return n;
    return (n % 2 == 0) ? 3 * (n - 1) + F2_recursion(counter, n - 1) + 5
        : 3 * (n + 1) + F2_recursion(counter, n - 2) - 2;
}

int Formulas::SumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + SumDigits(n / 10);
}