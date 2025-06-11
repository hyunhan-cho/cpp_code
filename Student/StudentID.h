#include <string>

class StudentID {
    private:
    
    std::string name;
    int idNUmber;
    
    public:

    // Constructor to initialize StudentID with name and ID number
    StudentID(std:: string name, int idNumber) 
        : name(name), idNUmber(idNumber) {}
    
        std::string getName();
        int getID();
    ~StudentID() = default; // Default constructor
};
