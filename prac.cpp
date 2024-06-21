
#include <iostream>
class Inventory{
    public:
        Inventory();
        Inventory(std::string);
        Inventory(std::string, int, double);
        Inventory(std::string, int, double, int);
    private:
        std::string name;
        int itemNum;
        double price;
        int unitInstock;

};


// Default constractor
Inventory::Inventory()
{
    name ="";
    price = 0.0;
    itemNum = -1;
    unitInstock = 0;
}

// Parameterized constructor
Inventory::Inventory(std::string n)
{
    name = n;
    price = 0.0;
    itemNum = -1;
    unitInstock = 0;
}

Inventory::Inventory(std::string n, int Inum, double cost)
{
    name = n;
    itemNum = Inum;
    price = cost;
    unitInstock = 0;
}

Inventory::Inventory(std::string n, int Inum, double cost  , int inStock)
{
    name = n;
    price = cost;
    itemNum = Inum;
    unitInstock = inStock;

}
class phoneBook{
    public:
        void setTime(int, int, int);
        void getTime(int&, int&, int&) const;
        void printTime() const;
        void incrementSeconds();
        void incrementMinutes();
        void incrementHours();
        bool equalTime(const phoneBook&) const;
        phoneBook(int, int, int); // constructor with parameter
        phoneBook(); // constructor without parameter 

    private:
        int hr;
        int min;
        int sec;

};

phoneBook::phoneBook(int hours, int minutes, int seconds)
{
   setTime(hours, minutes, seconds);
}

phoneBook::phoneBook()
{
    hr = 0;
    min = 0;
    sec = 0;
}
void phoneBook::setTime(int hours, int minutes, int seconds)
{
    // hours
    if(0 <= hours && hours < 24)
        hr = hours;
    else 
        hr = 0;
    // mins
    if (0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;
    // secs
    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else
     sec = 0;
}

void phoneBook::getTime(int &hours, int &minutes, int &seconds) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

void phoneBook::printTime()const
{
    if (hr < 0)
        std::cout << "0";
    std::cout << hr << ":";
    if (min < 0)
        std::cout <<  "0";
    std::cout << min <<":";
    if (sec < 0)
        std::cout << "0";
    std::cout << sec << std::endl;
}

void phoneBook::incrementHours()
{
    hr++;
    if (hr > 23)
        hr = 0;
}

void phoneBook::incrementMinutes()
{
    min++;
    if(min > 59)
    {
        min = 0;
        incrementHours();
    }
}
void phoneBook::incrementSeconds()
{
    sec++;
    if (sec > 59)
    {
        sec = 0;
        incrementMinutes();
    }
}

bool phoneBook::equalTime(const phoneBook& typ) const
{
    return (hr == typ.hr && min == typ.min && sec == typ.sec);
}
int main(void)
{
    phoneBook myphone;
    phoneBook yourphone;
    int hrs;
    int mins;
    int sec;
    myphone.setTime(5, 4, 30);
    std::cout << "Line 2 :: My phone" << std::endl;
    myphone.printTime();
    std::cout << "Line 5 Your clock" << std::endl;
    yourphone.printTime();

    // set the time for your phone
    yourphone.setTime(5, 45, 16);
    std::cout << "Line 9: after setting your phone " << std::endl;
    yourphone.printTime();

    //  check for the equal time
    if(myphone.equalTime(yourphone))
        std::cout << "The time is the same" << std::endl;
    else
     std::cout << "The time is not the same " <<std::endl;

    std::cout << "Ente the value of time " << std::endl;
    std::cin >> hrs >> mins >> sec ;

    myphone.setTime(hrs, mins, sec);
    std::cout << "New time" << std::endl;
    myphone.incrementSeconds();
    myphone.printTime();
}