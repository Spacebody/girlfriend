#ifndef GIRLFRIEND_HPP
#define GIRLFRIEND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <ctime>

using std::cin;
using std::cout;
using std::pair;
using std::string;
using std::vector;

typedef vector<string> Hobbies;
typedef vector<string> Characters;
typedef pair<string, string> Skills;  // first string is the name and the second is the level
typedef vector<string> Stories;
typedef vector<string> ExBoyfirends;

enum Moods
{
    HAPPY,
    SAD,
    ANGRY,
    EXCITED,
    CALM,
    WORRY,
    UNKNOWN_MOOD
};

enum Sexes
{
    MALE,
    FEMALE,
    UNKNOWN_SEX
};

enum Skill_levels
{
    BEGINNER,
    ELEMENTARY,
    INTERMEDIATE,
    ADVANCED
};

class girlfriend
{
    private:
      string name;
      string appearance;
      int age;
      int height;
      int weight;
      Sexes sex;  // enum type
      time_t birthday;
      Stories stories;
      string school;
      string education;  // only care about the highest education
      string hometown;

    protected:
      long money;  //for rich woman, long long is recommanded.
      string job;
      Hobbies hobbies;
      Characters characters;
      Skills skills;
      ExBoyfirends exboyfriends;
      string boyfirend;
      time_t start_time;  // start time， end time will be output when calling destructor

    public:
      string description;  // a description of your girlfriend
      Moods mood;  // enum type

      // constructors
      girlfriend();
      virtual ~girlfriend();

      // get methods
      string get_name();
      string get_appearance();
      int get_age();
      int get_height();
      int get_weight();
      Sexes get_sex();
      time_t get_birthday();
      Stories get_stories(string keyword);  // empty keyword leads to return all stories
      string get_school();
      string get_education();
      string get_hometown();
      string get_description();
      Moods get_mood();
      long get_money();
      string get_job();
      Hobbies get_all_hobbies();
      bool check_hobby(string hobby);
      Characters get_all_characters();
      bool check_character(string character);
      Skills get_all_skills();
      bool check_skill(string skill);
      int get_skill_level(string skill);
      ExBoyfirends get_all_exboyfirends();
      bool check_exboyfriend();
      string get_boyfriend();
      time_t get_start_time();

      // set methods
      void set_name(string new_name);
      void set_appearance(string new_appearance);
      void set_age(int new_age);
      void set_height(int new_height);
      void set_weight(int new_weight);
      void set_sex(Sexes new_sex);
      void add_story(string new_story);
      void add_stories(Stories new_stories);
      void set_school(string new_school);
      void set_education(string new_education);
      void set_description(string new_description);
      void set_mood(Moods new_mood);
      void set_job(string new_job);
      void add_hobbies(Hobbies new_hobbies);
      void remove_hobbies(Hobbies old_hobbies);
      void add_character(Characters new_characters);
      void remove_character(Characters old_characters);
      void add_skills(Skills new_skills);
      void upgrade_skill_level(string skill_name);  //upgrade one stage a time
      void downgrade_skill_level(string skill_name);  //downgrade one stage a time
      void add_exboyfriends(ExBoyfirends new_exboyfriends);
      void remove_exboyfriend(string name); // may be some ex-boyfriend become current boyfriend again, I'm afraid
      void set_boyfriend(string boyfriend);

      // behavior
      void sleeping();
      void wake_up();
      void shopping();
      void cooking();
      void washing();
      void playing();
      void chatting();
      void watching_TV();
      void reading_books();
      void eating();

      // utility
      void game_over();
      void start_game();  // start the time
};

#endif