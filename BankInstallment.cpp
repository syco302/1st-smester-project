#include<iostream>
using namespace std;
int main()
{
    double VehicalPrice,DownPayment,MonthlyInstallment,PayableAmount,NewPayableAmmount;
    int month;
    float interestRate;
    char choice;
     //we use do while loop to conitue whole program again:)
    do{
    
    cout<<"Enter Vehical Price in rupees::";
      cin>>VehicalPrice;
    cout<<"Enter Down Payment in rupees::";
      cin>>DownPayment;
    cout<<"For how many months, do you want to lease the car::";
      cin>>month;
    PayableAmount=VehicalPrice-DownPayment;
             //Conditions!! According to given
    if(month<=12){
             //10% interest Rate
        interestRate=0.10; 
    }
     else if(month>12 && month<=24){
             //15% interest Rate
        interestRate=0.15; 
    }
    else if(month>24 && month<=36){
             //20% interest Rate
        interestRate=0.20; 
    }
    else if(month>36 && month<48){
             //25% interest Rate
        interestRate=0.25; 
    }
    else if(month>48 && month<=60){
              //30% interest Rate
        interestRate=0.30; 
    }
              //Calculation Formula
      NewPayableAmmount=(PayableAmount+(PayableAmount*interestRate));
      MonthlyInstallment=NewPayableAmmount/month;
    cout<<"Your Monthly Installment is : RS. "<<MonthlyInstallment<<endl;
                 //choice to program conitue or not by user input
    cout<<"For continue::Press::Y::";
      cin>>choice;
    }while(choice=='Y' || choice=='y');
    return 0;

}