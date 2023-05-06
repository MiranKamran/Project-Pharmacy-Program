#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int op;
  cout<<"To buy medicine please choose from the following options:\n1) Select from medicine list \n2) Enter medicine name";
  cin>>op;
  if(op==1)
  {
     string record[110];
     int serial;
    ifstream in("medicine_record.txt");
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
    cout<<"\nPlease confirm the medicine:";
   }
  else if(op==2)
  {
    string m_name;
    cout<<"PLease enter medicine name:";
    cin>>m_name;

  }
return 0;
}
