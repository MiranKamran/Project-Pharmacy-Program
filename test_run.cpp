#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string medicine_name[100];
    int ans;
    for(int i=0;i<100;i++)
    {
    cout<<"Please enter medicine name to add medicine:";
    cin>>medicine_name[i];
    ofstream out("medicine_record.txt", ios::app);
    out<<medicine_name[i];
    out<<"\n";
    cout<<"Do you want to continue adding new medicine: \n1) Yes\n2) No\n";
    cin>>ans;
    if(ans==1)
    {
        continue;
    }
    else if(ans==2)
    {
        i=99;
    }
    
    }
    return 0;
}