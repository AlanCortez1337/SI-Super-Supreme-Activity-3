/*
PROMPT: Tuffy just got orders that a fruit train is going to swing by the station and needs your help defining it and manipulating the content of it.
*/

// 🥑 TODO: include all of the proper library
#include <vector>
#include <string>

int main()
{
    // 🥭 TODO: instantiate a vector of strings called fruitTrain with some random values
    std::vector<std::string> fruitTrain{"apple", "guava", "pineapple", "mango", "kiwi"};
    // 🍎 TODO: remove the last element of the vector
    fruitTrain.erase((fruitTrain.size() - 1));
    // 🍒 TODO: Clear the vector of all of its elements
    fruitTrain.clear();
    // 🍍 TODO: Create a for loop that loops 3 times
    for (int i = 0; i < 3; i++)
    {
    }
    // 🍇 TODO: Ask the user what fruit they want to add to the cart then push it to the vector.
    std::cout << "What fruit do you want to add to the cart?";
    std::string foodCart;
    std::cin >> foodCart;
    // 💡 Pause: In the line below talk between your team and ask what is the efficiency class of the loop you previously implemented
    // ✅ Answer: constant

    // 🥝 TODO: Instantiate a new vector called copyTrain and copy the contents of fruitTrain into it.
    std::vector<std::string> copyTrain(fruitTrain);
    // 🍋 TODO: push a new fruit into the copyTrain
    copyTrain.push_back(foodCart);
    // 🍅 TODO: Check if the fruitTrain is empty, if it is NOT then print "Train is loaded and ready for departure! ChooChoo!"
    if (copyTrain.size() != 0)
    {
        std::cout << "Train is loaded and ready for departure! ChooChoo!";
    }
    // 🍐 TODO: Write a while loop that goes through ALL elements of fruitTrain and prints out each item to the terminal
    int i = 0;
    while (i > fruitTrain.size())
    {
        std::cout << fruitTrain[i] << '\n';
        i++;
    }
    // 🍉 TODO: Write a range-based loop that goes through ALL elements of copyTrain and prints out each item to the terminal
    for (std::string train : copyTrain)
    {
        std::cout << train;
    }
    // 💡 Pause: In the line below talk between your team and ask what is the efficiency class of the loop you previously implemented
    // ✅ Answer: linear

    return 0;
}