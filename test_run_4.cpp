#include<iostream>
#include<fstream>
using namespace std;
int main()

{
  bool cont=true;
  while (cont==true)
  {
  int op;
  float last_price;
  cout<<"To buy medicine please choose from the following options:\n1) Select from medicine list \n2) Enter medicine name";
  cin>>op;
  if(op==1)
  {
     string record[110];
     int med_price[110];
     int serial;
    ifstream in("medicine_record.txt");
    ifstream pr("medicine_price.txt");
    //in>>h;
    for(int i=1;i<=110;i++)
    {
       in>>record[i];
    }
    for(int j=1;j<=110;j++)
    {
       cout<<"\n"<<record[j];
    }
    cout<<"\nChoose the serial no to select the medicine:";
    cin>>serial;
    cout<<"\nMedicine name:"<<record[serial];
    for(int a=1;a<=110;a++)
    {
       pr>>med_price[a];
    }
    cout<<"\nMedicine Price RS:"<<med_price[serial];
    last_price=med_price[serial]*1.05;
    cout<<"\nMedicine price after tax Rs:"<<last_price;
    int input;
    float check_out=0;
    check_out=check_out+last_price;
    cout<<"\nPlease select the following options:\n 1) Checkout\n2) Continue Buying\n";
    cin>>input;
    if(input==1)
    {
      cont=false;
      cout<<"\nPlease Wait while your order is being processed!";
      cout<<"\nTotal order amount:"<<check_out;
    }
    else if(input==2)
    {
      continue;
    }
    else
    {
      cont=false;
    }

   }
  else if(op==2)
  {
    string m_name;
    cout<<"PLease enter medicine name:";
    cin>>m_name;

  }
  }
return 0;
}