#include <iostream>

using namespace std;

class player 
{
		//class begins

	private: //only accessible within class

		char name[50];
		int runs;
		int wickets;
		int overs;

	public:  //Accessible outside class

		entry() 
		{
			cout<<endl<<endl<<"In Entry Function ************"<<endl;
			cout<<endl<<"Enter Name: ";
			cin>>name;
			cout<<endl<<"Enter Runs : ";
			cin>>runs;
			cout<<endl<<"Enter Wickets : ";
			cin>> wickets;
			cout<<endl<< "Enter Overs";
			cin>> overs;
		} // entry () ends

		int runrate() 
		{
			cout<<endl<<endl<<"In runrate Function ************"<<endl;
			return (runs / overs );
		}

		float wicketsperover() 
		{
			cout<<endl<<endl<<"In wicketsperover Function ************"<<endl;
			return (wickets / overs ) ;
		}

		display() 
		{
			cout<<endl<<endl<<"In Display Function ************"<<endl<<endl;
			cout << "***********************" << endl;
			cout << "Score Card of The Player" << endl;
			cout<<endl<< "Name          : " << name;
			cout<<endl<< "Runs          : "<< runs;
			cout<<endl<< "Wickets       : "<< wickets;
			cout<<endl<< "Overs         : "<< overs;
			cout<<endl<< "Runrate       : "<<runrate();
			cout<<endl<< "Wicketsperover: "<<wicketsperover();
		}
};//class ends


int main() 
{
	player india[4];
	
	for (int i=0; i<=3;i++)
	{
		cout << endl << "Enter Data for Player No: "<<i;
		india[i].entry();
	}

	for (int i=0; i<=3;i++)
	{
		cout << endl << "Data for Player No: "<<i;
		india[i].display();

	}	
}
