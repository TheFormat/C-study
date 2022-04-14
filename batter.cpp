#include <iostream>
#include <random>

using namespace std;

class Batter {
    
    private : 
        string name;
        int age = 20;
        string position;
        int contact = 30;
        int power = 30;
        int eye = 30;
        int speed = 30;
        int focus = 30;
        int defend = 30;
    
    public :
            // 경험치 느낌의 point 선언. 능력치에 1씩 부여하는 과정 point만큼 반복
        void first(string name, int age, string position, int point) {
            this->name = name;
            this->age = age;
            this->position = position;
            
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> dis(0,5);
            
            for(int i = 0; i < point; ++i) {
                switch(dis(gen)) {
                    case 0:
                        contact += 1;
                        if(contact == 100) {
                            contact -= 1;
                            
                        }
                        break;
                    case 1:
                        power += 1;
                        if(power == 100) {
                            power -= 1;
                        }
                        break;
                    case 2:
                        eye += 1;
                        if(eye == 100) {
                            eye -= 1;
                        }
                        break;
                    case 3:
                        speed += 1;
                        if(speed == 100) {
                            speed -= 1;
                        }
                        break;
                    case 4:
                        focus += 1;
                        if(focus == 100) {
                            focus -= 1;
                        }
                        break;
                    case 5:
                        defend += 1;
                        if(defend == 100) {
                            defend -= 1;
                        }
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
            cout << "Name : " << name << "    Age : " << age << "    Positon : " << position << endl;
            cout << "contact : " << contact << "  power  : " << power << endl;
            cout << "eye     : " << eye << "  speed  : " << speed << endl;
            cout << "focus   : " << focus << "  defend : " << defend << "\n\n" << endl;
        }
};

class PlayersList {
    
    private :
        public: Batter player[25];
        int player_list_size = 0;
        
        void addPlayer(string name, int age, string potsition, int first_point) {
            player[player_list_size].first(name, age, potsition, first_point);
            player_list_size += 1;
        }
    
    public :
        void setList() {
            addPlayer("Alex", 21, "3B", 350);
            addPlayer("Bailey", 19, "SS", 250);
            addPlayer("Charlie", 33, "LF", 270);
            addPlayer("Desmond", 20, "CF", 200);
            addPlayer("Emmerich", 23, "2B, SS", 150);
            addPlayer("Freddy", 25, "1B, 3B", 350);
            addPlayer("Gunther", 36, "C", 230);
            addPlayer("Henry", 34, "RF", 180);
            addPlayer("Isabel", 28, "DH", 240);
            
        }
        
        void showPlayer() {
            for(int i = 0; i < player_list_size; ++i) {
                player[i].Rating();
            }
        }
    
};

void magicfunction() {
    
    PlayersList Movings;
    Movings.setList();
    Movings.showPlayer();

}


int main() {
    magicfunction();
    
    return 0;
}
