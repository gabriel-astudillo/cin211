#include <iostream>
#include <string>
#include <cstdlib>

#include <cmath>
class Punto{
    private:
    float x;
    float y;
    
    public:
    Punto(float x0, float y0){
        x = x0;
        y = y0;
    }
    
    void moverEn(float deltaX, float deltaY){
        x += deltaX;
        y += deltaY;
    }
    
    float distancia(Punto p){
        float d;
        float dx2, dy2;
        
        dx2 = pow(p.x - x, 2);
        dy2 = pow(p.y - y, 2);
        
        d = sqrt(dx2 + dy2);
        return(d);
    }
    
    float getX(){
        return(x);
    }
    
    float getY(){
        return(y);
    }

    float distancia(Punto* p){
        float d;
        float dx2, dy2;
        
        dx2 = pow(p->x - x, 2);
        dy2 = pow(p->y - y, 2);
        
        d = sqrt(dx2 + dy2);
        return(d);
    }
};

void prueba01(){
    Punto pA = Punto(10,20);
    Punto pB = Punto(5,15);

    pA.moverEn(30,40);

    std::cout << pA.getX() << "\n";
    std::cout << pA.getY() << "\n";

    std::cout << pA.distancia(pB)  << "\n";

    Punto* pC = new Punto(10,20);
    std::cout << pC->getX() << "\n";

    pC->moverEn(30,40);

    std::cout << pC->getX() << "\n";
    std::cout << pC->getY() << "\n";

    std::cout << pB->distancia(pC) << "\n";

}

int main(int argc, char* argv[]){

    prueba01();
   
    return(EXIT_SUCCESS);
}