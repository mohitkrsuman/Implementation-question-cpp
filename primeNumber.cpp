#include<iostream>
using namespace std; 

int main(){
   int n, i, m=0, flag=0;
   cout<<"Enter the number to check prime:";
   cin>>n;
   m = n/2;
   for(i = 2; i <= m; i++){
      if(n%i == 0){
         cout<<"Number is not Prime."<<endl;
         break;
         flag = 1;
      }
   }
   if(flag == 0){
      cout<<"number is prime"<<endl;
   }
  
   return 0;
}

// Print prime no till n

// #include<iostream>
// using namespace std; 

// int main(){
   
//    return 0;
// }