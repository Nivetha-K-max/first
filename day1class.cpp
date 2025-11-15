#include<iostream>
#include<string>

class Student{
public:
int age;
std::string name;
int mark;
void inputdata(){
std::cout<<"enter name:";
std::cin.ignore(); 
std::getline(std::cin, name);

std::cout<<"enter age:";
std::cin>>age;

std::cout<<"enter marks:";
std::cin>>mark;

}
void display(){
std::cout<<" name:"<<name<<"\n";
std::cout<<"age:"<<age<<"\n";
std::cout<<"marks:"<<mark<<"\n";

}
};

int main(){
Student s1,s2;
std::cout<<"enter student 1 details:";
s1.inputdata();
std::cout<<"\nenter student 2 details:";
s2.inputdata();
s1.display();
s2.display();

}





