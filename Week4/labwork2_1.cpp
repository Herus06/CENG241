#include <iostream>
using namespace std;
const double GLOBAL_MARKET_RISK_THRESHOLD =0.05;

class Portfolio{
    int capacity;
    double* assetPrices;

public:
    void initialize(int a)
    {
        capacity=a;
        assetPrices=new double[capacity];
        for(int i=0;i<capacity;i++){
            cout<<"Enter the value for "<<i<<": "<<endl;
            cin>>assetPrices[i];
        }
    }

    void cleanup()
    {
        delete[] assetPrices;
    }

    double calculateTotalValue()
    {
        
    double total=0;
        for(int i=0; i<capacity ;i++){
            total+=assetPrices[i];
        }
        return total;
    }

    bool exceedRiskLimit(double rat)
    {
        if(rat>GLOBAL_MARKET_RISK_THRESHOLD){
            return true;
        }
        else{
            return false;
        }
    }


    void displayPortfolio()
    {
    for(int i=0;i<capacity;i++){
        cout<<"The value for "<<i<<" is: "<<assetPrices[i]<<endl;
    }
}};
int main(){
    Portfolio myPortfolio;
    cout<<"Program starts now."<<endl;
    int x;
    cout<<"Enter the capacity: "<<endl;
    cin>>x;
    myPortfolio.initialize(x);
    myPortfolio.calculateTotalValue();
    double rate;
    cout<<"Enter the your rate expect: "<<endl;
    cin>>rate;
    if(myPortfolio.exceedRiskLimit(rate)){
        cout<<"Observed drawdown is greater than "<<::GLOBAL_MARKET_RISK_THRESHOLD<<" value."<<endl;
    }
    else{cout<<"Portfolio risk is within acceptable parameters."<<endl;
    }
    myPortfolio.displayPortfolio();
    myPortfolio.cleanup();
    return 0;
}