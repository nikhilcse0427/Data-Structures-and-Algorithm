#include<iostream>
using namespace std;
class Gun{
    public:
        int amno;
        int damage;
        int scope;
};
class player{  //DATA MEMBER SHOULD BE PRIVATE FOR SECURITY PURPOSE
    private:
        int health;
        int age;
        int score;
        bool alive;
        Gun  gun;
    public:   //IF WE HAVE TO PLAY WITH VALUE OF PRIVATE DATA MEMBER WE HAVE TO USE GETTER AND SETTER
        //GETTER - getSalary() method returns the value of the private salary attribute.

        class Helmet{
            int hp;

        public:
            void setHp(int hp){
            this->hp=hp;
        }

        int getHp(int hp){
            return hp;
         }
         };
        int getHealth(){
            return health;
        }
        int getAge(){
            return age;
        }
        int getScore(){
            return score;
        }
        int getAlive(){
            return alive;
        }
        Gun getGun(){
            return gun;
        }

        //SETTER setSalary()  - method takes a parameter (s) and assigns it to the salary attribute (salary = s).

        void setHealth(int health ){
            this->health = health;
            //player::health = health;   player wala health
        }

        void setAge(int age){
            this->age = age;
        }
        void setScore(int score){
            this->score = score;
        }
        void setAlive(bool alive){
            this->alive =  alive;
        }
        void setGun(Gun gun){
            this->gun = gun;
        }

void setHelmet(int level){
    Helmet * helmet = new Helmet;
    helmet->setHealth();
}
};
/*int add(int a,int b){
    return a+b;
}*/

int addScore(player a, player b){
    return a.getScore() +b.getScore();
}
player maxScorePlayer(player a, player b){
    if(a.getScore()>b.getScore()){
        return b;
    }
    else{
        return a;
    }
}

int main(){
    player harsh;     //object creation statically(execute hone se pehle hi memory allocation ho gya)
    player raghav;
    player* urvi = new player;  //run time, dynamic allocation

    Gun akm;      //no deault constructor for it because here class is user defined
    akm.amno=100;
    akm.damage=50;
    akm.scope=2;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setAlive(true);
    harsh.setHealth(170);

    raghav.setAge(22);
    raghav.setScore(200);
    raghav.setAlive(true);
    raghav.setHealth(200);

    (*urvi).setHealth(20);

    //cout<<add(10,12);

    //ADD SCORE OF HARSH AND RAGHAV

    cout<<addScore(harsh, raghav)<<endl;
    player sanket = maxScorePlayer(harsh, raghav);
    cout<<sanket.getScore()<<endl;
    cout<<sanket.getAge()<<endl;
    cout<<(*urvi).getHealth()<<endl;
    return 0;
}