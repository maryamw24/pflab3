#include <iostream>
using namespace std;
main()
{
int MBs, KBs, bytes, bits;
cout<<"Enter megabites:";
cin>>MBs;
KBs=MBs*1024;
bytes=KBs*1024;
bits=bytes*8;
cout<<"Value in bits:"<<bits;
}