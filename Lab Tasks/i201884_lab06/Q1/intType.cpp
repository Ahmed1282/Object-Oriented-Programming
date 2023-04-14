#include "intType.h"
#include"intType.h"

intType::intType(){
    numb=0;
}
intType::intType(int n){
    numb=n;
}
void intType::setNum(int x){
    numb=x;
}
int intType::getNum() const{
    return numb;
}
int intType::numLength(){
    int count=0;
    int x=numb;
    while(x>0){
    x=x/10;
    count++;
    }
    return count;
}
std::string intType::int_to_string(){
    return std::to_string(numb);
} 
int intType::reverseNum(){
    int newNumb=0;
    int x=numb;
    while(x>0){
    newNumb=x%10+newNumb*10;
    x/=10;
    }
    return newNumb;
}
int intType::sum_all_digits(){
    int sum=0;
    int x=numb;
    while(x>0){
    sum=x%10+sum;
    x/=10;
    }
    return sum;

}
float intType::avg_of_digits(){
    int sum=0;
    int x=numb;
    while(x>0){
    sum=x%10+sum;
    x/=10;
    }
    return (float)sum/numLength();

}

int intType::sum_even_digits(){
    int sum=0;
    int x=numb;
    while(x>0){
    int a=x%10;
    if(a%2==0)
       sum+=a; 
    x/=10;
    }
    return sum;

}
int intType::sum_odd_digits(){
    int sum=0;
    int x=numb;
    while(x>0){
    int a=x%10;
    if(a%2!=0)
       sum+=a; 
    x/=10;
    }
    return sum;
}

int add(intType & num1, intType & num2){
    return num1.getNum()+num2.getNum();
}
int sub(intType & num1, intType & num2){
    return num1.getNum()-num2.getNum();
}
int multiply(intType & num1, intType & num2){
    return num1.getNum()*num2.getNum();
}
int divide(intType & num1, intType & num2){
    if(num2.getNum()!=0)
    return num1.getNum()/num2.getNum();
    else return 0;
}