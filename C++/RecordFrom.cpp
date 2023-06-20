#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file;
	file.open("Record.txt",ios::app);
	if (!file){
		cout<<"file not found";
	}
	else{
		string Name;
		int Number;
		float Percentage;
		
		cout<<"Enter Your Name"<<endl;
		cin>>Name;
		cout<<"Enter Your Number"<<endl;
		cin>>Number;
		
		cout<<"Enter Your Percentage"<<endl;
		cin>>Percentage;
		
		file<<Name<<"\n";
		file<<Number<<"\n";
		file<<Percentage<<"\n";
		
	}
	file.close();	
}
