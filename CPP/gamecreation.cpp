/*

Fictional RPG Game Character Creation
You are tasked with creating a Character Creation System for a role-playing game (RPG) using C++.
This system allows players to create a character with various attributes such as name, type, health, attack power, defense power, and magical abilities.
You must implement the system using object-oriented programming concepts, specifically focusing on classes, objects, constructors, overloading, and encapsulation.

Requirements:
Class Definition:

Create a class Character that represents a game character.
The class should have the following private attributes:

name: a string to hold the character's name.
type: a string representing the character's type (e.g., "Warrior", "Mage", "Archer").
health: an integer representing the health of the character (default value of 100).
attackPower: an integer representing the attack strength of the character.
defensePower: an integer representing the defense strength of the character.
magicPower: an integer representing the magic power (only for certain types like Mage, default 0 for others).
Constructor Overloading:
Implement multiple constructors for the Character class:
A default constructor that initializes the character with default values (e.g., "Unnamed", "Unknown" type, etc.).
A parameterized constructor that allows the player to initialize all attributes by passing values at object creation.
An additional constructor that allows players to create non-magic characters (e.g., Warriors) without specifying magicPower.
Encapsulation (Private Attributes, Getters, and Setters):
Implement getter and setter methods for each private attribute (name, type, health, attackPower, defensePower, magicPower).
Ensure that:
The health value cannot exceed 100.
The magic power can only be set for certain types (e.g., "Mage").
The setter methods should include validation checks (e.g., health must be between 0 and 100).
Behavior Methods:
Add a method attack() that simulates an attack. The method should print the attack power and deduct a value from an enemy's health.
Add a method defend() that simulates a defensive action. It should print the defense power and calculate the health loss reduction when attacked.
Add a method useMagic() for magic-capable characters (like Mages) that prints the magic power and applies special damage.
Main Program:
In the main function:
Create multiple objects using the different constructors.
Demonstrate the use of getter and setter methods.
Perform some actions (e.g., attacking, defending, using magic).
Print out all character details using the getter methods.

*/


#include <iostream>
#include <string>
using namespace std;

class Character {
private:
    string name;
    string type;
    int health;
    int attackPower;
    int defensePower;
    int magicPower;

public:
    // Default Constructor
    Character() : name("Unnamed"), type("Unknown"), health(100), attackPower(10), defensePower(5), magicPower(0) {}

    // Parameterized Constructor for all attributes
    Character(string n, string t, int h, int atk, int def, int mp) : name(n), type(t), attackPower(atk), defensePower(def) {
        setHealth(h);
        setMagicPower(mp);
    }

    // Parameterized Constructor for non-magic characters (e.g., Warrior, Archer)
    Character(string n, string t, int h, int atk, int def) : name(n), type(t), attackPower(atk), defensePower(def), magicPower(0) {
        setHealth(h);
    }

    // Encapsulation: Getters
    string getName() const { return name; }
    string getType() const { return type; }
    int getHealth() const { return health; }
    int getAttackPower() const { return attackPower; }
    int getDefensePower() const { return defensePower; }
    int getMagicPower() const { return magicPower; }

    // Encapsulation: Setters
    void setName(string n) { name = n; }
    void setType(string t) { type = t; }
    void setHealth(int h) {
        if (h >= 0 && h <= 100) health = h;
        else health = 100; // default to 100 if invalid
    }
    void setAttackPower(int atk) { attackPower = atk; }
    void setDefensePower(int def) { defensePower = def; }

    void setMagicPower(int mp) {
        if (type == "Mage") {
            magicPower = mp;
        } else {
            magicPower = 0; // Non-magic characters can't have magic power
        }
    }

    // Behavior: Attack
    void attack(Character &enemy) {
        cout << name << " attacks with power " << attackPower << "!\n";
        enemy.takeDamage(attackPower);
    }

    // Behavior: Defend
    void defend() {
        cout << name << " defends with power " << defensePower << "!\n";
    }

    // Behavior: Use Magic (for Mages only)
    void useMagic(Character &enemy) {
        if (type == "Mage") {
            cout << name << " uses magic with power " << magicPower << "!\n";
            enemy.takeDamage(magicPower);
        }
        else {
            cout << name << " cannot use magic!\n";
        }
    }

    // Helper method to reduce health when attacked
    void takeDamage(int damage) {
        int reducedDamage = damage - defensePower;
        if (reducedDamage < 0) reducedDamage = 0;
        health -= reducedDamage;
        if (health < 0) health = 0;
        cout << name << " takes " << reducedDamage << " damage! Health is now: " << health << "\n";
    }

    // Display character details
    void displayCharacter() const {
        cout << "Name: " << name << "\n";
        cout << "Type: " << type << "\n";
        cout << "Health: " << health << "\n";
        cout << "Attack Power: " << attackPower << "\n";
        cout << "Defense Power: " << defensePower << "\n";
        if (type == "Mage") cout << "Magic Power: " << magicPower << "\n";
        cout << "------------------------\n";
    }
};

int main() {
    // Creating objects using different constructors
    Character warrior("Thorin", "Warrior", 100, 20, 15);
    Character mage("Gandalf", "Mage", 80, 10, 5, 30);
    Character defaultChar;

    // Display characters
    warrior.displayCharacter();
    mage.displayCharacter();
    defaultChar.displayCharacter();

    // Simulating some actions
    warrior.attack(mage);     // Warrior attacks Mage
    mage.defend();            // Mage defends
    mage.useMagic(warrior);   // Mage uses magic on Warrior

    // Testing setters and getters
    warrior.setHealth(120);   // Should not allow health > 100
    warrior.setHealth(85);
    cout << warrior.getName() << "'s health after setting: " << warrior.getHealth() << "\n";

    return 0;
}
