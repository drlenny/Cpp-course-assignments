// Section 16
// Pure virtual functions and abstract base classes
#include <iostream>
#include <vector>

using namespace std;

class Shape
{ // Abstract Base class
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0;   // pure virtual function
    virtual void rotate() = 0; // pure virtual function
    virtual ~Shape() {}
};

class Open_Shape : public Shape
{ // Abstract class
public:
    virtual ~Open_Shape() {}
};

class Closed_Shape : public Shape
{ // Abstract class
public:
    virtual ~Closed_Shape(){};
};

class Line : public Open_Shape
{ // Concrete class
public:
    virtual void draw() override
    {
        std::cout << "Drawing a line" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a line" << std::endl;
    }
    virtual ~Line() {}
};

class Circle : public Closed_Shape
{ // Concrete class
public:
    virtual void draw() override
    {
        std::cout << "Drawing a circle" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a circle" << std::endl;
    }
    virtual ~Circle() {}
};

class Square : public Closed_Shape
{ // Concrete class
public:
    virtual void draw() override
    {
        std::cout << "Drawing a square" << std::endl;
    }
    virtual void rotate() override
    {
        std::cout << "Rotating a square" << std::endl;
    }
    virtual ~Square() {}
};

void screen_refresh(const vector<Shape *> &shapes){
    cout << "Refreshing" << endl;
    for (const auto p:shapes)
        p->draw();
}

int main()
{
    // Shape s;  // error
    // Shape *p = new Shape();  // error

    Circle c;
    c.draw();

    // Base class pointer
    Shape *ptr = new Circle();
    ptr->draw(); // dynamic polymorphism so the function call will be bound at runtime ; define interface at base class level
    ptr->rotate();

    Shape *s1 = new Circle(); // pointing to concrete derived classes
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    vector<Shape *> shapes{s1, s2, s3};
    // for (const auto p : shapes)
    //     p->draw();

    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;

    return 0;
}
