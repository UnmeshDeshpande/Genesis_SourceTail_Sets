#include <iostream>
#include <memory>
#include<algorithm>
#include <string>
#include <vector>

using namespace std;

struct MediaAsset
{
    virtual ~MediaAsset() = default; // make it polymorphic
};

class Song : public MediaAsset
{
public:
    std::wstring artist;
    std::wstring title;
    Song(const std::wstring& artist_, const std::wstring& title_) :
        artist{ artist_ }, title{ title_ } {}
};


int main()
{
  auto p = std::make_unique<int[]>(5);

// Initialize the array.
for (int i = 0; i < 5; ++i)
{
    p[i] = i;
    std::cout << p[i] << endl;
}


auto sp1 = make_shared<Song>(L"Coldplay", L"Fix You");
std::cout<< "Object Shared Pointer Location:" << sp1 <<endl;
return 0;
}
