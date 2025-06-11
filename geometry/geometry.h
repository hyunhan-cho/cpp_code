
class Shape{
    public:
    virtual double area() const = 0;  // 순수 가상 함수
    virtual ~Shape() {} // 가상 소멸자도 권장
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
        }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}

    double area() const override {
        return side * side; // Area of square
        }
};
