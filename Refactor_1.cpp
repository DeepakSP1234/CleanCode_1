#include <iostream>

using namespace std;

class Icon
{
  public:
  virtual void move()=0;
  virtual void flair()=0;
  
  protected:
      Icon(float speed,float glow, float energy)
      {
        this->speed = speed;
        this->glow = glow;
        this->energy = energy;
        
      };
  
  private:
      float speed, glow, energy;
};


class spinner: public Icon
{
  
  public:
    spinner(bool clockwise, bool expand,
    float speed,float glow, float energy) :
    Icon::Icon(speed,glow,energy){
        this-> clockwise = clockwise;
        this-> expand = expand;
    }
    
    virtual void move(){
    cout << "Move - spinner called"<< endl;  
    }
    virtual void flair(){
    cout << "Flair - spinner called"<< endl;    
    }
    
  private:
    bool clockwise; // need for spinner
    bool expand; // need for spinner
};

class slider : public Icon
{
    public:
    slider (bool vertical, int distance,
    float speed,float glow, float energy) :
    Icon::Icon(speed,glow,energy){
        this-> vertical = vertical;
        this-> distance = distance;
    }
    
    virtual void move(){
    cout << "Move - slider called"<< endl;  
    }
    virtual void flair(){
    cout << "Flair - slider called"<< endl;    
    }
  
  private:
    bool vertical; // need for slider
    int distance; // need for slider
  
};

class hopper : public Icon
{
  public: 
    hopper (bool visible, int xcoord, int ycoord,
    float speed,float glow, float energy) :
    Icon::Icon(speed,glow,energy)
    {
        this-> visible = visible;
        this-> xcoord = xcoord;
        this-> ycoord = ycoord;
    } 
    
    virtual void move(){
    cout << "Move - hopper called"<< endl;  
    }
    virtual void flair(){
    cout << "Flair - hopper called"<< endl;    
    }
    
  private:  
    bool visible; // need for hopper
    int xcoord, ycoord; // need for hopper
};

int main(){
  
   spinner Obj1(true,true, 3.2f,7.8f,9.8f);
   Obj1.flair();
   
   slider Obj2(false, 10, 3.2f,7.8f,9.8f);
   Obj2.flair();
   
   hopper Obj3(true, 10, 20, 3.2f,7.8f,9.8f);
   Obj3.move();
   return 0;
}
