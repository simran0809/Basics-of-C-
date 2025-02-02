#include <iostream>
using namespace std;

int main() {
    cout << "Hello World" << endl;
    cout << "Hello World" ;

   
   cout<<"enter a number "<<endl;

    //int x; 
    //cin>>x;
    //cout<<x<<endl;

    int marks;
    cin>>marks;
    if (marks>= 90){
        cout<<"Grade A"<<endl;
    }
    else if(marks>= 80){
        cout<<"Grade B"<<endl;
    }
    else if(marks>= 70){
        cout<<"Grade C"<<endl;
    }
    else{
        cout<<"Grade D"<<endl;
    
    }
    int a = 45;
    cout<<a;
    
    int b = 076; //octal number system .
    cout<<b;
    return 0;

 /* int v = 77;
      if(v>0){
        cout<<"Positive"<<endl;
      }
        else{
        cout<<"Negative"<<endl;
        }
*/

}
