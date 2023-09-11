#include <string>
#include <iostream>
#include <vector>
/*
PROMPT: Tuffy just got orders that a fruit train is going to swing by the station and needs your help defining it and manipulating the content of it.
*/

// 🥑 TODO: include all of the proper library

int main()
{
    // 🥭 TODO: instantiate a vector of strings called fruitTrain with some random values
    std::vector<std::string> fruitTrain = {"orange", "apple", "blueberries"};
    // 🍎 TODO: remove the last element of the vector
    fruitTrain.pop_back();
    // 🍒 TODO: Clear the vector of all of its elements
    fruitTrain.clear();
    // 🍍 TODO: Create a for loop that loops 3 times
    for (int i = 0; i < 3; i++)
    {
        std::cout << i << " ";
        // 🍇 TODO: Ask the user what fruit they want to add to the cart then push it to the vector.
        std::string input;
        std::cout << "what fruit do you want? ";
        std::cin >> input;
        fruitTrain.push_back(input);
    }
    std::cout << '\n';
    // 💡 Pause: In the line below talk between your team and ask what is the efficiency class of the loop you previously implemented
    // ✅ Answer: O(1)

    // 🥝 TODO: Instantiate a new vector called copyTrain and copy the contents of fruitTrain into it.
    std::vector<std::string> copyTrain = fruitTrain;

    // 🍋 TODO: push a new fruit into the copyTrain
    copyTrain.push_back("strawberry");

    // 🍅 TODO: Check if the fruitTrain is empty, if it is NOT then print "Train is loaded and ready for departure! ChooChoo!"

    if (!copyTrain.empty())
    {
        std::cout << "Train is loaded and ready for departure! ChooChoo!\n";
    }
    // 🍐 TODO: Write a while loop that goes through ALL elements of fruitTrain and prints out each item to the terminal

    int i;
    while (i < fruitTrain.size())
    {
        std::cout << fruitTrain[i] << '\n';
        i++;
    }
    // 🍉 TODO: Write a range-based loop that goes through ALL elements of copyTrain and prints out each item to the terminal
    for (std::string word : copyTrain)
    {
        std::cout << word << '\n';
    }

    // 💡 Pause: In the line below talk between your team and ask what is the efficiency class of the loop you previously implemented
    // ✅ Answer: O(1)

    return 0;
}