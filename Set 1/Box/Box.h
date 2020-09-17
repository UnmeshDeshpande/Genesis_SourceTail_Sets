class Box
{
    int m_length;
    int m_breadth;
    int m_height;
public:
    Box();
    Box(int,int,int);
    Box(int);
    Box(const Box &);
    int length();
    int breadth();
    int height();
    int volume (int,int,int);
    void display();
};
