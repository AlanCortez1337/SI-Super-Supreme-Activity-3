/*
PROMPT: Tuffy just got a train cart of random boxes that are sorted based on an id. Help Tuffy find the box he needs to check!
*/

#include <vector>
#include <iostream>

int main()
{
    std::vector<double> mysteryCart = {1, 2, 3, 4, 5, 8, 9, 12, 23, 54, 56, 57, 58, 67, 78, 79, 80, 81, 82, 86, 87, 90};

    // ⭐TODO: Ask Tuffy by requesting their input which number they are looking for and store it into a variable
    int input;
    std::cout << "what number are u looking for tuffy?";
    std::cin >> input;
    // ⭐TODO: loop through each element of `mysteryCart` and check if that number exists. If it doesnt then print out "Im crying 😭" but if it is there then print "YIPPIE!!!!"
    for (double cart : mysteryCart)
    {
        if (input != cart)
        {
            std::cout << "im crying\n";
        }
        else
        {
            std::cout << "YIPPIE!!!!" << '\n';
        }
    }
    // 💡 Pause: In the line below talk between your team and ask what is the efficiency class of the loop you previously implemented
    // ✅ Answer: O(n)

    // ⭐TODO: Write code to loop through `mysteryCart` but this time make it significantly faster
    // Hint: think about how we went about our world map finder activity earlier.
    int begin = 0;
    int end = mysteryCart.size() - 1;
    for (int i = 0; i < mysteryCart.size(); i++)
    { //  same thing but range based for(int cart : mysteryCart)
        int middle_index = floor(mysteryCart.size() / 2);
        double mid_number = mysteryCart[middle_index];
        if (input < mid_number)
        {
            std::cout << "im crying\n";
            end = middle_index - 1;
        }
        else if (input > mid_number)
        {
            std::cout << "im crying\n";
            begin = middle_index + 1;
        }
        else
        { // if they're equal
            std::cout << "YIPPIE!!!!" << '\n';
        }
    }

    // 💡 Pause: In the line below talk between your team and ask what is the efficiency class of the loop you previously implemented
    // ✅ Answer: O(log n)

    return 0;
}