#include<iostream>
using namespace std;
class details{
	public:
      int Rno,grade;
       string name;
       void get_name(string name){
           cout<<name<<endl;
   }
      void get_num(int Rno, int grade){
          cout<<Rno<<endl<<grade<<endl;
  }
};
int main(){
    details s[3];
    cout<<"Enter student details:"<<endl;
    cin>>s[0].name>>s[0].Rno>>s[0].grade;
    cin>>s[1].name>>s[1].Rno>>s[1].grade;
    cin>>s[2].name>>s[2].Rno>>s[2].grade;
    cout<<"Details ofstudent 1:"<<endl;
    s[0].get_name(s[0].name);
    s[0].get_num(s[0].Rno,s[0].grade);
    cout<<"Details ofstudent 2:"<<endl;
    s[1].get_name(s[1].name);
	s[1].get_num(s[1].Rno,s[1].grade);
    cout<<"Details ofstudent 3:"<<endl;
    s[2].get_name(s[2].name);
    s[2].get_num(s[2].Rno,s[2].grade);
    return 0;
}
