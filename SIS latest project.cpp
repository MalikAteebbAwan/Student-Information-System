//ERROR, when we put Qualoification in string
// Don't showing Nationality in Check ALl Records;
//ERROR, When we put string character in password;
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
	bool chk =false ;
	string secQues;
	char Uchc;
    int degree, uipassword, iEN, aupassword = 309194, pwmaxAttempts = 3, pwattempts = 0, maxstudent=50, studentIndex=0, EN=936900, lengthCNIC=15, lengthPN=12;
    string uname, nationalitty, userSecurityAnswer, auname = "M.Ateeb", SecurityAnswer = "Black"; // Assigning the admin name
    char choice, choose;  // For storing user input as 'char'
    string nsname[maxstudent];
    string studentfathername[maxstudent];
    string OID[maxstudent];
    string contactNumber[maxstudent];
    string EMAIL[maxstudent];
    string Group[maxstudent];
    string Address[maxstudent];
    string Nationality[maxstudent];
    int nsEN[maxstudent];
    
    cout<<"=======WELCOME TO STUDENT INFORMATION SYSTEM=======\n";
    
    cout << "If you are administrator, then click 1." << endl;
    cout << "If you are a student, then click 2." << endl;
    cin >> choice;  // Read the choice (as char)
    cin.ignore(); // Clear the newline character left by cin >> choice
    switch (choice) {
    case '1':  // For administrator
        cout << "==========ADMINISTRATION PART=============" << endl;
         do {
        cout << "==========Sign In First To Login==========\n=====Please Enter the Username & Password=====\nUsername :  ";
        cin>> uname;
        cout << "Password : ";
         cin >> uipassword;
        cout <<"============================================\n";
        chk = false;
        if (uname != auname || uipassword != aupassword) {
            chk = true;
            cout << "Incorrect Credentials Provided !\n";
            cout <<"============================================\n";
            cout <<"FORGOT PASSWORD ?(Y/N) : ";
            char chPass;
            cin>>chPass;
            cout <<"============================================\n";
            while(chPass=='Y'||chPass=='y'){
            	cout <<"\n======SECURITY QUESTION======\n";
            	cout <<"What is your favourite color ? : ";
            	string secQues;
            	cin>>secQues;
            	if(secQues=="Black"||secQues=="black"){
            		cout <<"Please Enter the New Password : ";
            		cin>>uipassword;
            		aupassword = uipassword;
            		cout <<"Password Updated!";
            		cout <<"\n=============================================\n\n";
            		break;
				}else{
					cout <<"Invalid Input!\n";
					cout <<"Ending the Program...";
					return 0;
				}
			}

        }
    } while (chk == true);
        /*do{
		
            cout << "Please enter the name of user: ";
            getline(cin, uname);  // Get full name from user
            
            cout << "Please enter the password for accessing control of student information data: ";
            cin >> uipassword;
            if(uname!=auname){
            	
				
            	cout <<"Incorrect Username Entered !\n";
            	cout <<"Do you want to try again ? (Y/N) ";
            	cin>>Uchc;
            
            
			}
			if(uipassword!=aupassword){
				cout <<"Incorrect Password Entered !";
				cout <<"Do you want to try again ? (Y/N) ";
            	cin>>Uchc;
            
				
			}
            
            
        } while (Uchc=='Y'||Uchc=='y');  // Loop until user enters correct password or opts out
        if(uname!=auname||uipassword!=aupassword){
        	cout <<"You will be given a last chance for your SignIn !\n";
        	cout <<"=====SECURITY QUESTION====";
        	cout <<"What is your favourite color ? (Dont use Capslock) ";
        	cin>>secQues;
        	if (secQues=="black"||secQues=="Black"){
        		cout <<"Enter your new Password : ";
        		cin>>aupassword;
			}else{
				cout <<"Last Chance ended! \n Now Ending the Program...";
				return 0;
			}
		}
        */
        
		do{
		cout<<"=====SELECT ANY CHOICE FOR PROCEEDING INFORMATION====="<<endl;
        
        cout<<"1. For Entering Information of New Student:\n";
        cout<<"2. For Checking Information of Specific Student:\n";
        cout<<"3. For Checking Informations of ALL Students:\n";
        cout<<"4. For Deleting Information of Specific Student:\n";
        cout<<"5. For Terminating the Program\n";
        
        bool found = false;
        cin>>choice;
        switch (choice) {
        case '1':
        cout << "Please enter the name of student:";
        cin.ignore();             // Clear the newline character left in the buffer by previous cin inputs
        getline(cin, nsname[studentIndex]);      
        
        cout<<"Please enter the father name of Student:";
        getline(cin,  studentfathername[studentIndex]);
        
        do{
	      cout<<"Please Enter the PHONE number with dash(-):";
	      getline(cin, contactNumber[studentIndex]);
	      if(contactNumber[studentIndex].length()==lengthPN){
	    	 cout<<"Your phone number is correct.";
	    	 break;
		  }
		  if(contactNumber[studentIndex].length() > lengthPN){
			 cout<<"Your digits in phone number are greater than 11.";
		  }
		  else{
			 cout<<"Your digits in phone number are less than 11.";
		  }
		  cout<<"You have to put phone number again through (Y/y for yes, any other key for no): ";
		  cin>>choice;
		  cin.ignore();
	    } while( choice == 'Y' || choice == 'y');
	    
	    do{
	    	cout<<"Please Enter the CNIC of student with dashes(-):";
	    	getline(cin, OID[studentIndex]);
	    	cin.ignore();
	    	if(OID[studentIndex].length() == lengthCNIC){
	    	 cout<<"Your CNIC ID is correct.";	
	    	 break;
			}
			if(OID[studentIndex].length() < lengthCNIC){
				cout<<"Your digits in CNIC are less than 13.";
			}
			else{
				cout<<"Your digits in CNIC are greater than 13.";
			}
			cout<<"You have to put CNIC again through (Y/y for yes, any other key for no): ";
		   cin>>choice;
		  cin.ignore();
	    } while( choice == 'Y' || choice == 'y');
		
			cout<<"Please enter the EMAIL of student, that must contain @ : ";
			getline(cin, EMAIL[studentIndex]);
			
        cout<<"Enter the Degree of Education in integer:";
        cin>>degree;
        int percentage, tmarks, omarks;
        if(degree == 12){        
           cout<<"Plz enter the total marks of intermediate level: "<<endl;
	       cin>>tmarks;
	       cout<<"Plz enter the obtained marks of intermediate level: "<<endl;
	       cin>>omarks;
	
	       percentage = omarks * 100 / tmarks;
	       if(percentage>60){
		   cout<<"\n";
	       }
		   else{
	       cout<<"You are not elligible for taking information in this university.";
	       }
        }

        if(degree<12){
        	cout<<"Your Qualification is less then intermediate.";
        	break;
		}
		else if(degree>12){
			cout<<"oh! Wyh you want to take admission heere. Your Qualification is also Bachelor.";
			break;
		}
        
        cout<<"Please Enter the Group of Previous Qualification:";
        cin.ignore();
        getline(cin, Group[studentIndex]);
        cout<<"Student Qualification is entered:"<<Group[studentIndex]<<endl;
        
        cout<<"Please Enter the Nationality:";
        cin>>nationalitty;
        
        cout<<"Please Enter the Address from Where you belong:";
        cin.ignore();
        getline(cin, Address[studentIndex]);
        cout<<"The Address of "<<nsname[studentIndex]<<" is "<<Address[studentIndex]<<endl;
        
        cout<<"After your all information is related to our requirement. We say WELCOME to choosing this University.\n";
        cout<<"Now, we are giving you Enrollement number, it's your Identity number in university.\n";
        nsEN[studentIndex] = EN;
        cout<<nsEN[studentIndex]<<endl;
        EN++;
        studentIndex++;
        break;
        
        case '2':
        cout << "===CHECKING INFORMATION OF SPECIFIC STUDENT===\n";
        cout << "Please Enter the Enrollement number of student: ";
        cin >> iEN;
  
        for (int i = 0; i < studentIndex; i++) {  
           if (nsEN[i] == iEN) {  
              found = true;
              cout << "Student is Enrolled:\n";
              cout << "Name: " << nsname[i] << "\n";
              cout << "Father Name: " << studentfathername[i] << "\n";
              cout << "CNIC: " << OID[i] << "\n";
              cout << "Contact Number: " << contactNumber[i] << "\n";
              cout << "Email: " << EMAIL[i] << "\n";
              cout << "Group: " << Group[i] << "\n";
              cout << "Address: " << Address[i] << "\n";
              cout << "Nationality: " << Nationality[i] << "\n";
              break;  // Exit the loop as we've found the student
            }
       }
    
        if (!found) {  // If no student was found with the given enrollment number
        cout << "Student is not Enrolled!" << endl;
       }
        break;
        
        case '3':
    	cout<<"===Welcome to CHECK INFORMATION of ALL STUDENTS==="<<endl;
    	if(studentIndex > 0){
    		for(int i=0; i < studentIndex; i++){
				cout<<"\nStudent Enrollement Number: "<<nsEN[i];
				cout<<"\nStudent Name: "<<nsname[i];
				cout<<"\nStudent Father Name: "<<studentfathername[i];
				cout<<"\nStudent Original CNIC Number: "<<OID[i];
				cout<<"\nStudent Contact Number: "<<contactNumber[i];
				cout<<"\nStudent EMAIl Address: "<<EMAIL[i];
				cout<<"\nStudent last Qualification Group: "<<Group[i];
				cout<<"\nStudent Home Address: "<<Address[i];
				cout<<"\nStudent Nationality: "<<Nationality[i];
				cout<<"-----------------------------------------"<<endl;
			}
		}
		else {
			cout<<"No Students Enrolled yet!";
		}
		break;
		
		case '4':
			cout<<"===WELCOME TO DELETE RECORD INFORMATION OF ANY STUSENT===\n";
			cout<<"Please enter the Enrollement number that's information you want to delete:"<<endl;
			cin>>iEN;
			if(studentIndex > 0){
			   bool find = false;
			   for(int i=0; i<studentIndex; i++){
				 if(iEN==nsEN[i]){
					found = true;
					
					for(int j=i; j<studentIndex-1; j++){
						nsname[j] = nsname[j+1];
                        studentfathername[j] = studentfathername[j+1];
                        OID[j] = OID[j+1];
                        contactNumber[j] = contactNumber[j+1];
                        EMAIL[j] = EMAIL[j+1];
                        Group[j] = Group[j+1];
                        Address[j]= Address[j+1];
                        Nationality[j] = Nationality[j+1];
                        nsEN[j] = nsEN[j+1];           
					}
					studentIndex--;
					cout<<"Record Information on "<<iEN<<"has been deleted successfully.";
					break;
				}
				if(!found){
					cout<<"Student Enrollement Number not Enrolled till now!";
				}
			}
		} 
		else{
			cout<<"NO RECORD Information for deleting!";
		}
		  break;             
		case '5':
                cout << "Terminating the Program." << endl;
                return 0;  
                
        default:
                cout << "Invalid choice!" << endl;
                break;
    } 
	    cout << "Do you want to try again? (Y/y for yes, any other key for no): ";
        cin >> choice;  
    }while (choice == 'Y' || choice == 'y');
    
    

    case '2':  // For student
        cout << "===CHECKING INFORMATION OF SPECIFIC STUDENT===\n";
        cout << "Please Enter the Enrollement number of student: ";
        cin >> iEN;
  
        for (int i = 0; i < studentIndex; i++) { 
		   bool found = false; 
           if (nsEN[i] == iEN) {  
              found = true;
              cout << "Student is Enrolled:\n";
              cout << "Name: " << nsname[i] << "\n";
              cout << "Father Name: " << studentfathername[i] << "\n";
              cout << "CNIC: " << OID[i] << "\n";
              cout << "Contact Number: " << contactNumber[i] << "\n";
              cout << "Email: " << EMAIL[i] << "\n";
              cout << "Group: " << Group[i] << "\n";
              cout << "Address: " << Address[i] << "\n";
              cout << "Nationality: " << Nationality[i] << "\n";
              break;  
            }
            if (!found) {  
              cout << "Student is not Enrolled!" << endl;
            }
        break;
       }
        
    default:
        cout << "Invalid choice!" << endl;
        break;
    }
}