#include<iostream>
using namespace std;

class staff
{
   protected:
   int c;
   string n;
   
   public:
   void sinput()
   {
      cout<<"\nEnter code : ";
      cin>>c;
      cout<<"\nEnter name : ";
      cin>>n;
   }
   
   void idisplay()
   {
      cout<<"\nCode : "<<c;
      cout<<"\nName : "<<n;
   }
};

class teacher : public staff
{
   protected:
   string s;
   string p;
   
   public:
   void tinput()
   {
      sinput();
      cout<<"\nEnter subject : ";
      cin>>s;
      cout<<"\nEnter publication : ";
      cin>>p;
   }
   
   void tdisplay()
   {
      idisplay();
      cout<<"\nSubject : "<<s;
      cout<<"\nPublication : "<<p;
   }
};

class officer : public staff
{
   protected:
   string g;
   
   public:
   void oinput()
   {
      sinput();
      cout<<"\nEnter grade : ";
      cin>>g;
   }
   
   void odisplay()
   {
       idisplay();
       cout<<"\nGrade : "<<g;
   }
};

class typist : public staff
{
   protected:
   double s;
   
   public:
   void tpinput()
   {
      sinput();
      cout<<"\nEnter speed : ";
      cin>>s;
   }
   
   void tydisplay()
   {
      idisplay();
      cout<<"\nSpeed "<<s;
   }
};
    
class regular : public typist
{
   protected:
   double sal;
   
   public:
   void input()
   {
      tpinput();
      cout<<"\nEnter monthly salary : ";
      cin>>sal;
   }
   
   void display()
   {
      tydisplay();
      cout<<"\nSalary : "<<sal;
   }
};    

class casual : public typist
{
   protected:
   double sal;
   
   public:
   void input()
   {
      tpinput();
      cout<<"\nEnter daily salary : ";
      cin>>sal;
   }
   
   void display()
   {
      tydisplay();
      cout<<"\nSalary : "<<sal;
   }
};

int main()
{
   int c,d;
   cout<<"\nEnter 1 for teacher";
   cout<<"\nEnter 2 for typist";
   cout<<"\nEnter 3 for officer";
   cout<<"\nEnter your choice : ";
   cin>>c;
   
   if(c==1)
   {
      teacher t;
      t.tinput();
      t.tdisplay();
   }
   
   else if(c==3)
   {
      officer o;
      o.oinput();
      o.odisplay();
   }
   else if(c==2)
   {
      cout<<"\nEnter 1 for regular";
      cout<<"\nEnter 2 for casual";
      cout<<"\nEnter your choice : ";
      cin>>d;
      
      if(d==1)
      {
         regular r;
         r.input();
         r.display();
      }
      
      else if(d==2)
      {
         casual c;
         c.input();
         c.display();
      }
   }
   return 0;
}
