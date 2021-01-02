class Currency{
    int m_rupees,m_paise;
public:
    Currency();
    Currency(int,int);
    Currency(int);
    Currency operator+(const Currency &ref);
    Currency operator-(const Currency &ref);
    Currency operator+(int);
    Currency operator-(int);
    Currency& operator++();
    Currency operator++(int);
    bool operator==(const Currency &ref);
    Currency operator<(int);
    Currency operator>(int);
    void display();
    int getpaise();
    int getrupees();

};
