//IN THE FOLLOWING CODE FIND THE DEBT AND REFACTOR THE DESIGN


class spinner
{
  
  public:
    spinner(bool spinDir, bool expand_q,
    float speed_q,float glow_q, float energy_q) :
    Icon(speed_q,glow_q,energy_q){
        clockwise = spinDir;
        expand = expand_q;
    }
    
    virtual void move(){
      
    }
    virtual void flair(){
      
    }
    
  private:
    bool clockwise; // need for spinner
    bool expand; // need for spinner
}

class slider
{
    slider(bool vertical_q, int distance_q,
    float speed_q,float glow_q, float energy_q) :
    Icon(speed_q,glow_q,energy_q){
        vertical = vertical_q;
        distance = distance_q;
    }
    
    virtual void move(){
      
    }
    virtual void flair(){
      
    }
  
  private:
    bool vertical; // need for slider
    int distance; // need for slider
  
}

class hopper
{
    hopper(bool visible_q, int xcoord_q, int ycoord_q,
    float speed_q,float glow_q, float energy_q) :
    Icon(speed_q,glow_q,energy_q)
    {
        visible = visible_q;
        xcoord = xcoord_q;
        ycoord = ycoord_q;
    } 
    
    virtual void move(){
      
    }
    virtual void flair(){
      
    }
    
  private:  
    bool visible; // need for hopper
    int xcoord, ycoord; // need for hopper
}

class Icon
{
  public:
  virtual void move()=0;
  virtual void flair()=0;
  
  protected:
      Icon(float speed_q,float glow_q, float energy_q): 
      speed_q(speed),glow_q(glow),energy_q(energy) 
      {};
  
  private:
      float speed, glow, energy;
};
 


int main(){
  
   Icon iconObj(0);
   iconObj.flair();
   return 0;
}
