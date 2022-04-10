#include <iostream>
#include <random>

using namespace std;

class BStat {
    
    private : 
    int ctt = 0;
    int pow = 0;
    int eye = 0;
    int spd = 0;
    int fcs = 0;
    int dfd = 0;
    
    public :
    void Contact() {
        this -> ctt += 1;
        this -> eye += 1;
        
    }
    void Muscle() {
        this -> pow += 1;
    }
    void Medit() {
        this -> fcs += 1;
    }
    void Fungo() {
        this -> dfd += 2;
    }
    void Exam() {
        cout << "contact : " << ctt << endl;
    }
};




int main() {
    BStat Alex;
    Alex.Contact();
    Alex.Exam();
    
    
    return 0;
}
