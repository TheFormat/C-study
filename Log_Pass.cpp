#include <iostream>
#include <string>

int main() {
    using namespace std;
    
    string user_id = "admin";
    string user_pw = "1q2w3e4r!";
    
    string id;
    string pw;
    int count = 0;
    while(1){
       cout << "ID : " ;
        cin >> id;
        if(id == user_id){
            while(1){
                cout << "PW : " ;
                cin >> pw;
                if(pw == user_pw){
                    cout << "Welcome!" ;
                    break;
                }
                else{
                    cout << "Wrong PassWord!\n" ;
                    count += 1;
                    if(count >= 5){
                        cout << "There have been several failed attempts to sign in from this account or IP address. Please wait a while and try again later." ;
                        break;
                    }
                }
            }
            break;
        }
        else{
            cout << "Invalid ID!\n";
            count += 1;
            if(count >= 5){
                cout << "There have been several failed attempts to sign in from this account or IP address. Please wait a while and try again later." ;
                break;
            }
        }
    }
    return 0;
}
