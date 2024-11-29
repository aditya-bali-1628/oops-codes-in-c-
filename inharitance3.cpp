#include <iostream>
using namespace std;
// base class one
class fruit
{
    // public member
public:
    double totalfruit;
    // default constructor
    fruit() : totalfruit(0) {}
    // public functions
public:
    // function  to add quantity of fruits
    void addfruits(double quantity)
    {
        totalfruit = totalfruit + quantity;
    }
    // function to return  total amount of fruits
    int gettotalfruits()
    {
        return totalfruit;
    }
};
// derived class one
class apple : public fruit
{
    // public member
public:
    int applecount;

public:
    // default constructor
    apple() : applecount(0) {} // initialvalue of apple with strat to 0
    // function  to add qantity of apples
    void totalapple(int quantity)
    {

        applecount = applecount + quantity;
        addfruits(quantity); // call the base class method to update fruits quantity
        //inharite the base class function for updating quntity of apple 
    }
    // return  total value to apple count
    int totalapplecount()
    {
        return applecount;
    }
};
// derived class second
class mangoes : public fruit
{
    // private member
private:
    double Mangoescount;
    // public members of mangoes class
public:
    // default construtor
    mangoes() : Mangoescount(0){}; // intialvalue of mangos  start with 0
    // function  to add qantity of mangos
    void addmangos(double quantity)
    {
        Mangoescount = Mangoescount + quantity;
        addfruits(quantity); // call the base class method to update fruits quantity
    }
    // return  total value of mangos
    int totalmangoes()
    {
        return Mangoescount;
    }
};

int main()
{
    // object of apple class
    apple applefruits;
    // add apples in basekts
    double fruitapple; // create new variable  for add apple
    cout << "Add the apple fruits in Baskets :";
    cin >> fruitapple;
    // calling  function to total apple  by using apple class object
    applefruits.totalapple(fruitapple);

    // object of mango class
    mangoes Mangooo;
    // add mangos in basket
    double addmango; // create varible for add mango
    cout << " Add the mango in Basket :";
    cin >> addmango;
    // calling function  to total  mangos by using class mango object
    Mangooo.addmangos(addmango);

    // display the number of apple
    cout << " numbers of apple is : " << applefruits.totalapplecount() << endl;
    // display the total fruits
    cout << " Total fruits is     : " << applefruits.gettotalfruits() << endl;
    // display the number of mangos
    cout << " numbers of mangos is :" << Mangooo.totalmangoes() << endl;
    // display the total mangos of fruits
    cout << " Total fruits is     : " << Mangooo.gettotalfruits() << endl;

    return 0;
}