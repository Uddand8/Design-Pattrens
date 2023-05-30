/******************************************************************************
SINGLETON DESIGN PATTREN :Singleton design pattern is a software design principle
that is used to restrict the instantiation of a class to one object. 
This is useful when exactly one object is needed to coordinate actions across the system.
HOW TO CREAT:
we must have 1)static member.2)private constructor.3)static function().
*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;//https://www.codeproject.com/KB/cpp/singletonrvs/Singleton_RVS_src.jpg

class Gamesetting {
    static Gamesetting*instence;
    int brigthness,height,width;
    Gamesetting() : brigthness(100),height(14),width(20){};

public:
static Gamesetting*getInstence() {
    if(instence==NULL) 
        instence=new Gamesetting(); 
           return instence;
        }
        void setbrightness(int b) {brigthness=b;}
        void setheight(int h) {height=h;}
        void setwidth(int w) {width=w;}
        
        int getbrightness() {return brigthness;}
        int getheight() {return  height;}
        int getwidth() {return width;}
        
        void displaysetting() {
            cout<<"brightness :"<<brigthness<<endl;
            cout<<"height :"<<height<<endl;
            cout<<"width :"<<width<<endl;
        }
};
Gamesetting*Gamesetting::instence=NULL;
void somefunction() {
 Gamesetting *setting=Gamesetting::getInstence();
        setting->displaysetting();
}
        int main() {
        Gamesetting *setting=Gamesetting::getInstence();
        setting->displaysetting();
        setting->setbrightness(200);
        setting->setheight(28);
        setting->setwidth(40);
        somefunction();
        return 0;
        }

OUTPUT:
brightness :100
height :14
width :20
brightness :200
height :28
width :40

EXAMPLE :--
#include <iostream>
#include<string>
using namespace std;

class Singleton {
    static Singleton *instence;
    string ID,name;
    int rollno;
    Singleton():ID("DEL-ES1246"),name("Uddand shaik"),rollno(101){}
    public:
    static Singleton *getinstence() {
        if(instence==NULL)
        instence=new Singleton();
        return instence;
    }
    void setID(string id) {ID=id;}
    void setname(string n) {name=n;}
    void setrollno(int r) {rollno=r;}
    
    string getID() {return ID;}
    string getname() {return name;}
    int getrollno() {return rollno;}
    
    void display() {
        cout<<"ID :"<<ID<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"rollno :"<<rollno<<endl;
    }
};
Singleton *Singleton::instence=0;
void somefunction() {
    Singleton *s=Singleton::getinstence();
s->display();
}
int main( ){
Singleton *s=Singleton::getinstence();
s->display();
s->setID("DEL-ES1291");
s->setname("shaik");
s->setrollno(102);
somefunction();
return 0;
}
