#include<iostream>
#include<fstream>
using namespace std;
//base class
class Person{
	protected:
		string name;
		int age;
		string gender;
    public:
    	void getPersonData(){
    		cout<<"Enter the name:";
    		cin>>name;
    		cout<<"Enter the age:";
    		cin>>age;
    		cout<<"Enter the gender:";
    		cin>>gender;
		}
};
// derived class
class Patient:public Person{
	private:
		int patientID;
		string ailment;
		double billAmount;
	public:
		void registerPatient(){
			ofstream file("patients.txt",ios::app);
			cout<<"Enter the patient ID:";
			cin>>patientID;
			getPersonData();
			cout<<"Enter the ailment:";
    		cin>>ailment;
    		cout<<"Enter the bill amount:";
    		cin>>billAmount;
    		file<<patientID<<" "<<name<<" "<<age<<" "<<gender<<" "<<ailment<<" "<<billAmount<<endl;
    		file.close();
    		cout<<"Patient registered successfull:\n";
		}
		void viewHistory(){
			ifstream file("patients.txt");
			cout<<"\n Patient history \n";
			while(file>>patientID>>name>>age>>gender>>ailment>>billAmount)
			cout<<"Patient ID:"<<patientID<<endl;
			cout<<"Patient name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Gender:"<<gender<<endl;
			cout<<"Disease:"<<ailment<<endl;
			cout<<"Bill:"<<billAmount<<endl;
			
		
		file.close();
	}
	
		void calculateBill(){
			cout<<"Enter bill amount:";
			cin>>billAmount;
			cout<<"Total Bill="<<billAmount<<endl;
		}
};
//derived class
class Doctor:public Person{
	private:
		int doctorID;
		string specialty;
		bool isAvailable;
	public:
		void addDoctor(){
		ofstream file("doctors.txt",ios::app);
		cout<<"Enter doctor ID:";
		cin>>doctorID;
		getPersonData();
		cout<<"Enter specialty:";
		cin>>specialty;
		cout<<"Available? (1 Yes / 0 No):";
		cin>>isAvailable;
		file<<doctorID<<" "<<name<<" "<<age<<" "<<gender<<" "<<specialty<<" "<<isAvailable<<endl;
    		file.close();
    		cout<<"Doctor added successfully\n";
    	}
    	void checkAvailability(){
    		if(isAvailable == 1)
    		cout<<"Doctor is available\n";
    		else
    		cout<<"Doctor is not available\n";
		}
		void showDoctorDetails(){
			ifstream file("doctors.txt");
			cout<<"Doctor details";
			while(file>>doctorID>>name>>age>>gender>>specialty>>isAvailable)
			{
				cout<<"Doctor ID:"<<doctorID<<endl;
			cout<<"Doctor name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Gender:"<<gender<<endl;
			cout<<"Specialty:"<<specialty<<endl;
			cout<<"Available:"<<isAvailable<<endl;	
			}
			file.close();
			
		}
};
//main function
int main(){
	Patient p;
	Doctor d;
	int choice;
	do
	{
		cout<<"\nHospital Managemaent System\n";
		cout<<"1.Register patient\n";
		cout<<"2.View patient history\n";
		cout<<"3.Calculate bill\n";
		cout<<"4.Add doctor\n";
		cout<<"5.Check doctor availability\n";
		cout<<"6.Show doctor details\n";
		cout<<"7.Exit\n";
		cout<<"Enter choice:";
		cin>>choice;
		switch(choice){
			case 1:
			p.registerPatient();
			break;
			case 2:
			p.viewHistory();
			break;
			case 3:
			p.calculateBill();
			break;
			case 4:
			d.addDoctor();
			break;
			case 5:
			d.checkAvailability();
			break;
			case 6:
			d.showDoctorDetails();
			break;
			case 7:
			cout<<"program closed.\n";
			break;
			default:
			cout<<"Invalid choice\n";
		}
	}
	while(choice!=7);
	return 0;
}