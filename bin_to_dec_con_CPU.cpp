#include <iostream>
using namespace std;

long long bin_to_dec_con(long long s){
   long long num=0;long result=0;
   long pow=1; 
   while(s>0){
   num=s%10;
   s/=10;
   result+=num*pow;
   pow*=2;
   }
    return result;
}


int main() {

    cout<<bin_to_dec_con(1111111111111111111);

    return 0;
}