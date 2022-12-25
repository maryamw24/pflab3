#include <iostream>
using namespace std;
main()
{
float bits, bytes, KBs, MBs;
cout<<"Enter value in bits:";
cin>>bits;
bytes=bits/8;
KBs=bytes/1024;
MBs=KBs/1024;
cout<<"Value in MBs:"<<MBs;
}