class Image
{
    int m_x;
    int m_y;
    int m_width;
    int m_height;
public:
    Image();
    Image(int,int,int,int);
    Image(const Image &);
    void Move(int,int);
    int scale(int);
    void Resize(int,int);
    void display();

};
