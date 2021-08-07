#include<iostream>

using namespace std;
 struct calculator 
 {
 	double firstnum;
 	double secendnum;
 	char c;
 };
 int main()
 {

 	pool:calculator p1;  	  
 	        cout<< "enter first number"<<endl<<"first number=";
 	          cin>> p1.firstnum;
 	               cout<< "enter a operator"<< endl<<"operator=";
	                 cin>> p1.c;
			           cout<<"enter secend number"<<endl<<"secend number=";
                          cin>> p1.secendnum; 	  
 	  if(p1.c=='+')
	       cout <<"answer = "<<p1.firstnum + p1.secendnum<<endl;
	
      else if(p1.c=='-')
           cout <<"answer = "<<p1.firstnum - p1.secendnum<<endl;
         
      else if (p1.c=='*')
           cout <<"answer = "<<p1.firstnum * p1.secendnum<<endl;
          
      else if (p1.c=='/')
           cout <<"answer = "<<p1.firstnum / p1.secendnum<<endl;
         
      else
           cout<< "char is wrong"<<endl;
           sleep(2) ;
	goto pool;
	return 0;
	}