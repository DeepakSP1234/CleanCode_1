#include <iostream>

using namespace std;

class Icon
{
  public:
  virtual void move()=0;
  virtual void flair()=0;
  
  protected:
      Icon(float speed_q,float glow_q, float energy_q): 
      speed(speed_q),glow(glow_q),energy(energy_q) 
      {};
  
  private:
      float speed, glow, energy;
};


class spinner: public Icon
{
  
  public:
    spinner(bool spinDir, bool expand_q,
    float speed_q,float glow_q, float energy_q) :
    Icon::Icon(speed_q,glow_q,energy_q){
        clockwise = spinDir;
        expand = expand_q;
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
    slider (bool vertical_q, int distance_q,
    float speed_q,float glow_q, float energy_q) :
    Icon::Icon(speed_q,glow_q,energy_q){
        vertical = vertical_q;
        distance = distance_q;
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
    hopper (bool visible_q, int xcoord_q, int ycoord_q,
    float speed_q,float glow_q, float energy_q) :
    Icon::Icon(speed_q,glow_q,energy_q)
    {
        visible = visible_q;
        xcoord = xcoord_q;
        ycoord = ycoord_q;
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
