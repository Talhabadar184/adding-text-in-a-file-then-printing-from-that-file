
#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[10],n[10];
    int age,x;
    fstream file;
    ofstream out("example.txt");
    cout<<"please enter your name: "<<endl;
    cin.getline(name,10);
    cout<<"please enter your age: "<<endl;
    cin>>age;
    out<<name<<age<<endl;
    file.close();
    
    
    cout<<"adding from text files: "<<endl;
    file.open("example.txt",ios::in);
    file>>n;
    file>>x;
    cout<<n<<endl<<x;
    file.close();
 
    return 0
]
