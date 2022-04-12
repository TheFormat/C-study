#include <iostream>
#include <random>

using namespace std;

class BStat {
    
    private : 
        int contact = 30;
        int power = 30;
        int eye = 30;
        int speed = 30;
        int focus = 30;
        int defend = 30;
    
    public :
            // 선수에게 부여할 총 능력치 n. 6개 능력치에 랜덤으로 배분.contact에 (0,n)에서 무작의 난수 넣고, n-=난수 하고 power에 하고..반복
        void First(int n) {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> dis(0,n);
            this -> contact += dis(gen);
            n -= dis(gen);
        }
        
        void Contact() {
            this -> contact += 1;
            this -> eye += 1;
        
        }
        void Muscle() {
            this -> power += 1;
        }
        void Medit() {
            this -> focus += 1;
        }
        void Fungo() {
            this -> defend += 2;
        }
        void Rating() {
            cout << "contact : " << contact << endl;
            cout << "power : " << power << endl;
            cout << "eye : " << eye << endl;
            cout << "speed : " << speed<< endl;
            cout << "focus : " << focus << endl;
            cout << "defend : " << defend << endl;
        }
};




int main() {
    BStat Alex;
    Alex.First(10);
    Alex.Rating();
    Alex.Fungo();
    Alex.Rating();
    
    return 0;
}
