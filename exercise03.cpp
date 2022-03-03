#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct Box{
  int Width;
  int Height;
  int Length;
};

int main() {

    Box Box1;
    Box Box2;
  
    int totalVolume;
    
    cout << "Enter Box 1 Height : ";
    cin >> Box1.Height;
    cout << "Enter Box 1 Width : ";
    cin >> Box1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> Box1.Length;
    
    cout << "Enter Box 2 Height : ";
    cin >> Box2.Height;
    cout << "Enter Box 2 Width : ";
    cin >> Box2.Width;
    cout << "Enter Box 2 Length : ";
    cin >> Box2.Length;
    
    totalVolume = volume(Box1.Height, Box1.Width, Box1.Length)
             + volume(Box2.Height, Box2.Width, Box2.Length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  return height * width * length;
}