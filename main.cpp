#include"timer.h"
#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    int a =0;
    cout<< "hello timer";
    Timer t;
    /*first example
    cout<<"Start timer :"<<endl;
    t.Restart();
    cout<<"Tick1 : "<<fixed<<setprecision(16)<<setfill('0')<< t.GetDeltaTime()<<endl;
    cout<< "..."<<endl;
    cout<<"Tick2 : "<<fixed<<setprecision(16)<<setfill('0')<<t.GetDeltaTime()<<endl;
    cout<< "..."<<endl;
    cout<< "..."<<endl;
    cout<<"Tick3 : "<<fixed<<setprecision(16)<<setfill('0')<<t.GetDeltaTime()<<endl;

    cout<<"amount of time since start : "<<t.GetElapsedTime()<<endl;
    /*while(t.GetDeltaTime()< 2.f){
        cout<<fixed<<setprecision(8)<<setfill('0')<< t.GetDeltaTime()<<endl;
        a++;
    }
    cout<<"a= "<<a;*/

    /* second example*/
    while(t.GetElapsedTime()< 1.f){
         cout<<fixed<<setprecision(7)<<setfill('0')<< t.GetElapsedTime()<<endl;
    }
    float timeout = 3.f;
    bool running = true;
    t.Restart();
    while(running){
        int elapsed_counts = 0;
        if(t.GetElapsedTime() > timeout){
            cout<< "3 seconds elapsed";
            t.Restart();
            elapsed_counts++;
        }
    }

return 0;}
