#include<iostream>
#include<bitset>

using namespace std;


int main()
{
 int var1=23;
 cout<<var1<<endl;
 cout<<showbase<<oct<<var1<<endl;
 cout<<showbase<<dec<<var1<<endl;
 cout<<showbase<<hex<<var1<<endl;
 cout<<bitset<8>(var1);
}