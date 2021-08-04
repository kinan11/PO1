#include <iostream>
#include <string>
#include "include/Shape2D.h"
#include "include/Rectangle.h"
#include "include/ShapeContainer.h"


/////////////////////////////////////////////////////////////////////////
int main(int argc, char * argv[]) {
    
    Shape2D f("fff");
    Rectangle p("ppp");
    
    const Vertex w1(1,1);
    const Vertex w2(4,1);
    const Vertex w3(4,4);
    const Vertex w4(1,4);
    
    std::cout << "Utworzone wierzcholki:" << w1 << w2 << w3 << w4 << std::endl;
    
    p.addVertex(w1).addVertex(w2).addVertex(w3).addVertex(w4);
    (((f += w1) += w2) += w3) += w4;
    
    std::cout << "Pole prostokata " << p.name() << " wynosi " << p.area() << std::endl;
    
    Shape2D f2("f2");
    f2 += w2;
    f2 += w3;
    f2.addVertex(w1);
    
    std::cout << "Test: " << (f==f2 ? "" : "nie") << "identyczne figury" << std::endl;
    
    Shape2D f3("f3");
    (((f3 += w1) += w2) += w3) += w4;
    std::cout << "Test 2: " << (f==f3 ? "" : "nie") << "identyczne figury" << std::endl;
    
    std::cout << f3;
    
    ShapeContainer * const k = new ShapeContainer();
    *k += &f;
    *k += &p;
    *k += &f2;
    
    std::cout << *k;
    delete k;
}

/* //OUTPUT:
Jestem nowa figura fff
Jestem nowa figura ppp
Mowiac scisle, jestem prostokatem.
Utworzone wierzcholki: [1, 1] [4, 1] [4, 4] [1, 4]
Pole prostokata ppp wynosi 9
Jestem nowa figura f2
Test: nieidentyczne figury
Jestem nowa figura f3
Test 2: identyczne figury
Figura f3: 
 [1, 1] [4, 1] [4, 4] [1, 4]
W kontenerze znajduja sie:
Figura fff: 
 [1, 1] [4, 1] [4, 4] [1, 4]
Figura ppp: 
 [1, 1] [4, 1] [4, 4] [1, 4]
Figura f2: 
 [4, 1] [4, 4] [1, 1]
*/
