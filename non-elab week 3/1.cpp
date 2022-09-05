#include<iostream>
#include<cstring>
using namespace std;
class Student{
    public:
    string Name;
    int rool_no;
};

int main(){
    Student s1;
    s1.Name ="denver";
    s1.rool_no=232;
    cout<<s1.Name;
    cout<<s1.rool_no;
    return 0;

}