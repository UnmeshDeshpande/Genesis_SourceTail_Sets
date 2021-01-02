class distance {
	int feet;
	int inch;
public:
	distance();
	distance(int, int);
	Currency(const distance&);
	distance operator+(const distance&);
	distance operator-(const distance&);
	distance operator+(int);
	distance operator-(int);
	distance operator++();
	distance operator++(int);
	int get_feet();
	int get_inch();
	bool operator==(const distance&);
	bool operator<(const distance &);
	bool operator>(const distance&);
	void display();
};
