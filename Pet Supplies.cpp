#include <iostream>
using namespace std;
//Question
int main (){

    //Pet Suppliesby Price
    double dogFood = 50;
    double catLitter = 20;
    double fishTank = 30;
    double salesTax = 0.05;
    //Quantity of Pet Supplies
    double dogFoodQ = 10;
    double catLitterQ= 20;
    double fishTankQ= 30;
    //Total Price of each Pet Supply
    double dogFoodT, catLitteT, fishTankT;
    dogFoodT = dogFood * dogFoodQ;
    catLitteT = catLitter * catLitterQ;
    fishTankT = fishTank * fishTankQ;
    double subTotal, tax;
    subTotal = dogFoodT + catLitteT + fishTankT;
    tax = salesTax *  subTotal;
    double Total_Price_AfterTax;
    Total_Price_AfterTax = subTotal - salesTax;

    //Dislay
    cout<<"Price of each Supply"<<endl;
    cout<<"Dog Food: K"<<dogFoodT<<endl;
    cout<<"Cat Litter: K"<<catLitteT<<endl;
    cout<<"Fish Tank: K"<<fishTankT;
    //Display
    cout<<"Dog Food  Quantity(kg): "<<dogFoodQ<<endl;
    cout<<"Cat Litter  Quantity(kg): "<<endl;
    cout<<"Fish Tank Quantity(kg): "<<dogFoodQ<<endl;
    //Subtotal
    cout<<"Your Subtotal is: K"<<subTotal<<endl;
    //Tax
    cout<<"Your Tax is: K"<<tax<<endl;
    //Total amout of the Supplies
    cout<<"Your Final Total is: K"<<Total_Price_AfterTax<<endl;
    cout<<"Made with love from Silicon Valley";

    return 0;

}




