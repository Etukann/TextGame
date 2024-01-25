#include <iostream>
#include <string>

using namespace std;

class Character {
 public:
  int health; 
  int armor;
  int weaponDamage;
};

class Enemy {
 public:
  int health;
  int damage;
};

void displayStats(Character user, Enemy enemy) {
  cout << "User Stats: " << endl;
  cout << "Health: " << user.health << endl;
  cout << "Armor: " << user.armor << endl;
  cout << "Weapon Damage: " << user.weaponDamage << endl;
  cout << endl;
  cout << "Enemy Stats: " << endl;
  cout << "Health: " << enemy.health << endl;
  cout << "Damage: " << enemy.damage << endl;
  cout << endl;
}

void fight(Character &user, Enemy &enemy) {
  int userDamage = user.weaponDamage;
  int enemyDamage = enemy.damage;
  if (user.health <= 0) {
    cout << "You have been defeated. GG go next. End of game." << endl;
  } else {
    cout << "You have defeated the enemy. Congrats. End of game." << endl;
  }
}

int main() {
  Character user;
  user.health = 100;
  user.armor = 20;
  user.weaponDamage = 30;

  string location;
  cout << "Please respond to the options using numbers." << endl;
  cout << endl;
  cout << "You are in a village. Where would you like to go?" << endl;
  cout << endl;
  cout << "1. Forest" << endl;
  cout << "2. Cave" << endl;
  cout << endl;
  cin >> location;

  Enemy enemy;
  if (location == "1") {
    enemy.health = 80;
    enemy.damage = 20;
    cout << "You have encountered a bear in the forest." << endl;
    cout << endl;
  } else if (location == "2") {
    enemy.health = 50;
    enemy.damage = 10;
    cout << "You have encountered a slime in the cave." << endl;
    cout << endl;
  }
  displayStats(user, enemy);

  string action;
  cout << "What would you like to do?" << endl;
  cout << endl;
  cout << "1. Fight" << endl;
  cout << "2. Run away" << endl;
  cout << endl;
  cin >> action;

  if (action == "1") {
    fight(user, enemy);
  } else if (action == "2") {
    cout << "You have run away successfully. But no one wants a coward hero so your title was taken away! End of game." << endl;
    cout << endl;
  }
  return 0;
}
