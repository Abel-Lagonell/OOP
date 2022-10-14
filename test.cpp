
   #include <iostream>
   using namespace std;
  
   class A {
    private:
      int s;

    public:
  
      A(int newS)
      {
       s = newS;
      }
  
      void setS(int newS){
        s = newS;
      }

      int getS(){return s;}

      void print()
      {
        cout << s << endl;
      }

      class B{
        private:     
        int d;
        public:
        B(){ d = 10;}
        B(int newD){ d = newD;}
        void print(){cout << d << endl;}
      };

      B c(); 
   };
  
   int main()
   {
     A a(5);
     a.print();
     A::B b(15);
     b.print();
     a.c().print();
     return 0;
   }

   