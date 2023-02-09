



#include<iostream>
using namespace std;
class details
{
	public:
		char name[20];
		int age;
		long int phone;
		void get()
		{
			
			cout<<"\n Enter your name :";
			cin>>name;
			cout<<"\n Enter your Age :";
			cin>>age;
			cout<<"\n Enter your Contact number :";
			cin>>phone;
		}
		void show()
		{
			cout<<"\n Details Entered : ";
			cout<<"""\n \n Name :"<<name;
			cout<<" \n \n Age : "<<age;
			cout<<"\n \n Contact number :"<<phone;
		}
		
};
struct Cars 
{
	string mark [10] = {"Honda","BMW","Marceeds","Audi","Seat","Skoda","Volks","Toyota","Opel","Kia"}; 
	string color [10]={"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey","white"}; 
	string maxs_peed [10]={"100 Km/h ","120 Km/h","120 Km/h","150 Km/h","130 Km/h","160 Km/h","180 Km/h","190 Km/h","170 Km/h","120 Km/h"}; 
    int price [ 10 ] ={4,10,8,12,2,7,4,6,9,8} ; 
 	
};
struct Lessee { 
 
   string Name [10]; 
   string Natio_ID [10] ; 
   int payment_acc [ 10] ; 
   }; 
   //Declaring struct 
 Cars car ; 
 Lessee lessee ; 
 
 //First output 
   void Minu () 
 { 
   int num=1; 
 
 for(int i=0 ;i<10;++i) 
 { 
    cout<<num<<" - "<<car.mark[i]<<endl; 
    num++ ; 
 } 
 
 } 
 
 //Second output 
 void Details (int theChoice) 
  { 
     cout<<car.mark[theChoice-1]<<endl; 
   	 cout<<"Color : "<<car.color[theChoice-1]<<endl; 
     cout<<"Maximum Speed : "<<car.maxs_peed[theChoice-1]<<endl; 
     cout<<"Price : "<<car.price[theChoice-1]<<"K/hr"<<endl; 
 
 
  } 
   //check lessee credit 
 
   void check (int j ) 
  { 
      if(lessee.payment_acc[j]  >= car.price[j]) 
           cout<<"process has been done successfully " <<endl; 
           else 
              cout<<" Not Available " <<endl; 
 
  } 
 //User Input 
  void user_input (int theChoice) 
   { 
        int j=theChoice-1 ; 
 		cout<<"\n \n ** Invoice****";
       cout<<"\n  Enter Your Name : "; 
       cin>>lessee.Name[j]; 
       cout<<"\n Enter Your National ID : "; 
       cin>>lessee.Natio_ID[j] ; 
       cout<<"\n Enter Your Credit (in K) : " ; 
       cin>>lessee.payment_acc[j] ; 
 
 
     check( j ) ; 
   } 
 
 
int main() 
{ 
 
 		details c;
 		c.get();
 		c.show();
         string decide ="yes" ; 
 
     cout<<"\n \n Welcome to Our Company ,Choose from the menu : "<<endl; 
     while(decide!="exit") 
     { 
         Minu(); 
     cout<<"Enter Your Choice "<<endl; 
     int theChoice ; 
     cin>>theChoice ; 
     Details(theChoice); 
     cout<<"Do you want to rent  this Car (yes /no /exit ) ? "<<endl; 
     cin>>decide ; 
     if(decide=="yes") { 
        user_input(theChoice); 
        cout<<"Do you want to continue ? " <<endl; 
        cin>>decide; 
        if (decide=="no") break ; 
 
     } 
 
   else { 
      if(decide=="no") 
      { 
          continue ; 
      } 
     else if  (decide=="exit") 
     { 
 
         break ; 
     } 
 
   } 
     } 
 
 
    return 0; 
}
 

 

 

