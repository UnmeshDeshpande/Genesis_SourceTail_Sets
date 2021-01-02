class Point
{
    int m_x,m_y;
public:
    Point();
    Point(int,int);
    Point(const Point &);
    int distanceFromOrigin();
    int quadrant();
    int isOrigin();
    int isOnXaxis();
    int isOnYaxis();
    void display();
};
