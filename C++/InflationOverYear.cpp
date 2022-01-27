#include<iostream>
#include<iomanip> //for using precision

using namespace std;

int main()
{
    cout.precision(2); //setting precision to 2 for all cout
    double rate; 
    const double min_rate=0.01, max_rate=0.10; //constant maximum and minimum inflation rate
    const double start_value = 1000.00; //constant starting value
    double money = start_value; //for modifying the start value
    cout<<"Enter the annual rate of inflation (between 0.01 and 0.10): ";
    while(1){
        cin>>rate;
        if(rate<=max_rate && rate>=min_rate){
            cout<<"\nYear\tWorth\n";
            cout<<"-----------------\n";
            cout<<"Current\t"<<fixed<<start_value<<"\n";
            cout<<"-----------------\n";
            for(int i=1;i<=10;i++)
            {
                money = (1/(1+rate))*money; //calculating inflation over money
                cout<<"\n"<<i<<"\t"<<fixed<<money;
            }    
        break;
        }
        else{
            cout<<"Inflation rate must be between 0.01 and 0.10 -- Re-enter rate: "; //if input is not within the range
        }
    }
    return 0;
}
