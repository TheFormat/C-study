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
            // 경험치 느낌의 point 선언. 능력치에 1씩 부여하는 과정 point만큼 반복
        void First(int point) {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> dis(0,5);
            for(int i = 0; i < point; ++i) {
                switch(dis(gen)) {
                    case 0:
                        contact += 1;
                        break;
                    case 1:
                        power += 1;
                        break;
                    case 2:
                        eye += 1;
                        break;
                    case 3:
                        speed += 1;
                        break;
                    case 4:
                        focus += 1;
                        break;
                    case 5:
                        defend += 1;
                        break;
                }
            }
        }
        
        void Contact() {
            this -> contact += 1;
            this -> eye += 1;
        
        }
        void Muscle() {
            this -> power += 2;
        }
        void Medit() {
            this -> focus += 2;
        }
        void Run() {
            this -> speed += 2;
        }
        void Fungo() {
            this -> defend += 2;
        }
        void Rating() {
            cout << "contact : " << contact << " power : " << power << endl;
            cout << "eye : " << eye << "     speed : " << speed << endl;
            cout << "focus : " << focus << "   defend : " << defend << "\n\n" << endl;
        }
};


int main() {
    BStat Alex;
    Alex.First(300);
    Alex.Rating();
    Alex.Fungo();
    Alex.Rating();
    
    return 0;
}
