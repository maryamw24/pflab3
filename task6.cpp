#include <iostream>
using namespace std;
main()
{
string name;
float matric_marks, inter_marks, ecat_marks;
float matric_per, inter_per, ecat_per;
float m_aggregate, i_aggregate, e_aggregate, total;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter your matric marks:";
cin>>matric_marks;
matric_per=(matric_marks/1100)*100;
cout<<"Enter inter marks:";
cin>>inter_marks;
inter_per=(inter_marks/550)*100;
cout<<"Enter ecat marks:";
cin>>ecat_marks;
ecat_per=(ecat_marks/400);
m_aggregate=(matric_per*0.10);
i_aggregate=(inter_per*0.40);
e_aggregate=(ecat_per*0.50);
total=m_aggregate+i_aggregate+e_aggregate;
cout<<"total aggregate:"<<total;
}