#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //string h;
    string record[7];
    ifstream in("medicine_record.txt");
    //in>>h;
    for(int i=0;i<7;i++)
    {
       in>>record[i];
    }
    for(int j=0;j<7;j++)
    {
       cout<<"\n"<<record[j];
    }


return 0;
}