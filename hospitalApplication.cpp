//Now we will create simple hospital Data application
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int ID;
string name;
string Dieases;
double contact;
int choose;
int n;
void H_Data(){
      string hospitalName="Shaikh zahid Hospital RYK";
    string Location="Rahim Yar khan";
    string rating = "Rank-1";
    int Doctor_length=70;
    string degree="MBBS";
    string status="Public";
    cout<<"Hospital Name:"<<hospitalName<<endl;
    cout<<"Location:"<<Location<<endl;
    cout<<"Rating:"<<rating<<endl;
    cout<<"Doctor_length:"<<Doctor_length<<endl;
    cout<<"Degree:"<<degree<<endl;
    cout<<"status:"<<status<<endl;

}
void patient_Data(){
    ofstream myfile;
        myfile.open("patientData.txt");
        if (!myfile.is_open())
        {
            cout<<"file oppening error";
            }else {
            cout<<"Enter Pateint name:";
    cin>>name;
     cout<<"Enter Pateint ID:";
    cin>>ID;
     cout<<"Enter Pateint contact Number:";
   cin>>contact;
     cout<<"Enter Pateint Dieases:";
    cin>>Dieases;
    
     myfile<<"Pateint name:"<<name<<endl;
     myfile<<"Pateint ID:"<<ID<<endl;
     myfile<<"Pateint contact Number:"<<contact<<endl;
     myfile<<"Pateint Dieases:"<<Dieases<<endl;
     
      myfile.close();
        
        }
    
     }
     void view_patientData()
     {
        string st;
ifstream myfile;
myfile.open("patientData.txt");
 
    while(getline(myfile,st))
    {
        cout<<st<<endl;
    }

}

     
   
int main()
{
    do{
        
cout<<"1-Registration of Patient:"<<endl;
cout<<"2-View Details About Hospital:"<<endl;
cout<<"3-view Data Of a patient:"<<endl;
cout<<"4_exit"<<endl;
     cout<<"Please choose::";
     cin>>choose;
if(choose==1){
    patient_Data();
    cout<<endl<<"---------------------------------";
}
else if (choose==2)
{
   H_Data();
   cout<<endl<<"---------------------------------";
}
else if (choose==3)
{
    view_patientData();
    cout<<endl<<"---------------------------------";
}
 
    }while(choose!=4);

return 0;
}