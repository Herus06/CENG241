#include <iostream>
using namespace std;

template <typename T>
struct TelemetryProcessor
{// default public:
    
    T calibrationFactor;
    
    
    void testPassByValue(T reading) {
        reading *= calibrationFactor;
        cout << "[Inside testPassByValue] Modified copy inside function: " << reading << endl;
    }
    void testPassByReference(T& reading) {
        reading *= calibrationFactor;
        cout << "[Inside testPassByReference] Modified via reference: " << reading << endl;
    }
};

int main() {
    TelemetryProcessor<double> processor;
    double redByDevice;
    cout << "Enter the calibration factor: ";
    cin >> processor.calibrationFactor;
    cout << "Enter a raw sensor reading value (e.g., 25.5): ";
    cin >> redByDevice;  
    cout << "\nBefore pass-by-value function, userReading = " << redByDevice << endl;
    processor.testPassByValue(redByDevice);
    cout << "After pass-by-value function, userReading = " << redByDevice << " (Unchanged!)" << endl;

    cout << "\nBefore pass-by-reference function, userReading = " << redByDevice << endl;
    processor.testPassByReference(redByDevice);
    cout << "After pass-by-reference function, userReading = " << redByDevice << " (Changed & Persisted!)" << endl;
    return 0;
}