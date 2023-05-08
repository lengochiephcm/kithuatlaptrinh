using namespace std;
#include<iostream>

int main(){
	//preloaded with 100 coins each (number of coins each denomination reserve)
	int r1=100,r2=100,r5=100,r10=100;
	
	//the number of coins in each overflow bin
	int excr1=0,excr2=0,excr5=0,excr10=0;
	
    while(r1!=0 || r2!=0 || r5!=0 || r10!=0)
	{
	    //to select a product (A,B,C,D)
	    cout<<".........welcome........."<<endl;
	    cout<<"please select the product"<<endl;
	    cout<<endl;

	    //num is the choise of coustomer
	    int num;

	    cout<<"product A : select 1\n";
	    cout<<"product B : select 2\n";
	    cout<<"product C : select 3\n";
	    cout<<"product D : select 4\n";
	    cout<<"Enter The Desired Product Number : ";
	    cin>>num;
	
	    while(num>4){	
	        cout<<"invalid select please enter product number again......\n";
	        cout<<"Enter The Desired Product Number : ";
	        cin>>num;
        }
        cout<<endl;

	    //price of products that are offered to coustomers by the vending machine
	    int productA=20,productB=30,productC=40,productD=50;
    
        //to display the amount of product ehich is selected by the coustomer
        int price=0;

        switch(num){
    	    case 1 : price=productA; cout<<"the price of product A is - RS:20"<<endl;break;
    	    case 2 : price=productB; cout<<"the price of product B is - RS:30"<<endl;break;
    	    case 3 : price=productC; cout<<"the price of product C is - RS:40"<<endl;break;
    	    case 4 : price=productD; cout<<"the price of product D is - RS:50"<<endl;
	    }
	
	    cout<<"please enter the payment through the slot (RS.1,2,5 and 10 coins are only accepted)"<<endl;
	
        //variables which are used to handle the coustomer payment
	    int tempr1=0,tempr2=0,tempr5=0,tempr10=0;
	
	    //variables which are used to handle the handing over the balance to a coutomer
	    int tempr1_1=0,tempr2_1=0,tempr5_1=0,tempr10_1=0; 
	
	    int count=0,payment=0,lack=0;
	    while(payment<price)
		{
		    if(count!=0)
		    {
			    lack=price-payment;
			    cout<<"Rs."<<lack<<" insufficient, please insert remaining amount....."<<endl;
			    cout<<"please enter the payment through the slot (RS.1,2,5 and 10 coins are only accepted)"<<endl;
		    }

	        cout<<"Number of RS. 1 coins - ";
	        cin>>tempr1;

 	        cout<<"Number of RS. 2 coins - ";
	        cin>>tempr2;

	        cout<<"Number of RS. 5 coins - ";
	        cin>>tempr5;

	        cout<<"Number of RS. 10 coins - ";
	        cin>>tempr10;
	 
	        //caculate the total payment 
	        payment+=(tempr1*1+tempr2*2+tempr5*5+tempr10*10);
	        cout<<"\n";
	        cout<<"You have pay :Rs."<<payment<<".00";
	        //add the entered coins to the appripriate denomination reserve
	        r1+=tempr1;
	        r2+=tempr2;
	        r5+=tempr5;
	        r10+=tempr10;
	 
	        tempr1=0,tempr2=0,tempr5=0,tempr10=0;
	 
	        count++;
	        cout<<endl;
	    }
	
	
	    //calculate the coins in the bin and overflow bin
	    int balance=0;
	    balance=payment-price;
	    tempr10=balance/10;
	    if(r10<tempr10)
		{
		    tempr10=r10;
	    }
	    balance=balance-tempr10*10;

	    tempr5=balance/5;
	    if(r5<tempr5)
		{
		    tempr5=r5;
	    }
	    balance=balance-tempr5*5;

	    tempr2=balance/2;
	    if(r2<tempr2)
		{
		    tempr2=r2;
	    }
	    balance=balance-tempr2*2;
	    tempr1=balance/1;
	    if(r1<tempr1)
		{
             tempr1=r1;
        }
    
        balance=payment-price;
    
        //handover the balance customer through the coin slot
        if(balance)
		{
    	    if(balance==0)
			{
    		    cout<<"Your balance is :Rs."<<balance<<".00"<<endl;
		    }
		    else
			{
			    cout<<"Your balance is :Rs."<<balance<<".00"<<" Get your balance through the coin slot"<<endl;
		    }
		}
		else
		{
			cout<<"Out of change. Get back your payment Rs. "<<payment<<".00 through the coin slot...."<<endl;
		}
		
		if(tempr10>0){
			cout<<"Rs. 10 : "<<tempr10<<endl;
		}
		if(tempr5>0){
			cout<<"Rs. 5 : "<<tempr5<<endl;
		}
		if(tempr2>0){
			cout<<"Rs. 2 : "<<tempr2<<endl;
		}
		if(tempr1>0){
			cout<<"Rs. 1 : "<<tempr1<<endl;
		}
		cout<<"Thank you....."<<endl;
		cout<<endl<<endl;
		
		//The balance will be deducted from the denomination reserves appropriately
	    r1-=tempr1;
		r2-=tempr2;
		r5-=tempr5;
		r10-=tempr10;
		
		//moves excess coins to the oppropriate overflow bin
        //maximum size of each denomination reserve is 120 coins
	    if(r1>100)
		{
		    excr1+=(r1-100);
		    r1=100;
	    }
	
		if(r2>100)
		{
		    excr2+=(r2-100);
		    r2=100;
	    }
	
		if(r5>100)
		{
		    excr5+=(r5-100);
		    r5=100;
	    }
	
		if(r10>100)
		{
		    excr10+=(r10-100);
		    r10=100;
	    }
		
		//reintialize with 0
		tempr1=0, tempr2=0, tempr5=0, tempr10=0;
		//tempr1_1=0, tempr2_1=0, tempr5_1=0, tempr10_1=0;
		payment=0, balance=0;
	
		//Owners option to terminate the process of the vending machine whenever required
		int password=0; //default value of pasword is given as 0 (Authorized pasword is 12345)
		cout<<"Enter the password to terminate (Authorized people only)"<<endl;
		cout<<"If you are a coustomer enter 0 for password to continue"<<endl;
		cin>>password;
		if(password==12345)
		{
			break;//Terminate the loop if the correct password entered
		}
		cout<<endl;
	}
	cout<<endl;
	
	int password;
	if(password)
	{
		//this part is displayed only if the vanding machine runs out of change not if the owner terminates the process
		cout<<"Out of change, sorry for the inconvenience"<<endl;
		cout<<"Please check the denomination reserves...."<<endl;
	}
	else
	{
		//this part is printed if the owner terminated the process
		cout<<"Progrem terminated by owner....."<<endl;
	}
	
	//Dosplys coins in each denomination reserve after the vanding machine runs out of change or the process is terminated by the owner
	cout<<"Coins in each denomination reserve"<<endl;
	cout<<"Number of coins in Rs. 1.00 reserve : "<<r1<<endl;
	cout<<"Number of coins in Rs. 2.00 reserve : "<<r2<<endl;
	cout<<"Number of coins in Rs. 5.00 reserve : "<<r5<<endl;
	cout<<"Number of coins in Rs. 10.00 reserve : "<<r10<<endl;
	
	//Dosplys coins in each overflow bin after the vanding machine runs out of change or the process is terminated by the owner
    cout<<"Coins in each overflow bin"<<endl;
	cout<<"Number of coins in Rs. 1.00 overflow bin : "<<excr1<<endl;
	cout<<"Number of coins in Rs. 2.00 overflow bin : "<<excr2<<endl;
	cout<<"Number of coins in Rs. 5.00 overflow bin : "<<excr5<<endl;
	cout<<"Number of coins in Rs. 10.00 overflow bin : "<<excr10<<endl;
	
return 0;
}