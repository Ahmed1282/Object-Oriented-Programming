#ifndef PARK_H
#define PARK_H
#include <string>
using namespace std;
class Park{
private:
    double ticketPrice;
    int capacity;
    double total;
    int count;
public:
    Park();
    Park(int, double);
    Park(Park &copy);
    void setTicketPrice(double);
    void setCapacity(int);
    double getTickectPrice() const;
    int getCapacity() const;
    double getTotal() const;
    void getTicket(int);
    void exitPark(int);

    bool isFull();

};
#endif