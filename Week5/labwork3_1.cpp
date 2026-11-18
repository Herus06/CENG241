#include <iostream>

using namespace std;

class DeviceMonitor;

void registerDevice(DeviceMonitor* ptr) {
    cout << "[Registry System] Device pointer registered at address: " << ptr << endl;
}

class DeviceMonitor {
    int deviceID;
    int operationalStatus;
    string deviceName; // it made by using string instead of char array for better usability and flexibility

public:
    // Constructor 
    DeviceMonitor(int deviceID, int operationalStatus, string deviceName = "Unknown") {
        this->deviceID = deviceID;
        this->operationalStatus = operationalStatus;
        this->deviceName = deviceName;
        
        registerDevice(this); 
    }

    DeviceMonitor& setOperationalStatus(int operationalStatus) {
        this->operationalStatus = operationalStatus;
        return *this; 
    }

    DeviceMonitor& setDeviceName(string deviceName) {
        this->deviceName = deviceName;
        return *this;
    }

    void displayInfo() {
        cout << "Device ID          : " << deviceID << endl;
        cout << "Device Name        : " << deviceName << endl;
        cout << "Operational Status : " << operationalStatus << endl;
    }
};

int main() {
    int id1, id2, status1, status2;
    string name1, name2;

    cout << "Enter first deviceID: ";
    cin >> id1;
    cout << "Enter second deviceID: ";
    cin >> id2;

    cout << "Enter first deviceName: ";
    cin >> name1;
    cout << "Enter second deviceName: ";
    cin >> name2;

    cout << "Enter first deviceStatus: ";
    cin >> status1;
    cout << "Enter second deviceStatus: ";
    cin >> status2;
    cout << endl;

  
    DeviceMonitor monitor1(id1, status1, name1);
    DeviceMonitor monitor2(id2, status2, name2);
    cout << endl;

    cout << "--- Initial States ---" << endl;
    monitor1.displayInfo();
    cout << endl;
    monitor2.displayInfo();
    cout << endl;

   
    string newName;
    int newStatus;
    cout << "Enter new deviceName for first instance: ";
    cin >> newName;
    cout << "Enter new deviceStatus for first instance: ";
    cin >> newStatus;
    cout << endl;

    // Function Chaining
    monitor1.setDeviceName(newName).setOperationalStatus(newStatus);

    cout << "--- State After Method Chaining ---" << endl;
    monitor1.displayInfo();

    return 0;
}