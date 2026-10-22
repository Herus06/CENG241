#include <iostream>
using namespace std;
class GreenhouseMonitor{
double maxTempTreshold;
public:
    void setTreshold(double t)
    {
        maxTempTreshold=t;
    }

    bool checkThreshold(const double* p, int size)
    {
        for(int i=0;i<size;i++){
        
            if(p[i]>maxTempTreshold){
                 cout<<"[WARNING] At least one sensor exceeds limit "<<maxTempTreshold<<"!"<<endl;
                 return true;
            }
        }
        
        return false;
    }

};

int main()
{
    GreenhouseMonitor monitor;
    int a;
    double max=0;
    cout<<"Enter the maximum acceptable temperature value:  "<<endl;
    cin>>max;
    monitor.setTreshold(max);
    cout<<"Enter number of temperature: "<<endl;
    cin>>a;
    // cin>>::maxTempTreshold; ----> this is not accesable in main so we need to make it class. 
    double* ptr = new double[a];
    for(int i=0;i<a;i++){
        cout<<"Enter the temperature value for "<<i<<": "<<endl;
        cin>>ptr[i];
    }  
    if(monitor.checkThreshold(ptr, a)){
        cout<<"[ALERT] Greenhouse climate regulation required!"<<endl;
    }
    else{
        cout<<"[OK] All temperatures are within the acceptable range."<<endl;
    }
    delete[] ptr;
return 0;
}