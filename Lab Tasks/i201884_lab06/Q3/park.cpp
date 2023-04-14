#include "park.h"
Park::Park(){
    capacity=total=count=0;
    ticketPrice=20.0;
}

void Park::setTicketPrice(double p){
    ticketPrice=p;
}
Park::Park(int c, double p){
    capacity=c;
    ticketPrice=p;
    count=0;
    total=0;
}
Park::Park(Park &copy){
    capacity=copy.capacity;
    ticketPrice=copy.ticketPrice;
    total=copy.total;
    count=copy.count;
}

double Park::getTickectPrice() const{
    return ticketPrice;
}
double Park::getTotal() const{
    return total;
}
int Park::getCapacity() const{
    return capacity-count;
}
void Park::getTicket(int numb){
    if(count+numb<=capacity){
        count+=numb;
        total+=numb*ticketPrice;
    }
}

void Park::exitPark(int numb){
    if(count-numb>0){
        count-=numb;
    }
}

bool Park::isFull(){
    if(count>=capacity)
        return true;
    else return false;
}