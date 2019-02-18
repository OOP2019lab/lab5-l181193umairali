#include"q1_18l1193.h";
 bankAccount:: bankAccount(string name,int accounttnum)
{
	username=name;
	 acctnum= accounttnum;
	transaction = nullptr;
	balance = 20000;
	balancelimit = 200000;
	limit = 1;
	numoftransaction = 0;

 };
 void bankAccount::print()
 {
	 
	// cout<<"Name of user :"<<username<<endl;
	 cout <<balance<<endl;
	 cout<<"account number :"<<acctnum<<endl;
	 cout<<"The toptal num of transaction : "<<numoftransaction<<endl;
	 for(int i=0;i<numoftransaction;i++){
	 cout<<"Transaction :"<<transaction[i]<<endl;

 }
 }
 void bankAccount::withdraw(int amount)
 {
	 if(transaction == nullptr){
		 transaction =new int [limit];
		 transaction[0]=-amount;
		 balance = balance - amount; 
		 numoftransaction++;

	 }
	 else if(transaction !=nullptr )
	 {
		 int *y=new int [limit*2];
 for(int i=0;i<numoftransaction;i++){
	 y[i]=transaction[i];
 }
	 balance = balance-amount;
	 delete []transaction;

	 y[numoftransaction]=-amount;
	  
	  transaction = y;
	  numoftransaction++;
	 }
 }
 void bankAccount::deposit(int amount)
 {
	 if(transaction == nullptr){
		 transaction =new int [limit];
		 transaction[0]=+amount;
		 balance = balance + amount; 
		 numoftransaction++;

	 }
	 else if(transaction !=nullptr )
	 {
		 int *y=new int [limit*2];
 for(int i=0;i<numoftransaction;i++){
	 y[i]=transaction[i];
 }
	 balance = balance+amount;
	 delete []transaction;

	 y[numoftransaction]=+amount;
	  
	  transaction = y;
	  numoftransaction++;
	 }
 }





