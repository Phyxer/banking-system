 #include<bits/stdc++.h>
using namespace std;
//banking system
bool is_Logged_In()
{
	string username, password, ur_name, ps_word,accno,pin; //creating string to initialize all the parameters required in running a bank account
	cout<<"Enter Username: ";
	cin>>username;
	cout<<"Enter Password: ";
	cin>>password;

    cout<<"Enter Bank account number"; 
    cin>>accno; 
	
	cout<<"Enter Pin";
    cin>>pin;

     //standard input data required for bank details if we decide to store them
	ifstream myFile;
	myFile.open("C:\\" + username + ".txt");
	 getline(myFile,ur_name);
	 getline(myFile,ps_word);
     getline(myFile,accno);
      getline(myFile,pin); 
	if(ur_name == username && ps_word == password && accno==accno && pin==pin){
		return true;
	}else{
		return false;
	}
}
int main(){
	int option;

	cout<<"1: Register"<<endl<<"2:Login"<<endl<<"Your Choice: ";
	cin>>option;
	if(option == 1){
		string username, password,acco,Pin;

		cout<<"Select a Username: ";
		cin>>username;
		cout<<"Select a Password: ";
		cin>>password; 

        cout<<"Select your Account Number"; 
        cin>>acco;

        cout<<"select your PIN"; 
        cin>> Pin;
   
		ofstream MyFile;
		MyFile.open("data\\" + username + ".txt");
		MyFile<<username<<endl<<password<<endl<<acco<<endl<<Pin<<endl;

		MyFile.close();

		main();
	}else if(option == 2){
		bool status = is_Logged_In();

		if(!status){
			cout<<"Incorrect Username,Password,account number or PIN!"<<endl;
			system("PAUSE");
			return 0;
		}else{
			cout<<"Succesfully Logged In"<<endl;
			system("PAUSE");
			return 1;
		}
	}
}
