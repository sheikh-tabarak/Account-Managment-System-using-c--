#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
using namespace std;
string choice;
	int amount[500];
	string name[500];
    string age[500];
    string mobileno[500];
	int n=0;
	string oldp="bank123";
	
		void display(){   
    	cout<<"______________________________________________________________________________________________________________________________________________________________________\n\n";
    
    cout<<"\t\t\t\t<<<<<<<<<<      *********  (     ACCOUNT MANAGMENT SYSTEM     ) *********     >>>>>>>>>>\n";
		cout<<"\n______________________________________________________________________________________________________________________________________________________________________\n\n\n";
}

		
	void totalbalance(){
	display();
	 		cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<"\n\t************ >  \tTOTAL BALANCE\t  < ************\n\n";
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	int sum=0;
	for(int i=0;i<n;i++){
	sum=sum+amount[i];}
	cout<<"\nTotal balance in form of cash in your bank is = Rs."<<sum<<endl;
}


	
	void accountchart(){
		display();
		
		 cout<<"_______________________________________________________________________________________________________________________________________\n";		
cout<<"\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";

		 cout<<"NO.  ACCOUNT NUMBER\t\tACCOUNT TITLE\t\tAGE\t\tMOB NO.\t\t\tBALANCE\n\n";
  		for(int i=0;i<n;i++){
        cout<<i+1<<" ) "<<"TAB_BANK 7860"<<i+1<<"\t\t"<<name[i]<<"\t\t\t"<<age[i]<<"\t\t"<<mobileno[i]<<"\t\t"<<amount[i]<<endl;
}
cout<<"\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";
		cout<<"_______________________________________________________________________________________________________________________________________\n";}
	
	

	
	
	void passwordChange(){
			display();	
    	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<"\n\t************ >  \t CHANGE PASSWORD \t  < ************\n\n";
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
        string a,b,o;
			oldp:
	cout<<"\nEnter Your Old Password = ";
	cin>>o;
	cout<<endl;
	if(oldp==o){
		newp:
		cout<<"Enter a new password = ";
		cin>>a;
		cout<<"Re-Enter your Password = ";
		cin>>b;
		if(a==b){
			oldp=a;
			system("cls");
			display();
		cout<<"\n Your password has been saved \n";
	
		}
		else{ cout<<"\aBoth password you entered does not matched , Try Again \n";goto newp;}
	}	else {cout<<"\aWrong password \n";goto oldp;}
}



//void transaction(string name1,string name2,int amount1){}
	

int main(){
	
	lock:
	string b;
    cout<<"Enter your Password  : ";
	cin>>b;
	system("cls");
	if(b==oldp){
char x;
   
     password:
    	
    do{
    	display();	
    cout<<" | $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ |\n";
    cout<<"\n |                 ************ >  \t MAIN MENU \t  < ************            |\n\n";
	cout<<" | $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ |\n";

cout<<"\n\t1:  Add a New Account\n";
cout<<"\t2:  Credit  \n";
cout<<"\t3:  Debit   \n";
cout<<"\t4:  Check total cash of bank\n";
cout<<"\t5:  All Account Inventory\n";
cout<<"\t6:  Check balance of any account \n";
cout<<"\t7:  Lock your Bank \n"; 
cout<<"\t8:  Exit the Bank\n";
cout<<"\t9:  Made a Transaction \n";
cout<<"\t10: Delete an Account  \n";
cout<<"\t11: Edit information of any account \n";
cout<<"\t12: Change the password of your bank\n";
cout<<"\t13: Service Taxes * \n";

cout<<"\tYour Choice=";


cin>>choice;
system("cls");



if(choice=="11"){
	edit1:
	display();
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<"\n\t************ >  \t EDIT ACCOUNT INFORMATION \t  < ************\n\n";
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	if(n>0){
	string nam,nam2,nammob,namcnic,namage;
	string a;
	int finalname;
	cout<<"\nEnter the Account title whose information you want to alter = ";
	cin>>nam;
	for(int i=0;i<n;i++){

    	if(nam==name[i]){
    		finalname=i;}
	}
	if(name[finalname]==nam){
		edit2:
		cout<<"1: Change Name \n";		
		cout<<"2: Change Mobile No\n";
		cout<<"3: Change Age \n";
        cout<<" Your Choice = ";
cin>>a;
if(a=="1"){
	cout<<"The Last name of this account is \""<<name[finalname]<<"\""<<"\nEnter the new name of the Account :";
	cin>>nam2;
	name[finalname]=nam2;
	cout<<"\nThe name of this account have been changed successfully \n";}

else if(a=="2"){
	cout<<"The Last Mobile no you entered is \""<<mobileno[finalname]<<"\""<<"\nEnter the new Mobile no :";
	cin>>nammob;
	mobileno[finalname]=nammob;
	cout<<"\nThe Mobile no have been changed successfully \n";
}

else if(a=="3"){
	cout<<"The Last age you entered is \""<<age[finalname]<<"\""<<"\nEnter the new Age :";
	cin>>namage;
	age[finalname]=namage;
	cout<<"\nYour Age have been Updated Successfully \n";
	
}
/*else if(a=="4"){
	cout<<"The Last CNIC You Entered is \""<<name[finalname]<<"\""<<"\nEnter the new CNIC :";
     cin>>namcnic;
     cnic[finalname]=namcnic;
     cout<<"\nYour CNIC No have Been Updated Successfully\n"
}*/
else{goto edit2;}
char quit1;
go1:
cout<<"\n\nEnter \"q\" to go to the main menu \nEnter \"e\" to Edit Information of another account";
	cin>>quit1;
	
		if(quit1=='e'){system("cls");goto edit1;}

	else if (quit1=='q'){system("cls");goto password;}


		else{
		cout<<" Error \n";
		goto go1;}
    
	}else {cout<<"\a\nThere is no account of is name in This Bank \n";
}

}
else cout<<"\a\nSorry , There is no Account in this Bank Yet \n";}



if(choice=="9"){
	transfer:
	display();
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<"\n\t************ >  \t MAKE A TRANSACTION \t  < ************\n\n";
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	if(n>0){
	string name1,name2;
	int amount1,index1=0,index2=0;
	cout<<"\nEnter the name of account from which amount is extracted = ";
	cin>>name1;
	cout<<"\nEnter the name of account in which amount is to be added = ";
	cin>>name2;
	cout<<"\nEnter the amount you want to transfer ";
	cin>>amount1;
	for(int i=0;i<n;i++){
     	if(name2==name[i]){
    	index2=i;}}
	//	index2++;}
    //	if(index2==n){cout<<"Sorry , Thier is no account of this name ";	}
    
	
		for(int i=0;i<n;i++){
     	if(name1==name[i]){
    	index1=i;}}
	//	index2++;}
    //	if(index2==n){cout<<"Sorry , Thier is no account of this name ";	}
    	if(amount1<=amount[index1]){
    		amount[index1]=amount[index1]-amount1;
    		amount[index2]=amount[index2]+amount1;
		}
		else {cout<<"\aThe amount you entered is invalid\nThere are only Rs. "<<amount[index1]<<" Present in this account ";}
			char quit1;
	cout<<"\nYour Money is transfered successfully \n";
	
	cout<<"\n\nEnter \"q\" to go to the main menu \nEnter \"t\" to add another account";
	cin>>quit1;

	if(quit1=='t'){system("cls");goto transfer;}

	else if (quit1=='q'){system("cls");goto password;}
}else cout<<"\n\aThere is no account in this bank yet ";
		}
			
			
		
//	transaction(name1,name2,amount1);

else if(choice=="10"){
        del:
		display();
			cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<"\n\t************ >  \tDELETE AN ACCOUNT\t  < ************\n\n";
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	if(n>0){
		
	    string del;
		int finalname;
		cout<<"\nEnter The Account Title which you want to delete = ";
		cin>>del;
		for(int i=0;i<=n;i++){

      
    	if(del==name[i]){
    	finalname=i;}
	}
	 if (del!=name[finalname]){
		cout<<"\nThere is no Account Present with is name ";
		goto del2;
	}
	else if(del==name[finalname]){
		for(int i=finalname;i<n;i++){
	        name[i]=name[i+1];
	       amount[i]=amount[i+1];
	        age [i]= age[i+1];
			mobileno[i]=mobileno[i+1];	}
		  n--;
		  
		  cout<<"\n\aThis Account Have Been Deleted successfully\n";
		  del2: 
		  char quit1;
		  	cout<<"\n\nEnter \"q\" to go to the main menu \nEnter \"d\" to delete another account";
	cin>>quit1;

	if(quit1=='d'){system("cls");goto del;}

	else if (quit1=='q'){system("cls");goto password;}
	else goto del2; }
	} else cout<<"\a\n\nThere is no account Present in this bank yet\n\n";
	
}
	

else if(choice=="5"){accountchart();}

else if(choice=="8"){display();cout<<"\aBanks is Going To be Closed\n";goto exit;}


else if(choice=="7"){display();cout<<"Your Bank is Locked \n";goto lock;}


else if(choice=="4"){totalbalance();}

if(choice=="12"){passwordChange();goto lock;}

else if(choice=="3"){
	redebit:
	system("cls");
	display();
	 		cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<"\n\t************ >  \tDEBIT AMOUNT\t  < ************\n\n";
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	
	if(n>0){
	char quitd; 
	string deb;
	int deb2=-1,debit;
	try2:
    cout<<"Account Title from which you want to remove cash amount = ";
     cin>>deb;
    for(int i=0;i<n;i++){
    	if(deb==name[i]){
    		deb2=i;}}
    		 if(deb2==-1){cout<<" \n\aYour Entered Name is Non-Valid \n";goto try2;
			}
			
    		redebit2:
cout<<"Enter the amount Debited =  ";
cin>>debit;
if(debit<=amount[deb2]){
amount[deb2]=amount[deb2]-debit;
cout<<"Rs."<<debit<<" are removed from account number( TAB_BANK 000"<<deb2+1<<" ) , Account Tiltle ( "<<name[deb2]<<" )\n\n";
}
else cout<<"\a\nThe amount you entered is invalid\nThere are only Rs. "<<amount[deb2]<<" Present in this account ";
gone:
	cout<<"\n\nEnter \"q\" to go to the main menu \nEnter \"d\" to Debit again";
	cin>>quitd;

	if(quitd=='d'){goto redebit;}
	
	else if (quitd=='q'){system("cls");goto password;}
	
		else
		cout<<" \aError \n";
		goto gone;}
		
		
else cout<<"\a\nSorry , There is No Account in this bank yet \n\n";}





else if(choice=="2"){
	recredit:
	system("cls");
	display();
	 		cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<"\n\t************ >  \tCREDIT AMOUNT\t  < ************\n\n";
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	
	if(n>0){
	char quitc;
	string cre;
	int cre2=-1,credit;
	cout<<"\nCREDIT AMOUNT\n\n";
	try1:
    cout<<"Account Title in Which you want to add cash amount = ";
     cin>>cre;
     
    for(int i=0;i<n;i++){
    	
    	if(cre==name[i]){
    		cre2=i;}}
			 if(cre2==-1){ cout<<" \aYour Entered Name is Non-Valid \n";goto try1; }
			
cout<<"Enter the amount Credited =  ";
cin>>credit;
amount[cre2]=amount[cre2]+credit;
cout<<"Rs."<<credit<<" are added to account number( TAB_BANK 000"<<cre2+1<<" ) , Account Tiltle ( "<<name[cre2]<<" )\n\n";
	goes:
	cout<<"\n\nEnter \"q\" to go to the main menu \nEnter \"c\" to Credit again";
	cin>>quitc;
	
	if(quitc=='c'){goto recredit;}
	
	else if (quitc=='q'){system("cls");goto password;}
	
	
		else
		cout<<" \a\nError \n";
		goto goes;
}

else cout<<"\n\aSorry , There is No Account in this bank yet ";}





else  if(choice=="1"){
 	recreate:
 			system("cls");
 			display();
 		cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<"\n\t************ >  \tADD AN ACCOUNT\t  < ************\n\n";
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
	string names;
	
	cout<<"\nYour are Going to add the account in this Bank\n\n";
	cout<<"Enter the account Title               = ";
	cin>>name[n];
	cout<<"Enter the Initializing balance (RS.)  = ";
	cin>>amount[n];
	cout<<"Enter the age of Owner(Years)         = ";
	cin>>age[n];
	cout<<"Enter the Mobile no of Account Holder = ";
	cin>>mobileno[n];
    n++;

		char quit1;
	cout<<"Your Entery is added successfully \n";
	go:
	cout<<"\n\nEnter \"q\" to go to the main menu \nEnter \"a\" to add another account";
	cin>>quit1;
     
	if(quit1=='a'){goto recreate;}

	else if (quit1=='q'){system("cls");goto password;}


		else
		cout<<" Error \n";
		goto go;}





else if(choice=="6"){
	system("cls");
	display();
	 		cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<"\n\t************ >  \tSEARCH AN ACCOUNT\t  < ************\n\n";
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
if(n>0){
	int choiceS,finalname;
	string nam;
	choices:
	cout<<"\n1: search by name\n2: Search by Account number\n\n";
    cin>>choiceS;

    if (choiceS==1){
    cout<<"Enter the Name Whose Inventery You want =";
    cin>>nam;

    for(int i=0;i<n;i++){

    	if(nam==name[i]){
    		finalname=i;}
	}
	if(nam==name[finalname]){
cout<<"\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";	
		cout<<"ACCOUNT NUMBER\t\tNAMES\t\tAGE\t\tMOBILE NO.\t\t\tBALANCE\n";
	cout<<"TAB_BANK 000"<<finalname+1<<"\t\t"<<name[finalname]<<"\t\t"<<age[finalname]<<"\t\t"<<mobileno[finalname]<<"\t\t"<<amount[finalname]<<endl;
    again1:
	int choicea;
	cout<<"\n1: Debit Cash \n2: Credit Cash\n3: Go to Main Menu\nYour Choice = ";
	cin>>choicea;
	
	if(choicea==3){system("cls");goto password;}
	else if (choicea==1){
		int credit1;
	cout<<"Enter the amount Debited =  ";
cin>>credit1;
amount[finalname]=amount[finalname]-credit1;
cout<<"Amount Successfully Removed from this account\n";}

	else if (choicea==2){	int credit2;
	cout<<"Enter the amount Credited =  ";
cin>>credit2;
amount[finalname]=amount[finalname]+credit2;
cout<<"Amount Successfully Added to account\n";}


	else {cout<<"\a Error ! enter again\n";goto again1;}
cout<<"\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";}
else cout<<"\n\n\aThere is account With This name in the Bank \n";}

    else if (choiceS==2){
    	int an;
    	cout<<"Enter the last two digit Account number Whose Inventery You want =";
    	cin>>an;
    	
	int choicea;
    	
cout<<"\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";	
		cout<<"ACCOUNT NUMBER\t\tNAMES\t\tAGE\t\tMOBILE NO.\t\t\tBALANCE\n";
	cout<<"TAB_BANK 000"<<an<<"\t\t"<<name[an-1]<<"\t\t"<<age[an-1]<<"\t\t"<<mobileno[an-1]<<"\t\t"<<amount[an-1]<<endl;
	
	
	again2:
	int choiceb;
	cout<<"\n1: Debit Cash \n2: Credit Cash \n3: Go to main menu \n\nYour Choice = ";
	cin>>choiceb;
	
	if (choiceb==1){
		int credit3;
	cout<<"Enter the amount Debited =  ";
cin>>credit3;
amount[an]=amount[an]-credit3;
cout<<"Amount Successfully Removed from this account\n";}

	else if (choiceb==2){	int credit4;
	cout<<"Enter the amount Credited =  ";
cin>>credit4;
amount[an]=amount[an]+credit4;
cout<<"Amount Successfully Added to this account\n";}
else if(choiceb==3){system("cls");goto password;}

	else {cout<<"enter again\n";goto again2;}

cout<<"\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";} 

char quit1;
	go2:
	cout<<"\n\nEnter \"q\" to go to the main menu \nEnter \"s\" to search again";
	cin>>quit1;
	
	if(quit1=='s'){system("cls");goto choices;}
	
	else if (quit1=='q'){system("cls");goto password;}
	
		else
		cout<<" Error \n";
		system("cls");display();goto go2;
	}else cout<<"\a\nSorry ! There is no Account in this Bank yet \n\n";
    	
}	
//{
//	system("cls");cout<<"You Entered an Incorrect command \n\n";goto password;
//}
cout<<"\n\nEnter \"q\" to go to the main menu and any other to quit";
cin>>x;
system("cls");goto password;
}while(x!='q');

}

else if (b!=oldp){
system("cls");
display();
cout<<"\a\n\nSorry , Your PIN is inccorrect. Try Again \n\n";
goto lock;}

exit:
cout<<"______________________________________________________________________________________________________________________________________________________________________\n\n";

return 0;
}
