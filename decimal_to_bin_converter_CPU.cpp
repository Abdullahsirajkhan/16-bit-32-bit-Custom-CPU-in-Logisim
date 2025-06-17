#include <iostream>
#include <string>
using namespace std;

string dec_to_bin_con(long long dec){
   long long num=0; string result;
   while(dec>0){
   num=dec%2;
   dec/=2;
   result=to_string(num)+result;
   }
   return result;
}


int main() {
    cout<<dec_to_bin_con(100000000000);

    return 0;
}