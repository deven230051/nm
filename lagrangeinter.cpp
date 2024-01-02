#include <iostream>

using namespace std;

// Function to calculate the value using Lagrange's Interpolation Formula
double lagrangeInterpolation(double x[], double y[], int n, double xi) {
    double result = 0.0;

    for (int i = 0; i < n; i++) {
        double term = y[i];
        for (int j = 0; j < n; j++) {
            if (j != i) {
                term *= (xi - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    return result;
}

int main() {
    const int n = 4; // Number of data points
    double x[n] = {1.0, 2.0, 4.0, 5.0}; // x-coordinates
    double y[n] = {3.0, 6.0, 10.0, 15.0}; // y-coordinates

    double xi = 3.0; // The value for which interpolation is needed
    double interpolatedValue = lagrangeInterpolation(x, y, n, xi);

    cout << "Interpolated value at x = " << xi << " is " << interpolatedValue << endl;

    return 0;
}