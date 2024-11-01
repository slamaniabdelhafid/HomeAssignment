/*slamaniabdelhafid. group 24.b83 . st130302@student.spbu.ru*/
#include "header.h"
int main()
{
    string word;
    cout<<"Hello World\n";
    while(true){
       std::cout<<"введите слово:";
	   std::cin>>word;
	   if(word == "exit"){
		   break;
	   }
		
	   Hello(word);
	  
	   
    };
     return 0;
    
}
