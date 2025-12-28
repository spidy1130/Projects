#include<iostream>
#include<fstream>
using namespace std;
int ID;
class student
{
    public:
        int id,age;
        string name,stream;

        void addStudent()
        {
            cout<<"Enter Name: ";
            cin.get();
            getline(cin,name);
            cout<<"Enter Age: ";
            cin>>age;
            cout<<"Enter Stream: ";
            cin>>stream;
            ID++;
            ofstream fout;
            fout.open("student_database.txt",ios::app);
            fout<<"\n"<<ID;
            fout<<"\n"<<name;
            fout<<"\n"<<age;
            fout<<"\n"<<stream;
            fout.close();

            fout.open("id.txt",ios::app);
            fout<<"\n"<<ID;
            fout.close();
            cout<<"Record Added Successfully"<<endl;

        }
        void printAllStudent()
        {
            ifstream fin;
            fin.open("student_database.txt");
            student s;
            while(!fin.eof())
            {
                fin>>s.id;
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin>>s.stream;
                s.print();
            }
            fin.close();
        }
        void print()
        {
            cout<<"\n\n";
            cout<<" ID = "<<id<<endl;
            cout<<" Name = "<<name<<endl;
            cout<<" Age = "<<age<<endl;
            cout<<" Stream = "<<stream<<endl;
            cout<<"####################################"<<endl<<endl;
        }
        void searchStudent(int i)
        {
            ifstream fin;
             fin.open("student_database.txt");
            student s;
            bool found=false;
            while(!fin.eof())
            {
                fin>>s.id;
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin>>s.stream;
                if(i==s.id)
                {
                    found=true;
                    s.print();
                    break;
                }
            }
            if(!found)
                cout<<"Student not found\n\n";
            fin.close();
        }
        void deleteStudent(int i)
        {
            ifstream fin;
            fin.open("student_database.txt");
            ofstream fout;
            fout.open("temp.txt",ios::app);
            student s;
            bool del=true;
            while(!fin.eof())
            {
                fin>>s.id;
                fin.ignore();
                getline(fin,s.name);
                fin>>s.age;
                fin>>s.stream;
                if(i==s.id)
                    del=false;
                if(i!=s.id)
                {
                    fout<<"\n"<<s.id;
                    fout<<"\n"<<s.name;
                    fout<<"\n"<<s.age;
                    fout<<"\n"<<s.stream;
                }
            }
            fin.close();
            fout.close();
            remove("student_database.txt");
            rename("temp.txt","student_database.txt");
            if(del==true)
                cout<<"Record Deleted Successfully"<<endl;
            else
                cout<<"student not found"<<endl;
        }
        void updateStudent(int i)
     {
        // deleteStudent(id);

        // cout<<"Enter your name"<<endl;
        // cin.get();
        // getline(cin,name);
        // cout<<"Enter your age"<<endl;
        // cin>>age;
        // cout<<"Enter your stream"<<endl;
        // cin>>stream;
        // ID++;

        // ofstream fout;
        // fout.open("student_database.txt",ios::app);
        // fout<<"\n"<<id;
        // fout<<"\n"<<name;
        // fout<<"\n"<<age;
        // fout<<"\n"<<stream;
        // fout.close();

        // cout<<"Record updated Successfully"<<endl;
         ifstream fin;
            fin.open("student_database.txt");
            ofstream fout;
            fout.open("temp.txt",ios::app);
            student s;
            int up=0;
            while(!fin.eof())
            {
                //extracting from file
                    fin>>s.id;
                    fin.ignore();
                    getline(fin,s.name);
                    fin>>s.age;
                    fin>>s.stream;
                if(i==s.id)
                {
                    student temp;
                    cout<<"Enter Name: ";
                    cin.get();
                    getline(cin,temp.name);
                    cout<<"Enter Age: ";
                    cin>>temp.age;
                    cout<<"Enter Stream: ";
                    cin>>temp.stream;
                
                    
                    fout<<"\n"<<i;
                    fout<<"\n"<<temp.name;
                    fout<<"\n"<<temp.age;
                    fout<<"\n"<<temp.stream;
                    up=1;
                    
                }
                else
                {
                    
                    //writing in temp file
                    fout<<"\n"<<s.id;
                    fout<<"\n"<<s.name;
                    fout<<"\n"<<s.age;
                    fout<<"\n"<<s.stream;
                }
                

                
            }
            fin.close();
            fout.close();
            remove("student_database.txt");
            rename("temp.txt","student_database.txt");
            if(up==1)
                cout<<"Record updated Successfully"<<endl;
            else
                cout<<"student not found"<<endl;
     }

};
int main()
{
    ifstream fin;
    fin.open("id.txt");
    if(!fin)
    {
        cout<<"file not found:";
    }
    else
    {
        while(!fin.eof())
         fin>>ID;
    }
    fin.close();
    int choice;

    while(true)
    {  
        cout<<"\n\n1. Add Student"<<endl;
        cout<<"2. Print all the students"<<endl;
        cout<<"3. Search a student"<<endl;
        cout<<"4. Update a student"<<endl;
        cout<<"5. Delete a student"<<endl;
        cout<<"6. Exit"<<endl;
        
        cout<<"Enter Your choice"<<endl;

       cin>>choice;

       student s;
       int id;
       switch(choice)
       {
           case 1 : s.addStudent();
                    break;
           case 2 : s.printAllStudent();
                    break;
           case 3 :
                    cout<<"Enter student id"<<endl;
                    cin>>id;
                    s.searchStudent(id);
                    break;

        case 4 :    cout<<"Enter student id"<<endl;
                    cin>>id;
                    s.updateStudent(id);
                    break;

           case 5 :
                    cout<<"Enter student id"<<endl;
                    cin>>id;
                    s.deleteStudent(id);
                    break;


          case 6 : return 0;
          default: cout<<"invalid choice"<<endl;
       }
   }
}