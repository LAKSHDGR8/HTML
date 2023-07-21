//input is humidity and windspeed given in mm/hr.
//Heavy > 7mm/hr.
//3mm/hr < Moderate <=7mm/hr.
//3mm/hr <= Low.
#include<iostream>
using namespace std;
class Input
{
    public:
    double humidity;
    double windspeed;
    Input()
    {
        humidity=0;
        windspeed=0;
    }
    void enter_val()
    {
        cout<<"Enter the humidity: "<<endl;
        cin>>humidity;
        cout<<"Enter the windspeed: "<<endl;
        cin>>windspeed;
    }
};

class Calculate: public Input
{
    public:
    double rain_reading;
    Calculate():Input()
    {
        rain_reading=0;
    }
    double reading()
    {
        rain_reading=humidity*windspeed;
        return rain_reading;
    }
};

class Output:public Calculate
{
    public:
    void out()
    {
        double rain_reading = reading(); 
        if(rain_reading >= 7.0)
            cout<<"Heavy"<<endl;
        else if(3.0< rain_reading && rain_reading<7.0)
            cout<<"Moderate"<<endl;
        else
            cout<<"Low"<<endl;
    }
};

int main()
{
    Output o;
    o.enter_val();
    o.out();

    return 0;
}