#include <vector>
#include <iostream>


class Profile {
    private:
        std::string name;
        int age;
        std::string city;
        std::string country;
        std::string pronouns;
        std::vector<std::string> hobbies;
    public:
        Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns = "they/them");

std::string view_profile() {
 
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
    bio += "\nHobbies: ";
  for (const auto& hobby : hobbies) {
    bio += hobby + ", ";
  }
  // remove the last ", " from the end of the hobbies list
  bio = bio.substr(0, bio.size() - 2);
  
  return bio;
 
}
void add_hobby(std::string new_hobby);


 


};
