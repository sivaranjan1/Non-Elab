#include<iostream>
using namespace std;
class Adition{
    public:
    int a,b;
    Adition(){
        cin>>a>>b;
    }
    int add(){
        int c=a+b;
        cout<<c;
        return 0;
    }
};
int main(){
    Adition s1;
    s1.add();
    return 0;
}






























// #include<iostream>
// #include<cstring>
// using namespace std;

// class up{
//     public:
//     string name;

//     void get_str(string a){
//         name=a;
//     }
//     void print_str(){
//         cout<<"uppercase : "<<toupper(name);
//         cout<<"lowercase : "<<toupper(name);
//     }
// }

// int main(){
//     up s1;
//     string name;
//     cin>>name;
//     s1.get_str(name);
//     s1.print_str;
// }