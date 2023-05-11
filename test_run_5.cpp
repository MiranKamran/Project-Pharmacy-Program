#include<iostream>
using namespace std;
class seller
{
private:
int id_no;
string name;
public:
void set()
{
    string a="miran";
    int p=1430;
    id_no=p;
    name=a;
}
void seller_authentication()
{
string s_n="miran";
int s_id=1430;
  cout<<endl<<"Please enter your credentials:";
  cout<<endl<<"Enter your name:";
  cin>>s_n;
  cout<<endl<<"Enter your ID no:";
  cin>>s_id;
  cout<<id_no;
  cout<<endl<<name;
  if(s_n==name)
  {
    if(s_id==id_no)
    {
    cout<<endl<<"Login Successful!";
    }
  }
  else
  {
    cout<<"Incorrect Credentials!"<<endl<<" Program Terminated!";
  }

}
};
int main()
{
    seller s;
    s.set();
    s.seller_authentication();
}