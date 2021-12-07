#include<iostream>
using namespace std; 

int main(){
   int n, fact = 1;
   cin>>n;

   for(int i = 1; i <= n; i++){
     fact = fact*i; 
   }
   cout<<"factorial of "<<n<<" is: "<<fact<<endl;
   return 0;
}