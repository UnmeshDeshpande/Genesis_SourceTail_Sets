enum colour_t
{
   m_r,m_g,m_b
};
class Colour
{
    int m_r,m_g,m_b;
public:
    Colour();
    Colour(int,int,int);
    Colour(int);
    Colour(colour_t);
    int invert();
    void display();
};
