#include<iostream>
#include<string>
using namespace std;

//multilevel constructor 
/*
    1ek class tayar karycha vehical name : vehical modal name /  comapany brand ;
    2dusra class tayar karycha tyat tyt colour of vehical;
    3tisra class banvycha tyt add krycha number of the  doors;
    4class banycha ani vehical electric or petrol;
*/

class vehical
{
    protected:
    string modalname;
    string brandname;
    public:
    vehical(const string modal,const string barand) : modalname(modal),brandname(barand){}
    void displayfunction()
    {
        cout<<"Vehical :"<<modalname<<endl;
        cout<<"Brand Name :"<<brandname<<endl;
    }
};
    // derived class of one
class colourofVehical : public vehical
{
    protected:
    string colour;
    public:
    colourofVehical(const string modal,const string barand ,const string coloursvehical) : vehical(modal,barand),colour(coloursvehical){}
    //display the vehical of colours
    void displayvehicalcolour()
    {
        cout<<"Vehical of the colour :"<<modalname<<" "<<brandname<<" "<<colour<<endl;
    }
};

//derived class third
class doorsvehical : public colourofVehical 
{
    protected:
    string doors;
    public:
    doorsvehical(const string modal,const string barand ,const string doorvehical) : colourofVehical(modal,barand,""),doors(doorvehical) {}
     void displaydoorvehical()
     {
        cout<<"doors of Vehical :"<<modalname<<" "<<brandname<<" "<<doors<<endl;

     }
};

    
int main()
{
    // Create instances of the base class vehical
    vehical car("car :"," BMW XM 60");
    car.displayfunction();

    colourofVehical carcolour("BMW :","XM 60 :","BLUE");
    carcolour. displayvehicalcolour();

    doorsvehical cardoor("BMW :","XM 60 :","4 doors");
    cardoor. displaydoorvehical();
    cout<<"----------------------------"<<endl;
    cout<<" details of bike "<<endl;

    vehical baike("BIKE :"," KAWASAKI NINJA ");
    baike.displayfunction();

    colourofVehical bikecolour("BIKE :"," KAWASAKI NINJA ","BLACK");
    bikecolour.displayvehicalcolour();

    doorsvehical doorbike("BIKE :"," KAWASAKI NINJA "," NO DOORS ");
    doorbike.displaydoorvehical();

    return 0;
}
