 #include<iostream>
 using namespace std;
 // I am using functions to make differents types of asteric pattern!!  
 void printPattern_1() // it is a use define fucntion . it can be defined anywhere.
 {
    // outer For loop to execute inner loop
    int i,j;
    for(i=1; i<=10; i++)
    {
        // Inner for loop to print asteric according to conditons
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl; // endl function is used to print asteric next line
    }
 }
 void printPattern_3()
 {
    int i,j,k;
     // using of nested loop 
    for(i=1; i<=10; i++)
    {
        // this loop is used to give space 
        for(j=1; j<=i; j++)
        {
            cout<<" ";
        }
        for(k=10;k>=j; k--) // this loop is used to print asteric
        {
            cout<<"*";
        }
        cout<<endl;
    }
 }
 void printPattern_2()
 {
    int i,j,k;
    for(i=10; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<" ";
        }
        for(k=i; k<=10; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
 }
 void printPattern_4()
 {
    int i,j,k;
    for(i=10; i>=1; i--)
    {
        for(k=1; k<=i; k++)
        {cout<<"*";}
        for(j=10; j>=1; j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
 }
 void printPattern_5()
 {
    int i,j,k,l;
    l=10;
    for(i=1; i<=l; i++)
    {
        for(j=i; j<=l; j++)
        {
            cout<<" ";
        }
        for(k=1; k<=(2*i-1); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
 }
 void printPattern_6()
 {
     int i,j,k,l;
    l=10;
    for(i=l; i>=1; i--)
    {
        for(j=l; j>=i; j--)
        {
            cout<<" ";
        }
        for(k=1; k<=(2*i-1); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
 }
 void printPattern_7()
 {
    int i,j,k,l;
    l=7;
    for(i=1; i<=l; i++)
    {
        for(j=i; j<=l; j++)
        {
            cout<<" ";
        }
        for(k=1; k<=(2*i-1); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
     for(i=l; i>=1; i--)
    {
        for(j=l; j>=i; j--)
        {
            cout<<" ";
        }
        for(k=1; k<=(2*i-1); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
 }

 int main()
 {
    // Iam recalling the functions which are defined out of the main function!!!
cout<<"-------------Pattern::1---------------"<<endl;
printPattern_1();
cout<<"-------------Pattern::2---------------"<<endl;
printPattern_2();
cout<<"-------------Pattern::3---------------"<<endl;
printPattern_3();
cout<<"-------------Pattern::4---------------"<<endl;
printPattern_4();
cout<<"-------------Pattern::5---------------"<<endl;
printPattern_5();
cout<<"-------------Pattern::6---------------"<<endl;
printPattern_6();
cout<<"-------------Pattern::7---------------"<<endl;
printPattern_7();
return 0;
 }