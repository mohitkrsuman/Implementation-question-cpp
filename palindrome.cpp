#include<iostream>
using namespace std; 

int main(){
   int n, ld, temp, sum = 0;
   cout<<"Enter the number"<<endl;
   cin>>n;

   temp = n;
   while(n>0){
     ld = n%10;
     sum = (sum*10) + ld;
     n = n/10;
   }
   if(temp == sum){
      cout<<"Number is palindrome";
   }else{
      cout<<"Number is not palindrome";
   }

   return 0;
}