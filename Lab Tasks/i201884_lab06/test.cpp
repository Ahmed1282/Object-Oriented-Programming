#include "Q1/intType.cpp"
#include "Q2/Employee.cpp"
#include "Q3/park.cpp"
#include "Q4/Holiday.cpp"
#include <gtest/gtest.h>
#include <string>
using namespace std;
TEST(intType, first){
  intType in(1234);
  EXPECT_EQ(1234, in.getNum());
  EXPECT_EQ(4, in.numLength());
  EXPECT_EQ("1234",in.int_to_string());
  EXPECT_EQ(4321, in.reverseNum());
  EXPECT_EQ(10, in.sum_all_digits());
  EXPECT_EQ(2.5, in.avg_of_digits());
  EXPECT_EQ(6, in.sum_even_digits());
  EXPECT_EQ(4, in.sum_odd_digits());
  
}
TEST(intType, second){
  intType n1(12);
  intType n2;
  n2.setNum(6);
  EXPECT_EQ(18, add(n1,n2));
  EXPECT_EQ(6, sub(n1,n2));
    EXPECT_EQ(72, multiply(n1,n2));
  // EXPECT_EQ(12, multiply(n1,n2));// should fail
  EXPECT_EQ(2, divide(n1, n2));
}

TEST (Employee, first){
  int arr[]={1111,2222,3333,4444};
  Employee emp( 111,"Shaggy",arr,340.3 ), emp1;
  emp1=emp;
  EXPECT_EQ(emp1.getEmpName(),"Shaggy");
  EXPECT_TRUE(emp.updatePhone(2222,7689));
}
TEST (Employee, second){
  int arr[3][4]={{1111,2222,3333,4444},{11131,233222,41333,444},{11151,22212,33323,44244}};
  
  Employee *objArray;
  objArray=new Employee[3];
  for (int i = 0; i < 3; i++)
  {
    objArray[i]=Employee(12+i,"Shaggy"+to_string(i),arr[i],333.1+i);
  }
  EXPECT_EQ(objArray[2].getEmpName(),"Shaggy2");
  EXPECT_EQ("Shaggy2", MAX_COM(objArray,3));
  EXPECT_TRUE(objArray[2].updatePhone(22212,11123));
}
  Park p(10,12.0);
  Park *p1;
TEST(Park, First){
 
  EXPECT_FALSE(p.isFull());
  p.getTicket(3);
  EXPECT_EQ(36.0,p.getTotal());
  p.getTicket(10);
  EXPECT_EQ(p.getCapacity(), 7);
  p.setTicketPrice(20);
   p.getTicket(2);
  EXPECT_EQ(76.0,p.getTotal());
}

TEST(Park, second){
  p1=&p;
  EXPECT_FALSE(p1->isFull());
  p1->getTicket(1);
  EXPECT_EQ(96.0,p.getTotal());// because ticket price updted from 12 to 20
  p1->getTicket(10);
  EXPECT_EQ(p1->getCapacity(), 4);
  p1->exitPark(2);
  EXPECT_EQ(p1->getCapacity(), 6);
}
 Holiday hol("Iqbal Day", 9,"November"), *h1;
TEST(Holiday, first){
  Holiday h2("Sunday",9, "November");
  EXPECT_TRUE(hol.setName("Sunday"));
  EXPECT_EQ("November",hol.getMonth());
  EXPECT_TRUE(SameMonth(hol,h2));
  h1=&h2;
  EXPECT_EQ(h1->getName(),"Sunday");
}

TEST(Holiday, second){
  Holiday h1("Iqbal Day", 9,"November"),
  h2("Quaid's Day",25, "December"), 
  h3("Sunday",9, "November"), 
  h4("Defence day",6, "September");
  Holiday h[4]={h1,h2,h3,h4};
  EXPECT_EQ(avgDate(h,4),12.25);
  EXPECT_FALSE(SameMonth(h[0],h[1]));
}
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}