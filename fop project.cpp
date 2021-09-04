#include<iomanip>
#include<iostream>
using namespace std;
struct Amount {
    string item;
    float price, amount;
    int min;
};
struct Item {
    string item;
    float price;
    float amount;
    
};
string key;
Item food[10]= {{"Sandwich",50,0},{"Shiro",80,0},{"Kitfo",300,0},{"Tibs",200,0},{"Lasagna",120,0},{"Burger",120,0},{"Pizza",125,0}};
Item drink[10]= {{"Wine",200,0},{"Soft drink",20,0},{"Water",15,0},{"Beer",30,0},{"Malta",25,0}};
Amount ingre[10]= {"Flour",10,0,200,{"Sugar",10,0,150}};
void order(Item food[],Item drink[],float *Bill);
void ingredient(float*bill) ;
void profit(float*bill,float*Bill) ;
void Main_Menu();
void add();
int main()
{

	float bill,Bill;
    int x;
    Main_Menu();
level:
    cin>>x;
    switch(x) {
    case 1:
        order(food,drink,&Bill);
        break;
    case 2:
        ingredient(&bill);
        break;
    case 3:
        profit(&bill,&Bill);
        break;
    case 4: 
        add();
        break;
    default:
    	
        cout<<"Invalid input please try again";
        goto level;
    }
    return 0;
}

void Main_Menu() {//Display menu of the program
    cout<<"...... RESTAURANT........\n";
    cout<<"Enter 1 To order food\n";
    cout<<"Enter 2 Manage Ingredient\n";
    cout<<"Enter 3 To compute profit\n";
    cout<<"Enter 4 To display daily sales report\n";
}
void ingredient(float*bill) {// manage ingredients usage
    float p;
    cout<<"Please buy ingredients and fill the following information\n";
    for(int i=0; i<2; i++) {
        cout<<"How much "<<ingre[i].item<<" did you buy\n";
        cin>>ingre[i].amount;
       * bill=ingre[i].amount*ingre[i].price;
        if(ingre[i].amount<ingre[i].min) {
            cout<<"Insufficient amount of "<<ingre[i].item<<endl;

        }
    }
    cout<<"Press any key to continue or 0 to quit\n";
    cin>>key;
    if(key!="0"){ main();}
} 
void prepaid_card(float b) {//provide prepaid card
    string p_word;
    float in,tip,y;
    char choice;
    cout<<"\nEnter your card password\n";
    cin>>p_word;
    cout<<"Enter the amount of money in your card\n";
    cin>>in;
    if(b<=in) {
        cout<<"Your bill is paid successfully\n";
        cout<<"Would you like to give Tip(YorN)\n";
choose:
        cin>>choice;
        switch(choice) {
        case 'Y':
        case 'y':
            cout<<"Enter amount of tip you want to give\n";
            cin>>tip;
            cout<<"Thanks for your tip\n";
            y=in-(tip+b);
            cout<<"Your remaining amount is "<<y<<endl;
            break;
        case 'N':
        case 'n':
            y=in-b;
            cout<<"Your remaining amount in your card is "<<y<<endl;
            break;
        default:
            cout<<"Invalid input please Try again\n";
            goto choose;
        }
        cout<<"Delivery or Remote order( D or R)\n";
        // Remote order and delivery service
        char de;
        cin>>de;
        string t_num;
        string address,s_address;
        switch(de) {
        case 'R':
        case'r':
            cout<<"Enter your table number\n";
            cin>>t_num;
            cout<<"Your order will be right away Thanks\n";
            break;
        case 'D':
        case 'd':
            cout<<"Enter your address \n";
            cin>>address;
            cout<<"Name of your street\n";
            cin>>s_address;
            cout<<"Your order will be there with in half hour\n";
            cout<<"Thank you for choosing us\n";
        }
    }
    else {
        cout<<"Your balance is insufficient please recharge your card first\n";
    }
    cout<<"Press any key to continue or 0 to quit\n";
    cin>>key;
    if(key!="0"){ main();}
}
void add(){
	int index,value;
	cin>>index;
	cout<<"Enter the item you want to add\n";
	cin>>food[index].item;
	cin>>food[index].price;
	cin>>food[index].amount;
	for(int i=0;i>=index-1;i--){
		food[i+1]=food[i];
		food[index-1]=food[value];
	}
	
}
void order(Item food[], Item drink[],float *Bill) {
    //food ordering for the customer
    int ch,cho,add;
	char choose;
    float bill,bill_1,bill_a,bill_b,bill_c,bill_d;
    cout<<"HELLO MR/MRS WELCOME TO PLANET RESTURANT"<<endl;
    cout<<"What do you like to order\n";
    cout<<" "<<"FOOD MENU"<<"     "<<"PRICE\n";
    for(int i=0; i<7; i++) {
        cout<<i+1<<" "<<food[i].item<<"   "<<food[i].price<<endl;
    }
    cout<<" "<<"Beverage Menu"<<"     "<<"PRICE\n";
    for(int i=0; i<5; i++) {
        cout<<i+1<<" "<<drink[i].item<<"   "<<drink[i].price<<endl;
    }
    cout<<"Enter your choice of Food\n";
    cin>>ch;
    for(int i=0; i<7; i++) {
        if(i+1==ch) {
            food[i].item;
            cout<<"Enter amount of "<<food[i].item<<" you want\n";
            cin>>food[i].amount; 
			bill_a=food[i].price*food[i].amount; 
             cout<<"Is there any thing you want to add\n";
             cin>>choose;
             if(choose=='y'){
             cout<<"Enter your choice of food\n";
             cin>>add;
             for(int i=0; i<7; i++) {

        if(i+1==add) {
            food[i].item;
            cout<<"Enter amount of "<<food[i].item<<" you want\n";
            cin>>food[i].amount;  
			 bill_b=food[i].price*food[i].amount;
			 bill=bill_a+bill_b;
			 break;
			 } 
			 }}
		
			 
	 else if(choose=='n'){
			 bill_a;
			 }
    }}
    cout<<"Enter your choice of drink\n";
    cin>>cho;
    for(int i=0; i<5; i++) {
        if(i+1==cho) {
            drink[i].item;
            cout<<"Enter amount of "<<drink[i].item<<" you want\n";
            cin>>drink[i].amount;
            bill_c=drink[i].price*drink[i].amount;}
           cout<<"Is there any thing you want to add\n";
             cin>>choose;
             if(choose=='y'){
             cout<<"Enter your choice of drink\n";
             cin>>add;
             for(int i=0; i<7; i++) {
 
        if(i+1==add) {
            drink[i].item;
            cout<<"Enter amount of "<<drink[i].item<<" you want\n";
            cin>>drink[i].amount;  
			 bill_d=drink[i].price*drink[i].amount;
			 bill_1=bill_c+bill_d;
			 break;
}}}
else if(choose=='n')
bill_c;    
   *Bill = bill+bill_a+bill_1+bill_c;
    cout<<"Total price of your order is "<<*Bill;
     prepaid_card(*Bill);

 }
   cout<<"press any key to continue";
    cin>>key;
    if(key!="0"){
	 main();
}}
void profit(float*bill,float*Bill) {
 if(*bill==0||*Bill==0){
     cout<<"No existing record";
     cout<<"\n----Fill some records first-----\n";
    main();
	}
    float pro=bill-Bill;
    cout<<"The resturant profit from existing records "<<pro;
	}
