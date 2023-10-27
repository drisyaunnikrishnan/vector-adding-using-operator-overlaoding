#include<iostream>
#include<conio.h>
using namespace std;

class vector 
{
  
int a;
  
int b;
  
int c;

 
public:void read () 
  {
    
 
cin >> a >> b >> c;
  
} 
void display () 
  {
    
cout << a << " i" << "+ " << b << " j" << "+ " << c << " k";
  
} 
friend vector operator - (vector, vector);

 
};


vector operator - (vector obj1, vector obj2) 
{
  
vector diff;
  
 
diff.a = obj1.a - obj2.a;
  
diff.b = obj1.b - obj2.b;
  
diff.c = obj1.c - obj2.c;
  
return diff;

 
}


int main () 
{
  
vector obj1, obj2, result;
  
 
cout << "\nenter the first coefficents :";
  
obj1.read ();
  
 
cout << "\nenter the second coefficents :";
  
obj2.read ();
  
result = obj1 - obj2;
  
 
result.display ();

 
} 
 
